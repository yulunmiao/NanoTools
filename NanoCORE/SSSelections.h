#ifndef SSSELECTIONS_H
#define SSSELECTIONS_H
#include "Nano.h"
#include "IsolationTools.h"

enum IDLevels {
    IDdefault = -1,
    IDveto = 0, // for Z-veto
    IDfakable = 1, // for fake background + jet cleaning
    IDtight = 2, // for analysis
    IDfakablenoiso = 3,
    IDtightnoiso = 4
};

struct Lepton {
    Lepton(int id=0, unsigned int idx=-1):id_(id),idx_(idx){}
    void set_idlevel(int idlevel) {idlevel_ = idlevel;}
    int id() {return id_;}
    int absid() {return abs(id_);}
    int is_el() {return abs(id_) == 11;}
    int is_mu() {return abs(id_) == 13;}
    int charge() {return -1*id_/abs(id_);}
    unsigned int idx() {return idx_;}
    int idlevel() {return idlevel_;}
    LorentzVector p4() {return abs(id_)==11 ? nt.Electron_p4()[idx_] : nt.Muon_p4()[idx_];}
    float pt() {return abs(id_)==11 ? nt.Electron_pt()[idx_] : nt.Muon_pt()[idx_];}
    float eta() {return abs(id_)==11 ? nt.Electron_eta()[idx_] : nt.Muon_eta()[idx_];}
    private:
    int id_;
    unsigned int idx_;
    int idlevel_ = IDdefault;
};
typedef std::pair<Lepton,Lepton> Hyp;

std::ostream& operator << (std::ostream& os, Lepton& lep)
{
    std::string lepstr = (abs(lep.id())==11) ? "Electron" : "Muon";
    return os << "<" << lepstr << " id=" << std::showpos << setw(3) << lep.id() << std::noshowpos
              << ", idx=" << setw(2) << lep.idx() << ", level=" << lep.idlevel()
              << ", (pT,eta)=" << "(" << lep.pt() << ","<< lep.eta() << ")>";
}
template <typename T1, typename T2>
std::ostream& operator << (std::ostream& os, std::pair<T1, T2>& p)
{
    return os << "(" << p.first << ", " << p.second << ")";
}

vector<Lepton> getLeptons();
std::tuple<int,int,float> getJetInfo(int variation=0);
std::pair<int,Hyp> getBestHyp(vector<Lepton>& leptons);
bool isGoodMuonNoIso(int imu);
bool isTriggerSafenoIso_v1(int iel);
bool isTriggerSafeIso_v1(int iel);
bool passesElectronMVA(int idlevel, int iel);
bool isGoodMuon(int imu);
bool isGoodElectron(int iel);
bool isVetoMuon(int imu);
bool isVetoElectron(int iel);
bool isFakableMuon(int imu);
bool isFakableElectron(int iel);
void dumpLeptonProperties(Lepton lep);

#endif
