#include <iostream>

#include "Config.h"
#include "Math/VectorUtil.h"
#include "MetSelections.h"

using namespace tas;

pair<float, float> getT1CHSMET( FactorizedJetCorrector * jet_corrector, JetCorrectionUncertainty* jecUnc, bool uncUp) {
    // T1 MET correction implementation in central nanoAOD-tools:
    // https://github.com/cms-nanoAOD/nanoAOD-tools/blob/6b4870f6c62dbffc717e82de80ce3e51a254c284/python/postprocessing/modules/jme/jetmetUncertainties.py#L412-L417

    float T1_met    = RawMET_pt();
    float T1_metPhi = RawMET_phi();

    float T1_metx   = T1_met * cos(T1_metPhi);
    float T1_mety   = T1_met * sin(T1_metPhi);

    unsigned int njets_lowpt = CorrT1METJet_rawPt().size();
    unsigned int njets_nominal = Jet_pt().size();
    unsigned int njets_total = njets_lowpt + njets_nominal;

    for(unsigned int ijet = 0; ijet < njets_total; ijet++) {

        float area = 0.;
        float fracEM = 0.;

        // LorentzVector jetp4_uncorr(0,0,0,0);
        LorentzVector jetp4_uncorr;
        if (ijet < njets_lowpt) {
            // look into lowpt jet collection and set raw muon-subtracted p4
            int idx = ijet;
            jetp4_uncorr = LorentzVector(
                    CorrT1METJet_rawPt()[idx],
                    CorrT1METJet_eta()[idx],
                    CorrT1METJet_phi()[idx],
                    0.
                    );
            jetp4_uncorr *= (1-CorrT1METJet_muonSubtrFactor()[idx]);
            area = CorrT1METJet_area()[idx];
            fracEM = 0.;
        } else {
            // look into nominal jet collection and set raw muon-subtracted p4
            int idx = ijet - njets_lowpt;
            jetp4_uncorr = LorentzVector(
                    Jet_pt()[idx],
                    Jet_eta()[idx],
                    Jet_phi()[idx],
                    Jet_mass()[idx]
                    );
            jetp4_uncorr *= (1-Jet_rawFactor()[idx]);
            jetp4_uncorr *= (1-Jet_muonSubtrFactor()[idx]);
            area = Jet_area()[idx];
            fracEM = Jet_neEmEF()[idx] + Jet_chEmEF()[idx];
        }

        if (fracEM > 0.9) continue;
        if (fabs(jetp4_uncorr.eta()) > 9.9) continue;
        if (year() == 2017) { // 2017 EE noise fix (exclude jets with raw pT < 50)
            if (jetp4_uncorr.pt() < 50. && abs(jetp4_uncorr.eta()) >= 2.65 && abs(jetp4_uncorr.eta()) <= 3.139) continue;
        }

        jet_corrector->setJetPtEtaARho(jetp4_uncorr.pt(), jetp4_uncorr.eta(), area, fixedGridRhoFastjetAll());

        // note the subcorrections are stored with corr_vals(N) = corr(N)*corr(N-1)*...*corr(1)
        vector<float> corr_vals = jet_corrector->getSubCorrections();
        double corr             = corr_vals.at(corr_vals.size()-1); // all corrections
        double corr_l1          = corr_vals.at(0);                  // offset correction

        double totalshift = 1.0;
        if (jecUnc != 0 and not isData()) {
            jecUnc->setJetEta(jetp4_uncorr.eta()); 
            jecUnc->setJetPt(jetp4_uncorr.pt()*corr); 
            double shift = jecUnc->getUncertainty(true);
            if (uncUp) totalshift += shift;
            else  totalshift      -= shift;
        }

        if ( corr * jetp4_uncorr.pt() > 15. ){		  
            T1_metx += jetp4_uncorr.px() * (corr_l1-corr*totalshift);
            T1_mety += jetp4_uncorr.py() * (corr_l1-corr*totalshift);
        }				  

    }

    T1_met    = std::sqrt(pow(T1_metx, 2) + pow(T1_mety, 2));
    T1_metPhi = std::atan2(T1_mety, T1_metx);

    return make_pair(T1_met, T1_metPhi);
}


//pair <float, float> getT1CHSMET_fromMINIAOD( FactorizedJetCorrector * jet_corrector, JetCorrectionUncertainty* jecUnc, bool uncUp){

//  float T1_met    = cms3.evt_pfmet_raw();
//  float T1_metPhi = cms3.evt_pfmetPhi_raw();
//  //use option use_cleaned_met to select alternate met collections
//  if (use_cleaned_met == 1) {
//    //MuonEG cleaned MET
//    T1_met    = cms3.evt_muegclean_pfmet_raw();
//    T1_metPhi = cms3.evt_muegclean_pfmetPhi_raw();
//  }

//  // use nominal MET without EE noise fix, except the 09May2018 rereco of 2017F
//  if (use_cleaned_met == 0 && gconf.year == 2017 && gconf.jecEraF.find("09May2018") == string::npos) {
//    T1_met    = cms3.evt_old_pfmet_raw();
//    T1_metPhi = cms3.evt_old_pfmetPhi_raw();
//  }

