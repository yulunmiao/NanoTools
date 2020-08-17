#include "IsolationTools.h"

using namespace tas;

bool passesLeptonIso(unsigned int idx, int id, double mini_iso_cut, double pt_ratio_cut, double pt_rel_cut) {
    double mini_iso;
    double pt_ratio;
    double pt_rel;
    if (abs(id) == 11) {
        mini_iso = Electron_miniPFRelIso_all().at(idx);
        pt_ratio = 1 / (Electron_jetRelIso().at(idx) + 1);
        pt_rel = Electron_jetPtRelv2().at(idx);
    } else if (abs(id == 13)) {
        mini_iso = Muon_miniPFRelIso_all().at(idx);
        pt_ratio = 1 / (Muon_jetRelIso().at(idx) + 1);
        pt_rel = Muon_jetPtRelv2().at(idx);
    } else {
        return false;
    }
    bool pass_mini_iso_cut = mini_iso < mini_iso_cut;
    bool pass_pt_ratio_cut = pt_ratio > pt_ratio_cut;
    bool pass_pt_rel_cut = pt_rel > pt_rel_cut;
    return (pass_mini_iso_cut && (pass_pt_ratio_cut || pass_pt_rel_cut));
}
