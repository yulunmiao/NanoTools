#ifndef SSSELECTIONS_H
#define SSSELECTIONS_H
#include "Nano.h"
#include "IsolationTools.h"

struct Lepton {
    Lepton(int id=0, int idx=-1):id_(id),idx_(idx){}
    void set_idlevel(int idlevel) {idlevel_ = idlevel;}
    int id() {return id_;}
    int charge() {return -1*id_/abs(id_);}
    int idx() {return idx_;}
    int idlevel() {return idlevel_;}
    LorentzVector p4() {return abs(id_)==11 ? nt.Electron_p4()[idx_] : nt.Muon_p4()[idx_];}
    float pt() {return abs(id_)==11 ? nt.Electron_pt()[idx_] : nt.Muon_pt()[idx_];}
    float eta() {return abs(id_)==11 ? nt.Electron_eta()[idx_] : nt.Muon_eta()[idx_];}
    private:
    int id_, idx_;
    int idlevel_ = 0; // 0 = veto, 1 = fo, 2 = tight
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
std::pair<int,Hyp> getBestHyp(vector<Lepton>& leptons);
bool isGoodMuonNoIso(int imu);
bool isTriggerSafenoIso_v1(int iel);
bool passesElectronMVA(int iel);
bool isGoodElectronNoIso(int iel);
bool isGoodMuon(int imu);
bool isGoodElectron(int iel);

#endif