//  float T1_metx   = T1_met * cos(T1_metPhi);
//  float T1_mety   = T1_met * sin(T1_metPhi);
  
//  if( recompute_raw_met ){
//    cerr << "Cannot recompute raw met in cms4! (Need all PFCands!)" << endl;
//    assert(!recompute_raw_met);

//    LorentzVector met_raw_OTF(0,0,0,0);
//    for( size_t pfind = 0; pfind < cms3.pfcands_p4().size(); pfind++ ){
//      met_raw_OTF -= cms3.pfcands_p4().at(pfind);
//    }
//    T1_met    = met_raw_OTF.pt();
//    T1_metPhi = met_raw_OTF.phi();
//    T1_metx   = T1_met * cos(T1_metPhi);
//    T1_mety   = T1_met * sin(T1_metPhi);
//  }

//  LorentzVector jetp4_unshift_vsum(0,0,0,0);
//  LorentzVector jetp4_shifted_vsum(0,0,0,0);
  
//  for(unsigned int iJet = 0; iJet < cms3.pfjets_p4().size(); iJet++){

//    LorentzVector jetp4_uncorr = cms3.pfjets_p4().at(iJet)*cms3.pfjets_undoJEC().at(iJet);
//    float emfrac = (cms3.pfjets_chargedEmE().at(iJet) + cms3.pfjets_neutralEmE().at(iJet)) / jetp4_uncorr.E();


//    if (emfrac > 0.9                  ) continue; // veto events with EM fraction > 0.9
//    if( abs(jetp4_uncorr.eta()) > 9.9 ) continue; // veto jets with eta > 9.9

//    //  
//    // remove SA or global muons from jets before correcting
//    //

//    for (unsigned int pfcind = 0; pfcind < cms3.pfjets_pfcandmup4().at(iJet).size(); pfcind++){
//      jetp4_uncorr -= cms3.pfjets_pfcandmup4().at(iJet).at(pfcind);
//    }

//    if (use_cleaned_met == 2) { // 2017 EE noise fix (exclude jets with raw pT < 50)
//      if (jetp4_uncorr.pt() < 50. && abs(jetp4_uncorr.eta()) >= 2.65 && abs(jetp4_uncorr.eta()) <= 3.139)
//	continue;
//    }

//    // get L1FastL2L3 total correction
//    jet_corrector->setRho   ( cms3.evt_fixgridfastjet_all_rho()      );
//    jet_corrector->setJetA  ( cms3.pfjets_area().at(iJet) );
//    jet_corrector->setJetPt ( jetp4_uncorr.pt()                      );
//    jet_corrector->setJetEta( jetp4_uncorr.eta()                     );

//    //Note the subcorrections are stored with corr_vals(N) = corr(N)*corr(N-1)*...*corr(1)
//    vector<float> corr_vals = jet_corrector->getSubCorrections();

//    double corr             = corr_vals.at(corr_vals.size()-1); // All corrections
//    double corr_l1          = corr_vals.at(0);                  // offset correction

//    double shift = 0.0;
//    if (jecUnc != 0) {
//      jecUnc->setJetEta(jetp4_uncorr.eta()); 
//      jecUnc->setJetPt(jetp4_uncorr.pt()*corr); 
//      double unc = jecUnc->getUncertainty(true);
//      if( cms3.evt_isRealData() && corr_vals.size() == 4 ) shift = sqrt(unc*unc + pow((corr_vals.at(corr_vals.size()-1)/corr_vals.at(corr_vals.size()-2)-1.),2));	  
//      else                                                 shift = unc;
//    }

//    double totalshift = 1.0;
//    if (jecUnc != 0) {
//      if (uncUp) totalshift += shift;
//      else  totalshift      -= shift;
//    }

//    if ( corr * jetp4_uncorr.pt() > 15. ){		  
//      T1_metx += jetp4_uncorr.px() * (corr_l1-corr*totalshift);
//      T1_mety += jetp4_uncorr.py() * (corr_l1-corr*totalshift);
//    }				  

//  }

//  T1_met    = std::sqrt(pow(T1_metx, 2) + pow(T1_mety, 2));
//  T1_metPhi = std::atan2(T1_mety, T1_metx);

//  return make_pair(T1_met, T1_metPhi);
//}


bool passesMETfilters(bool isData)
{

    if (gconf.year == 2016)
    {
        if (isData)
        {
        }
    }
    else if (gconf.year == 2017)
    {
        if (!Flag_globalTightHalo2016Filter()) return false;
        if (!Flag_HBHENoiseFilter()) return false;
        if (!Flag_HBHENoiseIsoFilter()) return false;
        if (!Flag_EcalDeadCellTriggerPrimitiveFilter()) return false;
        if (!Flag_eeBadScFilter()) return false;
        if (!Flag_goodVertices()) return false;
        if (!Flag_chargedHadronTrackResolutionFilter()) return false;
        if (!Flag_muonBadTrackFilter()) return false;
        if (isData)
        {
        }
    }
    else if (gconf.year == 2018)
    {
        if (isData)
        {
        }
    }
    else
    {
        std::cout << "uh, I don't know what year this is" << std::endl;
    }

    // otherwise, good
    return true;
}

