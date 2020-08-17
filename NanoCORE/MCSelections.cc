#include "MCSelections.h"
#include "Math/VectorUtil.h"

using namespace tas;

//________________________________________________________________
// code to get number of reco jets matched to ISR jets
// inputs are jets with pt > 30, |eta| < 2.4, PF Loose ID, leptons removed
// https://github.com/manuelfs/babymaker/blob/0136340602ee28caab14e3f6b064d1db81544a0a/bmaker/plugins/bmaker_full.cc#L1268-L1295
int get_nisrMatch(const std::vector<LorentzVector> &clean_jets) {

    int nisr(0);
    for (size_t ijet(0); ijet < clean_jets.size(); ijet++) {
        if (clean_jets.at(ijet).pt() < 30.0) continue;
        if (fabs(clean_jets.at(ijet).eta()) > 2.4) continue;
        bool matched = false;
        for (size_t imc = 0; imc < nt.GenPart_pdgId().size(); imc++) {
            if (matched) break;
            if (nt.GenPart_status().at(imc) != 23 || abs(nt.GenPart_pdgId().at(imc)) > 5) continue;
            int momid = abs(nt.GenPart_pdgId().at(nt.GenPart_genPartIdxMother().at(imc)));
            if (!(momid == 6 || momid == 23 || momid == 24 || momid == 25 || momid > 1e6)) continue;
            // check against daughter in case of hard initial splitting
            // - since we don't save daughters, only mothers, we do a double loop here...
            for (size_t jmc = 0; jmc < nt.GenPart_pdgId().size(); jmc++) {
                if (nt.GenPart_genPartIdxMother().at(jmc) != int(imc)) continue;
                float dR = ROOT::Math::VectorUtil::DeltaR(clean_jets.at(ijet), nt.GenPart_p4().at(jmc));
                if (dR < 0.3) {
                    matched = true;
                    break;
                }
            }
        } // Loop over MC particles
        if (!matched) { nisr++; }
    } // Loop over jets

    return nisr;
}
