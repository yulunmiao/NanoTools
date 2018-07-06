#include "SSSelections.h"

using namespace tas;

vector<Lepton> getLeptons() {
    vector<Lepton> leptons;
    for (unsigned int imu = 0; imu < Muon_pt().size(); imu++) {
        if (Muon_pt()[imu] < 10) continue;
        if (!isGoodMuon(imu)) continue;
        auto lep = Lepton(Muon_pdgId()[imu],imu);
        lep.set_idlevel(2);
        leptons.push_back(lep);
    }
    for (unsigned int iel = 0; iel < Electron_pt().size(); iel++) {
        if (Electron_pt()[iel] < 10) continue;
        if (!isGoodElectron(iel)) continue;
        auto lep = Lepton(Electron_pdgId()[iel],iel);
        lep.set_idlevel(2);
        leptons.push_back(lep);
    }
    return leptons;
}

std::pair<int,Hyp> getBestHyp(vector<Lepton>& leptons) {
    int hyp_class = -1;
    Hyp best_hyp;
    if (leptons.size() < 2) return {hyp_class, best_hyp};
    vector<Hyp> hyp3s;
    vector<Hyp> hyp4s;
    for (unsigned int i = 0; i < leptons.size(); i++) {
        for (unsigned int j = i+1; j < leptons.size(); j++) {
            auto& lep1 = leptons[i];
            auto& lep2 = leptons[j];
            if (lep1.charge() == lep2.charge()) {
                if (lep1.pt() > lep2.pt()) hyp3s.push_back({lep1,lep2});
                else hyp3s.push_back({lep2,lep1});
            } else {
                if (lep1.pt() > lep2.pt()) hyp4s.push_back({lep1,lep2});
                else hyp4s.push_back({lep2,lep1});
            }
        }
    }
    vector<Hyp> hyps;
    if (hyp3s.size() > 0) {
        hyps = hyp3s;
        hyp_class = 3;
    } else if (hyp4s.size() > 0) {
        hyps = hyp4s;
        hyp_class = 4;
    }
    if ((hyp_class < 0) || (hyps.size() < 1)) return {hyp_class, best_hyp};
    if (hyps.size() == 1) best_hyp = hyps[0];
    else if (hyps.size() > 1) {
        best_hyp = hyps[0];
        for (unsigned int i = 1; i < hyps.size(); i++){
            Hyp hyp = hyps[i];
            if (abs(hyp.first.id()*hyp.second.id()) > abs(best_hyp.first.id()*best_hyp.second.id())) {
                best_hyp = hyp;
            } else if (hyp.first.pt()+hyp.second.pt() > best_hyp.first.pt()+best_hyp.second.pt())  {
                best_hyp = hyp;
            }
        }
    }
    return {hyp_class, best_hyp};
}


bool isGoodMuonNoIso(int imu) {
    if (fabs(Muon_dxy()[imu]) > 0.05) return false;
    if (fabs(Muon_dz()[imu]) > 0.1) return false;
    if (fabs(Muon_sip3d()[imu]) >= 4) return false;
    if (fabs(Muon_eta()[imu]) > 2.4) return false;
    if (!Muon_tightCharge()[imu]) return false; // pterr/pt<0.2
    if (!Muon_mediumId()[imu]) return false;
    return true;
}

bool isTriggerSafenoIso_v1(int iel) {
    float etaSC = Electron_eta()[iel] + Electron_deltaEtaSC()[iel];
    if (fabs(etaSC) <= 1.479) {
        if (Electron_sieie()[iel] >= 0.011) return false;
        if (Electron_hoe()[iel] >= 0.08) return false;
        // if (fabs(els_dEtaIn().at(iel)) >= 0.01) return false; // NOTE missing
        // if (fabs(els_dPhiIn().at(iel)) >= 0.04) return false; // NOTE missing
        if (fabs(Electron_eInvMinusPInv()[iel]) >= 0.01) return false;
    } else if ((fabs(etaSC) > 1.479) && (fabs(etaSC) < 2.5)) {
        if (Electron_sieie()[iel] >= 0.031) return false;
        if (Electron_hoe()[iel] >= 0.08) return false;
        // if (fabs(els_dEtaIn().at(iel)) >= 0.01) return false;
        // if (fabs(els_dPhiIn().at(iel)) >= 0.08) return false;
        if (fabs(Electron_eInvMinusPInv()[iel]) >= 0.01) return false;
    }
    return true;
}

bool passesElectronMVA(int iel) {
    // C if pT<10, A if pT=10, B if pt>=25, lerp between A,B for pT in [10,25]
    auto mvacut = [](float A, float B, float C, float pt_) {
        if (pt_ < 10) return C;
        else if (pt_ > 25) return B;
        else return A+(B-A)/15.0f*(pt_-10.0f);
    };
    float mva = Electron_mvaFall17noIso()[iel];
    float pt = Electron_pt()[iel];
    float aeta = fabs(Electron_eta()[iel] + Electron_deltaEtaSC()[iel]);
    if (aeta < 0.8) return mva > mvacut(0.2,0.68,0.2,pt);
    if ((aeta >= 0.8 && aeta <= 1.479)) return mva > mvacut(0.1,0.475,0.1,pt);
    if (aeta > 1.479) return mva > mvacut(-0.1,0.32,-0.1,pt);
    return false;
}

bool isGoodElectronNoIso(int iel) {
    if (Electron_miniPFRelIso_all()[iel] > 0.4) return false;
    if (Electron_convVeto()[iel] == 0) return false;
    if (Electron_lostHits()[iel] > 1) return false;
    if (fabs(Electron_dxy()[iel]) > 0.05) return false;
    if (fabs(Electron_dz()[iel]) >= 0.1) return false;
    if (fabs(Electron_eta()[iel] + Electron_deltaEtaSC()[iel]) > 2.5) return false;
    if (fabs(Electron_sip3d()[iel]) >= 4) return false;
    if (Electron_tightCharge()[iel] < 2) return false;
    if (!passesElectronMVA(iel)) return false;
    if (!isTriggerSafenoIso_v1(iel)) return false;
    return true;
}

bool isGoodMuon(int imu) {
    if (!isGoodMuonNoIso(imu)) return false;
    if (!passMultiIso(13, imu, 0.12, 0.80, 7.5)) return false;
    return true;
}

bool isGoodElectron(int iel) {
    if (!isGoodElectronNoIso(iel)) return false;
    if (!passMultiIso(11, iel, 0.09, 0.85, 9.2)) return false;
    return true;
}

