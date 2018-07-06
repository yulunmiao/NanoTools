// -*- C++ -*-
// Generated with args: /home/users/namin/sandbox/noroot/nano/NanoTools/508B6DBB-9742-E811-BA65-A4BF0112BCB0.root -t Events
#ifndef Nano_H
#define Nano_H
#include "Math/LorentzVector.h"
#include "Math/GenVector/PtEtaPhiM4D.h"
#include "Math/Point3D.h"
#include "TMath.h"
#include "TBranch.h"
#include "TTree.h"
#include "TH1F.h"
#include "TFile.h"
#include "TBits.h"
#include "vector"
#include "unistd.h"
#include "chrono"
#include "ctime"
#include "numeric"
#include "TTreeReader.h"
#include "TTreeReaderValue.h"
#include "TTreeReaderArray.h"

typedef ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<float> > LorentzVector;
#define makeP4(Collection, idx) LorentzVector(Collection##_pt[idx],Collection##_eta[idx],Collection##_phi[idx],Collection##_mass[idx]);
#define RANGE(a, b) unsigned a=0; a<b; a++

using namespace std;

class Nano {
private:
protected:
    unsigned int index;
    float CaloMET_phi_;
    TBranch *b_CaloMET_phi_;
    bool loaded_CaloMET_phi_;
    float CaloMET_pt_;
    TBranch *b_CaloMET_pt_;
    bool loaded_CaloMET_pt_;
    float CaloMET_sumEt_;
    TBranch *b_CaloMET_sumEt_;
    bool loaded_CaloMET_sumEt_;
    int Electron_charge_[30];
    vector<int> v_Electron_charge_;
    TBranch *b_Electron_charge_;
    bool loaded_Electron_charge_;
    UChar_t Electron_cleanmask_[30];
    vector<UChar_t> v_Electron_cleanmask_;
    TBranch *b_Electron_cleanmask_;
    bool loaded_Electron_cleanmask_;
    bool Electron_convVeto_[30];
    vector<bool> v_Electron_convVeto_;
    TBranch *b_Electron_convVeto_;
    bool loaded_Electron_convVeto_;
    int Electron_cutBased_[30];
    vector<int> v_Electron_cutBased_;
    TBranch *b_Electron_cutBased_;
    bool loaded_Electron_cutBased_;
    bool Electron_cutBased_HEEP_[30];
    vector<bool> v_Electron_cutBased_HEEP_;
    TBranch *b_Electron_cutBased_HEEP_;
    bool loaded_Electron_cutBased_HEEP_;
    float Electron_deltaEtaSC_[30];
    vector<float> v_Electron_deltaEtaSC_;
    TBranch *b_Electron_deltaEtaSC_;
    bool loaded_Electron_deltaEtaSC_;
    float Electron_dr03EcalRecHitSumEt_[30];
    vector<float> v_Electron_dr03EcalRecHitSumEt_;
    TBranch *b_Electron_dr03EcalRecHitSumEt_;
    bool loaded_Electron_dr03EcalRecHitSumEt_;
    float Electron_dr03HcalDepth1TowerSumEt_[30];
    vector<float> v_Electron_dr03HcalDepth1TowerSumEt_;
    TBranch *b_Electron_dr03HcalDepth1TowerSumEt_;
    bool loaded_Electron_dr03HcalDepth1TowerSumEt_;
    float Electron_dr03TkSumPt_[30];
    vector<float> v_Electron_dr03TkSumPt_;
    TBranch *b_Electron_dr03TkSumPt_;
    bool loaded_Electron_dr03TkSumPt_;
    float Electron_dxy_[30];
    vector<float> v_Electron_dxy_;
    TBranch *b_Electron_dxy_;
    bool loaded_Electron_dxy_;
    float Electron_dxyErr_[30];
    vector<float> v_Electron_dxyErr_;
    TBranch *b_Electron_dxyErr_;
    bool loaded_Electron_dxyErr_;
    float Electron_dz_[30];
    vector<float> v_Electron_dz_;
    TBranch *b_Electron_dz_;
    bool loaded_Electron_dz_;
    float Electron_dzErr_[30];
    vector<float> v_Electron_dzErr_;
    TBranch *b_Electron_dzErr_;
    bool loaded_Electron_dzErr_;
    float Electron_eCorr_[30];
    vector<float> v_Electron_eCorr_;
    TBranch *b_Electron_eCorr_;
    bool loaded_Electron_eCorr_;
    float Electron_eInvMinusPInv_[30];
    vector<float> v_Electron_eInvMinusPInv_;
    TBranch *b_Electron_eInvMinusPInv_;
    bool loaded_Electron_eInvMinusPInv_;
    float Electron_energyErr_[30];
    vector<float> v_Electron_energyErr_;
    TBranch *b_Electron_energyErr_;
    bool loaded_Electron_energyErr_;
    float Electron_eta_[30];
    vector<float> v_Electron_eta_;
    TBranch *b_Electron_eta_;
    bool loaded_Electron_eta_;
    UChar_t Electron_genPartFlav_[30];
    vector<UChar_t> v_Electron_genPartFlav_;
    TBranch *b_Electron_genPartFlav_;
    bool loaded_Electron_genPartFlav_;
    int Electron_genPartIdx_[30];
    vector<int> v_Electron_genPartIdx_;
    TBranch *b_Electron_genPartIdx_;
    bool loaded_Electron_genPartIdx_;
    float Electron_hoe_[30];
    vector<float> v_Electron_hoe_;
    TBranch *b_Electron_hoe_;
    bool loaded_Electron_hoe_;
    float Electron_ip3d_[30];
    vector<float> v_Electron_ip3d_;
    TBranch *b_Electron_ip3d_;
    bool loaded_Electron_ip3d_;
    bool Electron_isPFcand_[30];
    vector<bool> v_Electron_isPFcand_;
    TBranch *b_Electron_isPFcand_;
    bool loaded_Electron_isPFcand_;
    int Electron_jetIdx_[30];
    vector<int> v_Electron_jetIdx_;
    TBranch *b_Electron_jetIdx_;
    bool loaded_Electron_jetIdx_;
    UChar_t Electron_lostHits_[30];
    vector<UChar_t> v_Electron_lostHits_;
    TBranch *b_Electron_lostHits_;
    bool loaded_Electron_lostHits_;
    float Electron_mass_[30];
    vector<float> v_Electron_mass_;
    TBranch *b_Electron_mass_;
    bool loaded_Electron_mass_;
    float Electron_miniPFRelIso_all_[30];
    vector<float> v_Electron_miniPFRelIso_all_;
    TBranch *b_Electron_miniPFRelIso_all_;
    bool loaded_Electron_miniPFRelIso_all_;
    float Electron_miniPFRelIso_chg_[30];
    vector<float> v_Electron_miniPFRelIso_chg_;
    TBranch *b_Electron_miniPFRelIso_chg_;
    bool loaded_Electron_miniPFRelIso_chg_;
    float Electron_mvaFall17Iso_[30];
    vector<float> v_Electron_mvaFall17Iso_;
    TBranch *b_Electron_mvaFall17Iso_;
    bool loaded_Electron_mvaFall17Iso_;
    bool Electron_mvaFall17Iso_WP80_[30];
    vector<bool> v_Electron_mvaFall17Iso_WP80_;
    TBranch *b_Electron_mvaFall17Iso_WP80_;
    bool loaded_Electron_mvaFall17Iso_WP80_;
    bool Electron_mvaFall17Iso_WP90_[30];
    vector<bool> v_Electron_mvaFall17Iso_WP90_;
    TBranch *b_Electron_mvaFall17Iso_WP90_;
    bool loaded_Electron_mvaFall17Iso_WP90_;
    bool Electron_mvaFall17Iso_WPL_[30];
    vector<bool> v_Electron_mvaFall17Iso_WPL_;
    TBranch *b_Electron_mvaFall17Iso_WPL_;
    bool loaded_Electron_mvaFall17Iso_WPL_;
    float Electron_mvaFall17noIso_[30];
    vector<float> v_Electron_mvaFall17noIso_;
    TBranch *b_Electron_mvaFall17noIso_;
    bool loaded_Electron_mvaFall17noIso_;
    bool Electron_mvaFall17noIso_WP80_[30];
    vector<bool> v_Electron_mvaFall17noIso_WP80_;
    TBranch *b_Electron_mvaFall17noIso_WP80_;
    bool loaded_Electron_mvaFall17noIso_WP80_;
    bool Electron_mvaFall17noIso_WP90_[30];
    vector<bool> v_Electron_mvaFall17noIso_WP90_;
    TBranch *b_Electron_mvaFall17noIso_WP90_;
    bool loaded_Electron_mvaFall17noIso_WP90_;
    bool Electron_mvaFall17noIso_WPL_[30];
    vector<bool> v_Electron_mvaFall17noIso_WPL_;
    TBranch *b_Electron_mvaFall17noIso_WPL_;
    bool loaded_Electron_mvaFall17noIso_WPL_;
    float Electron_mvaTTH_[30];
    vector<float> v_Electron_mvaTTH_;
    TBranch *b_Electron_mvaTTH_;
    bool loaded_Electron_mvaTTH_;
    vector<LorentzVector> v_Electron_p4_;
    TBranch *b_Electron_p4_;
    bool loaded_Electron_p4_;
    int Electron_pdgId_[30];
    vector<int> v_Electron_pdgId_;
    TBranch *b_Electron_pdgId_;
    bool loaded_Electron_pdgId_;
    float Electron_pfRelIso03_all_[30];
    vector<float> v_Electron_pfRelIso03_all_;
    TBranch *b_Electron_pfRelIso03_all_;
    bool loaded_Electron_pfRelIso03_all_;
    float Electron_pfRelIso03_chg_[30];
    vector<float> v_Electron_pfRelIso03_chg_;
    TBranch *b_Electron_pfRelIso03_chg_;
    bool loaded_Electron_pfRelIso03_chg_;
    float Electron_phi_[30];
    vector<float> v_Electron_phi_;
    TBranch *b_Electron_phi_;
    bool loaded_Electron_phi_;
    int Electron_photonIdx_[30];
    vector<int> v_Electron_photonIdx_;
    TBranch *b_Electron_photonIdx_;
    bool loaded_Electron_photonIdx_;
    float Electron_pt_[30];
    vector<float> v_Electron_pt_;
    TBranch *b_Electron_pt_;
    bool loaded_Electron_pt_;
    float Electron_r9_[30];
    vector<float> v_Electron_r9_;
    TBranch *b_Electron_r9_;
    bool loaded_Electron_r9_;
    float Electron_sieie_[30];
    vector<float> v_Electron_sieie_;
    TBranch *b_Electron_sieie_;
    bool loaded_Electron_sieie_;
    float Electron_sip3d_[30];
    vector<float> v_Electron_sip3d_;
    TBranch *b_Electron_sip3d_;
    bool loaded_Electron_sip3d_;
    int Electron_tightCharge_[30];
    vector<int> v_Electron_tightCharge_;
    TBranch *b_Electron_tightCharge_;
    bool loaded_Electron_tightCharge_;
    int Electron_vidNestedWPBitmap_[30];
    vector<int> v_Electron_vidNestedWPBitmap_;
    TBranch *b_Electron_vidNestedWPBitmap_;
    bool loaded_Electron_vidNestedWPBitmap_;
    float FatJet_area_[21];
    vector<float> v_FatJet_area_;
    TBranch *b_FatJet_area_;
    bool loaded_FatJet_area_;
    float FatJet_btagCMVA_[21];
    vector<float> v_FatJet_btagCMVA_;
    TBranch *b_FatJet_btagCMVA_;
    bool loaded_FatJet_btagCMVA_;
    float FatJet_btagCSVV2_[21];
    vector<float> v_FatJet_btagCSVV2_;
    TBranch *b_FatJet_btagCSVV2_;
    bool loaded_FatJet_btagCSVV2_;
    float FatJet_btagDeepB_[21];
    vector<float> v_FatJet_btagDeepB_;
    TBranch *b_FatJet_btagDeepB_;
    bool loaded_FatJet_btagDeepB_;
    float FatJet_btagHbb_[21];
    vector<float> v_FatJet_btagHbb_;
    TBranch *b_FatJet_btagHbb_;
    bool loaded_FatJet_btagHbb_;
    float FatJet_eta_[21];
    vector<float> v_FatJet_eta_;
    TBranch *b_FatJet_eta_;
    bool loaded_FatJet_eta_;
    int FatJet_jetId_[21];
    vector<int> v_FatJet_jetId_;
    TBranch *b_FatJet_jetId_;
    bool loaded_FatJet_jetId_;
    float FatJet_mass_[21];
    vector<float> v_FatJet_mass_;
    TBranch *b_FatJet_mass_;
    bool loaded_FatJet_mass_;
    float FatJet_msoftdrop_[21];
    vector<float> v_FatJet_msoftdrop_;
    TBranch *b_FatJet_msoftdrop_;
    bool loaded_FatJet_msoftdrop_;
    float FatJet_n2b1_[21];
    vector<float> v_FatJet_n2b1_;
    TBranch *b_FatJet_n2b1_;
    bool loaded_FatJet_n2b1_;
    float FatJet_n3b1_[21];
    vector<float> v_FatJet_n3b1_;
    TBranch *b_FatJet_n3b1_;
    bool loaded_FatJet_n3b1_;
    vector<LorentzVector> v_FatJet_p4_;
    TBranch *b_FatJet_p4_;
    bool loaded_FatJet_p4_;
    float FatJet_phi_[21];
    vector<float> v_FatJet_phi_;
    TBranch *b_FatJet_phi_;
    bool loaded_FatJet_phi_;
    float FatJet_pt_[21];
    vector<float> v_FatJet_pt_;
    TBranch *b_FatJet_pt_;
    bool loaded_FatJet_pt_;
    int FatJet_subJetIdx1_[21];
    vector<int> v_FatJet_subJetIdx1_;
    TBranch *b_FatJet_subJetIdx1_;
    bool loaded_FatJet_subJetIdx1_;
    int FatJet_subJetIdx2_[21];
    vector<int> v_FatJet_subJetIdx2_;
    TBranch *b_FatJet_subJetIdx2_;
    bool loaded_FatJet_subJetIdx2_;
    float FatJet_tau1_[21];
    vector<float> v_FatJet_tau1_;
    TBranch *b_FatJet_tau1_;
    bool loaded_FatJet_tau1_;
    float FatJet_tau2_[21];
    vector<float> v_FatJet_tau2_;
    TBranch *b_FatJet_tau2_;
    bool loaded_FatJet_tau2_;
    float FatJet_tau3_[21];
    vector<float> v_FatJet_tau3_;
    TBranch *b_FatJet_tau3_;
    bool loaded_FatJet_tau3_;
    float FatJet_tau4_[21];
    vector<float> v_FatJet_tau4_;
    TBranch *b_FatJet_tau4_;
    bool loaded_FatJet_tau4_;
    bool Flag_BadChargedCandidateFilter_;
    TBranch *b_Flag_BadChargedCandidateFilter_;
    bool loaded_Flag_BadChargedCandidateFilter_;
    bool Flag_BadChargedCandidateSummer16Filter_;
    TBranch *b_Flag_BadChargedCandidateSummer16Filter_;
    bool loaded_Flag_BadChargedCandidateSummer16Filter_;
    bool Flag_BadPFMuonFilter_;
    TBranch *b_Flag_BadPFMuonFilter_;
    bool loaded_Flag_BadPFMuonFilter_;
    bool Flag_BadPFMuonSummer16Filter_;
    TBranch *b_Flag_BadPFMuonSummer16Filter_;
    bool loaded_Flag_BadPFMuonSummer16Filter_;
    bool Flag_CSCTightHalo2015Filter_;
    TBranch *b_Flag_CSCTightHalo2015Filter_;
    bool loaded_Flag_CSCTightHalo2015Filter_;
    bool Flag_CSCTightHaloFilter_;
    TBranch *b_Flag_CSCTightHaloFilter_;
    bool loaded_Flag_CSCTightHaloFilter_;
    bool Flag_CSCTightHaloTrkMuUnvetoFilter_;
    TBranch *b_Flag_CSCTightHaloTrkMuUnvetoFilter_;
    bool loaded_Flag_CSCTightHaloTrkMuUnvetoFilter_;
    bool Flag_EcalDeadCellBoundaryEnergyFilter_;
    TBranch *b_Flag_EcalDeadCellBoundaryEnergyFilter_;
    bool loaded_Flag_EcalDeadCellBoundaryEnergyFilter_;
    bool Flag_EcalDeadCellTriggerPrimitiveFilter_;
    TBranch *b_Flag_EcalDeadCellTriggerPrimitiveFilter_;
    bool loaded_Flag_EcalDeadCellTriggerPrimitiveFilter_;
    bool Flag_HBHENoiseFilter_;
    TBranch *b_Flag_HBHENoiseFilter_;
    bool loaded_Flag_HBHENoiseFilter_;
    bool Flag_HBHENoiseIsoFilter_;
    TBranch *b_Flag_HBHENoiseIsoFilter_;
    bool loaded_Flag_HBHENoiseIsoFilter_;
    bool Flag_HcalStripHaloFilter_;
    TBranch *b_Flag_HcalStripHaloFilter_;
    bool loaded_Flag_HcalStripHaloFilter_;
    bool Flag_METFilters_;
    TBranch *b_Flag_METFilters_;
    bool loaded_Flag_METFilters_;
    bool Flag_chargedHadronTrackResolutionFilter_;
    TBranch *b_Flag_chargedHadronTrackResolutionFilter_;
    bool loaded_Flag_chargedHadronTrackResolutionFilter_;
    bool Flag_ecalBadCalibFilter_;
    TBranch *b_Flag_ecalBadCalibFilter_;
    bool loaded_Flag_ecalBadCalibFilter_;
    bool Flag_ecalLaserCorrFilter_;
    TBranch *b_Flag_ecalLaserCorrFilter_;
    bool loaded_Flag_ecalLaserCorrFilter_;
    bool Flag_eeBadScFilter_;
    TBranch *b_Flag_eeBadScFilter_;
    bool loaded_Flag_eeBadScFilter_;
    bool Flag_globalSuperTightHalo2016Filter_;
    TBranch *b_Flag_globalSuperTightHalo2016Filter_;
    bool loaded_Flag_globalSuperTightHalo2016Filter_;
    bool Flag_globalTightHalo2016Filter_;
    TBranch *b_Flag_globalTightHalo2016Filter_;
    bool loaded_Flag_globalTightHalo2016Filter_;
    bool Flag_goodVertices_;
    TBranch *b_Flag_goodVertices_;
    bool loaded_Flag_goodVertices_;
    bool Flag_hcalLaserEventFilter_;
    TBranch *b_Flag_hcalLaserEventFilter_;
    bool loaded_Flag_hcalLaserEventFilter_;
    bool Flag_muonBadTrackFilter_;
    TBranch *b_Flag_muonBadTrackFilter_;
    bool loaded_Flag_muonBadTrackFilter_;
    bool Flag_trkPOGFilters_;
    TBranch *b_Flag_trkPOGFilters_;
    bool loaded_Flag_trkPOGFilters_;
    bool Flag_trkPOG_logErrorTooManyClusters_;
    TBranch *b_Flag_trkPOG_logErrorTooManyClusters_;
    bool loaded_Flag_trkPOG_logErrorTooManyClusters_;
    bool Flag_trkPOG_manystripclus53X_;
    TBranch *b_Flag_trkPOG_manystripclus53X_;
    bool loaded_Flag_trkPOG_manystripclus53X_;
    bool Flag_trkPOG_toomanystripclus53X_;
    TBranch *b_Flag_trkPOG_toomanystripclus53X_;
    bool loaded_Flag_trkPOG_toomanystripclus53X_;
    float GenDressedLepton_eta_[15];
    vector<float> v_GenDressedLepton_eta_;
    TBranch *b_GenDressedLepton_eta_;
    bool loaded_GenDressedLepton_eta_;
    float GenDressedLepton_mass_[15];
    vector<float> v_GenDressedLepton_mass_;
    TBranch *b_GenDressedLepton_mass_;
    bool loaded_GenDressedLepton_mass_;
    vector<LorentzVector> v_GenDressedLepton_p4_;
    TBranch *b_GenDressedLepton_p4_;
    bool loaded_GenDressedLepton_p4_;
    int GenDressedLepton_pdgId_[15];
    vector<int> v_GenDressedLepton_pdgId_;
    TBranch *b_GenDressedLepton_pdgId_;
    bool loaded_GenDressedLepton_pdgId_;
    float GenDressedLepton_phi_[15];
    vector<float> v_GenDressedLepton_phi_;
    TBranch *b_GenDressedLepton_phi_;
    bool loaded_GenDressedLepton_phi_;
    float GenDressedLepton_pt_[15];
    vector<float> v_GenDressedLepton_pt_;
    TBranch *b_GenDressedLepton_pt_;
    bool loaded_GenDressedLepton_pt_;
    float GenJetAK8_eta_[27];
    vector<float> v_GenJetAK8_eta_;
    TBranch *b_GenJetAK8_eta_;
    bool loaded_GenJetAK8_eta_;
    UChar_t GenJetAK8_hadronFlavour_[27];
    vector<UChar_t> v_GenJetAK8_hadronFlavour_;
    TBranch *b_GenJetAK8_hadronFlavour_;
    bool loaded_GenJetAK8_hadronFlavour_;
    float GenJetAK8_mass_[27];
    vector<float> v_GenJetAK8_mass_;
    TBranch *b_GenJetAK8_mass_;
    bool loaded_GenJetAK8_mass_;
    vector<LorentzVector> v_GenJetAK8_p4_;
    TBranch *b_GenJetAK8_p4_;
    bool loaded_GenJetAK8_p4_;
    int GenJetAK8_partonFlavour_[27];
    vector<int> v_GenJetAK8_partonFlavour_;
    TBranch *b_GenJetAK8_partonFlavour_;
    bool loaded_GenJetAK8_partonFlavour_;
    float GenJetAK8_phi_[27];
    vector<float> v_GenJetAK8_phi_;
    TBranch *b_GenJetAK8_phi_;
    bool loaded_GenJetAK8_phi_;
    float GenJetAK8_pt_[27];
    vector<float> v_GenJetAK8_pt_;
    TBranch *b_GenJetAK8_pt_;
    bool loaded_GenJetAK8_pt_;
    float GenJet_eta_[78];
    vector<float> v_GenJet_eta_;
    TBranch *b_GenJet_eta_;
    bool loaded_GenJet_eta_;
    UChar_t GenJet_hadronFlavour_[78];
    vector<UChar_t> v_GenJet_hadronFlavour_;
    TBranch *b_GenJet_hadronFlavour_;
    bool loaded_GenJet_hadronFlavour_;
    float GenJet_mass_[78];
    vector<float> v_GenJet_mass_;
    TBranch *b_GenJet_mass_;
    bool loaded_GenJet_mass_;
    vector<LorentzVector> v_GenJet_p4_;
    TBranch *b_GenJet_p4_;
    bool loaded_GenJet_p4_;
    int GenJet_partonFlavour_[78];
    vector<int> v_GenJet_partonFlavour_;
    TBranch *b_GenJet_partonFlavour_;
    bool loaded_GenJet_partonFlavour_;
    float GenJet_phi_[78];
    vector<float> v_GenJet_phi_;
    TBranch *b_GenJet_phi_;
    bool loaded_GenJet_phi_;
    float GenJet_pt_[78];
    vector<float> v_GenJet_pt_;
    TBranch *b_GenJet_pt_;
    bool loaded_GenJet_pt_;
    float GenMET_phi_;
    TBranch *b_GenMET_phi_;
    bool loaded_GenMET_phi_;
    float GenMET_pt_;
    TBranch *b_GenMET_pt_;
    bool loaded_GenMET_pt_;
    float GenPart_eta_[546];
    vector<float> v_GenPart_eta_;
    TBranch *b_GenPart_eta_;
    bool loaded_GenPart_eta_;
    int GenPart_genPartIdxMother_[546];
    vector<int> v_GenPart_genPartIdxMother_;
    TBranch *b_GenPart_genPartIdxMother_;
    bool loaded_GenPart_genPartIdxMother_;
    float GenPart_mass_[546];
    vector<float> v_GenPart_mass_;
    TBranch *b_GenPart_mass_;
    bool loaded_GenPart_mass_;
    vector<LorentzVector> v_GenPart_p4_;
    TBranch *b_GenPart_p4_;
    bool loaded_GenPart_p4_;
    int GenPart_pdgId_[546];
    vector<int> v_GenPart_pdgId_;
    TBranch *b_GenPart_pdgId_;
    bool loaded_GenPart_pdgId_;
    float GenPart_phi_[546];
    vector<float> v_GenPart_phi_;
    TBranch *b_GenPart_phi_;
    bool loaded_GenPart_phi_;
    float GenPart_pt_[546];
    vector<float> v_GenPart_pt_;
    TBranch *b_GenPart_pt_;
    bool loaded_GenPart_pt_;
    int GenPart_status_[546];
    vector<int> v_GenPart_status_;
    TBranch *b_GenPart_status_;
    bool loaded_GenPart_status_;
    int GenPart_statusFlags_[546];
    vector<int> v_GenPart_statusFlags_;
    TBranch *b_GenPart_statusFlags_;
    bool loaded_GenPart_statusFlags_;
    int GenVisTau_charge_[15];
    vector<int> v_GenVisTau_charge_;
    TBranch *b_GenVisTau_charge_;
    bool loaded_GenVisTau_charge_;
    float GenVisTau_eta_[15];
    vector<float> v_GenVisTau_eta_;
    TBranch *b_GenVisTau_eta_;
    bool loaded_GenVisTau_eta_;
    int GenVisTau_genPartIdxMother_[15];
    vector<int> v_GenVisTau_genPartIdxMother_;
    TBranch *b_GenVisTau_genPartIdxMother_;
    bool loaded_GenVisTau_genPartIdxMother_;
    float GenVisTau_mass_[15];
    vector<float> v_GenVisTau_mass_;
    TBranch *b_GenVisTau_mass_;
    bool loaded_GenVisTau_mass_;
    vector<LorentzVector> v_GenVisTau_p4_;
    TBranch *b_GenVisTau_p4_;
    bool loaded_GenVisTau_p4_;
    float GenVisTau_phi_[15];
    vector<float> v_GenVisTau_phi_;
    TBranch *b_GenVisTau_phi_;
    bool loaded_GenVisTau_phi_;
    float GenVisTau_pt_[15];
    vector<float> v_GenVisTau_pt_;
    TBranch *b_GenVisTau_pt_;
    bool loaded_GenVisTau_pt_;
    int GenVisTau_status_[15];
    vector<int> v_GenVisTau_status_;
    TBranch *b_GenVisTau_status_;
    bool loaded_GenVisTau_status_;
    float Generator_binvar_;
    TBranch *b_Generator_binvar_;
    bool loaded_Generator_binvar_;
    int Generator_id1_;
    TBranch *b_Generator_id1_;
    bool loaded_Generator_id1_;
    int Generator_id2_;
    TBranch *b_Generator_id2_;
    bool loaded_Generator_id2_;
    float Generator_scalePDF_;
    TBranch *b_Generator_scalePDF_;
    bool loaded_Generator_scalePDF_;
    float Generator_weight_;
    TBranch *b_Generator_weight_;
    bool loaded_Generator_weight_;
    float Generator_x1_;
    TBranch *b_Generator_x1_;
    bool loaded_Generator_x1_;
    float Generator_x2_;
    TBranch *b_Generator_x2_;
    bool loaded_Generator_x2_;
    float Generator_xpdf1_;
    TBranch *b_Generator_xpdf1_;
    bool loaded_Generator_xpdf1_;
    float Generator_xpdf2_;
    TBranch *b_Generator_xpdf2_;
    bool loaded_Generator_xpdf2_;
    bool HLT_AK4CaloJet100_;
    TBranch *b_HLT_AK4CaloJet100_;
    bool loaded_HLT_AK4CaloJet100_;
    bool HLT_AK4CaloJet120_;
    TBranch *b_HLT_AK4CaloJet120_;
    bool loaded_HLT_AK4CaloJet120_;
    bool HLT_AK4CaloJet30_;
    TBranch *b_HLT_AK4CaloJet30_;
    bool loaded_HLT_AK4CaloJet30_;
    bool HLT_AK4CaloJet40_;
    TBranch *b_HLT_AK4CaloJet40_;
    bool loaded_HLT_AK4CaloJet40_;
    bool HLT_AK4CaloJet50_;
    TBranch *b_HLT_AK4CaloJet50_;
    bool loaded_HLT_AK4CaloJet50_;
    bool HLT_AK4CaloJet80_;
    TBranch *b_HLT_AK4CaloJet80_;
    bool loaded_HLT_AK4CaloJet80_;
    bool HLT_AK4PFJet100_;
    TBranch *b_HLT_AK4PFJet100_;
    bool loaded_HLT_AK4PFJet100_;
    bool HLT_AK4PFJet120_;
    TBranch *b_HLT_AK4PFJet120_;
    bool loaded_HLT_AK4PFJet120_;
    bool HLT_AK4PFJet30_;
    TBranch *b_HLT_AK4PFJet30_;
    bool loaded_HLT_AK4PFJet30_;
    bool HLT_AK4PFJet50_;
    TBranch *b_HLT_AK4PFJet50_;
    bool loaded_HLT_AK4PFJet50_;
    bool HLT_AK4PFJet80_;
    TBranch *b_HLT_AK4PFJet80_;
    bool loaded_HLT_AK4PFJet80_;
    bool HLT_AK8PFHT750_TrimMass50_;
    TBranch *b_HLT_AK8PFHT750_TrimMass50_;
    bool loaded_HLT_AK8PFHT750_TrimMass50_;
    bool HLT_AK8PFHT800_TrimMass50_;
    TBranch *b_HLT_AK8PFHT800_TrimMass50_;
    bool loaded_HLT_AK8PFHT800_TrimMass50_;
    bool HLT_AK8PFHT850_TrimMass50_;
    TBranch *b_HLT_AK8PFHT850_TrimMass50_;
    bool loaded_HLT_AK8PFHT850_TrimMass50_;
    bool HLT_AK8PFHT900_TrimMass50_;
    TBranch *b_HLT_AK8PFHT900_TrimMass50_;
    bool loaded_HLT_AK8PFHT900_TrimMass50_;
    bool HLT_AK8PFJet140_;
    TBranch *b_HLT_AK8PFJet140_;
    bool loaded_HLT_AK8PFJet140_;
    bool HLT_AK8PFJet200_;
    TBranch *b_HLT_AK8PFJet200_;
    bool loaded_HLT_AK8PFJet200_;
    bool HLT_AK8PFJet260_;
    TBranch *b_HLT_AK8PFJet260_;
    bool loaded_HLT_AK8PFJet260_;
    bool HLT_AK8PFJet320_;
    TBranch *b_HLT_AK8PFJet320_;
    bool loaded_HLT_AK8PFJet320_;
    bool HLT_AK8PFJet330_PFAK8BTagCSV_p1_;
    TBranch *b_HLT_AK8PFJet330_PFAK8BTagCSV_p1_;
    bool loaded_HLT_AK8PFJet330_PFAK8BTagCSV_p1_;
    bool HLT_AK8PFJet330_PFAK8BTagCSV_p17_;
    TBranch *b_HLT_AK8PFJet330_PFAK8BTagCSV_p17_;
    bool loaded_HLT_AK8PFJet330_PFAK8BTagCSV_p17_;
    bool HLT_AK8PFJet360_TrimMass30_;
    TBranch *b_HLT_AK8PFJet360_TrimMass30_;
    bool loaded_HLT_AK8PFJet360_TrimMass30_;
    bool HLT_AK8PFJet380_TrimMass30_;
    TBranch *b_HLT_AK8PFJet380_TrimMass30_;
    bool loaded_HLT_AK8PFJet380_TrimMass30_;
    bool HLT_AK8PFJet40_;
    TBranch *b_HLT_AK8PFJet40_;
    bool loaded_HLT_AK8PFJet40_;
    bool HLT_AK8PFJet400_;
    TBranch *b_HLT_AK8PFJet400_;
    bool loaded_HLT_AK8PFJet400_;
    bool HLT_AK8PFJet400_TrimMass30_;
    TBranch *b_HLT_AK8PFJet400_TrimMass30_;
    bool loaded_HLT_AK8PFJet400_TrimMass30_;
    bool HLT_AK8PFJet420_TrimMass30_;
    TBranch *b_HLT_AK8PFJet420_TrimMass30_;
    bool loaded_HLT_AK8PFJet420_TrimMass30_;
    bool HLT_AK8PFJet450_;
    TBranch *b_HLT_AK8PFJet450_;
    bool loaded_HLT_AK8PFJet450_;
    bool HLT_AK8PFJet500_;
    TBranch *b_HLT_AK8PFJet500_;
    bool loaded_HLT_AK8PFJet500_;
    bool HLT_AK8PFJet550_;
    TBranch *b_HLT_AK8PFJet550_;
    bool loaded_HLT_AK8PFJet550_;
    bool HLT_AK8PFJet60_;
    TBranch *b_HLT_AK8PFJet60_;
    bool loaded_HLT_AK8PFJet60_;
    bool HLT_AK8PFJet80_;
    TBranch *b_HLT_AK8PFJet80_;
    bool loaded_HLT_AK8PFJet80_;
    bool HLT_AK8PFJetFwd140_;
    TBranch *b_HLT_AK8PFJetFwd140_;
    bool loaded_HLT_AK8PFJetFwd140_;
    bool HLT_AK8PFJetFwd200_;
    TBranch *b_HLT_AK8PFJetFwd200_;
    bool loaded_HLT_AK8PFJetFwd200_;
    bool HLT_AK8PFJetFwd260_;
    TBranch *b_HLT_AK8PFJetFwd260_;
    bool loaded_HLT_AK8PFJetFwd260_;
    bool HLT_AK8PFJetFwd320_;
    TBranch *b_HLT_AK8PFJetFwd320_;
    bool loaded_HLT_AK8PFJetFwd320_;
    bool HLT_AK8PFJetFwd40_;
    TBranch *b_HLT_AK8PFJetFwd40_;
    bool loaded_HLT_AK8PFJetFwd40_;
    bool HLT_AK8PFJetFwd400_;
    TBranch *b_HLT_AK8PFJetFwd400_;
    bool loaded_HLT_AK8PFJetFwd400_;
    bool HLT_AK8PFJetFwd450_;
    TBranch *b_HLT_AK8PFJetFwd450_;
    bool loaded_HLT_AK8PFJetFwd450_;
    bool HLT_AK8PFJetFwd500_;
    TBranch *b_HLT_AK8PFJetFwd500_;
    bool loaded_HLT_AK8PFJetFwd500_;
    bool HLT_AK8PFJetFwd60_;
    TBranch *b_HLT_AK8PFJetFwd60_;
    bool loaded_HLT_AK8PFJetFwd60_;
    bool HLT_AK8PFJetFwd80_;
    TBranch *b_HLT_AK8PFJetFwd80_;
    bool loaded_HLT_AK8PFJetFwd80_;
    bool HLT_BTagMu_AK4DiJet110_Mu5_;
    TBranch *b_HLT_BTagMu_AK4DiJet110_Mu5_;
    bool loaded_HLT_BTagMu_AK4DiJet110_Mu5_;
    bool HLT_BTagMu_AK4DiJet170_Mu5_;
    TBranch *b_HLT_BTagMu_AK4DiJet170_Mu5_;
    bool loaded_HLT_BTagMu_AK4DiJet170_Mu5_;
    bool HLT_BTagMu_AK4DiJet20_Mu5_;
    TBranch *b_HLT_BTagMu_AK4DiJet20_Mu5_;
    bool loaded_HLT_BTagMu_AK4DiJet20_Mu5_;
    bool HLT_BTagMu_AK4DiJet40_Mu5_;
    TBranch *b_HLT_BTagMu_AK4DiJet40_Mu5_;
    bool loaded_HLT_BTagMu_AK4DiJet40_Mu5_;
    bool HLT_BTagMu_AK4DiJet70_Mu5_;
    TBranch *b_HLT_BTagMu_AK4DiJet70_Mu5_;
    bool loaded_HLT_BTagMu_AK4DiJet70_Mu5_;
    bool HLT_BTagMu_AK4Jet300_Mu5_;
    TBranch *b_HLT_BTagMu_AK4Jet300_Mu5_;
    bool loaded_HLT_BTagMu_AK4Jet300_Mu5_;
    bool HLT_BTagMu_AK8DiJet170_Mu5_;
    TBranch *b_HLT_BTagMu_AK8DiJet170_Mu5_;
    bool loaded_HLT_BTagMu_AK8DiJet170_Mu5_;
    bool HLT_BTagMu_AK8Jet300_Mu5_;
    TBranch *b_HLT_BTagMu_AK8Jet300_Mu5_;
    bool loaded_HLT_BTagMu_AK8Jet300_Mu5_;
    bool HLT_CaloJet500_NoJetID_;
    TBranch *b_HLT_CaloJet500_NoJetID_;
    bool loaded_HLT_CaloJet500_NoJetID_;
    bool HLT_CaloJet550_NoJetID_;
    TBranch *b_HLT_CaloJet550_NoJetID_;
    bool loaded_HLT_CaloJet550_NoJetID_;
    bool HLT_CaloMET100_HBHECleaned_;
    TBranch *b_HLT_CaloMET100_HBHECleaned_;
    bool loaded_HLT_CaloMET100_HBHECleaned_;
    bool HLT_CaloMET100_NotCleaned_;
    TBranch *b_HLT_CaloMET100_NotCleaned_;
    bool loaded_HLT_CaloMET100_NotCleaned_;
    bool HLT_CaloMET110_NotCleaned_;
    TBranch *b_HLT_CaloMET110_NotCleaned_;
    bool loaded_HLT_CaloMET110_NotCleaned_;
    bool HLT_CaloMET250_HBHECleaned_;
    TBranch *b_HLT_CaloMET250_HBHECleaned_;
    bool loaded_HLT_CaloMET250_HBHECleaned_;
    bool HLT_CaloMET250_NotCleaned_;
    TBranch *b_HLT_CaloMET250_NotCleaned_;
    bool loaded_HLT_CaloMET250_NotCleaned_;
    bool HLT_CaloMET300_HBHECleaned_;
    TBranch *b_HLT_CaloMET300_HBHECleaned_;
    bool loaded_HLT_CaloMET300_HBHECleaned_;
    bool HLT_CaloMET350_HBHECleaned_;
    TBranch *b_HLT_CaloMET350_HBHECleaned_;
    bool loaded_HLT_CaloMET350_HBHECleaned_;
    bool HLT_CaloMET70_HBHECleaned_;
    TBranch *b_HLT_CaloMET70_HBHECleaned_;
    bool loaded_HLT_CaloMET70_HBHECleaned_;
    bool HLT_CaloMET80_HBHECleaned_;
    TBranch *b_HLT_CaloMET80_HBHECleaned_;
    bool loaded_HLT_CaloMET80_HBHECleaned_;
    bool HLT_CaloMET80_NotCleaned_;
    TBranch *b_HLT_CaloMET80_NotCleaned_;
    bool loaded_HLT_CaloMET80_NotCleaned_;
    bool HLT_CaloMET90_HBHECleaned_;
    TBranch *b_HLT_CaloMET90_HBHECleaned_;
    bool loaded_HLT_CaloMET90_HBHECleaned_;
    bool HLT_CaloMET90_NotCleaned_;
    TBranch *b_HLT_CaloMET90_NotCleaned_;
    bool loaded_HLT_CaloMET90_NotCleaned_;
    bool HLT_CaloMHT90_;
    TBranch *b_HLT_CaloMHT90_;
    bool loaded_HLT_CaloMHT90_;
    bool HLT_DiEle27_WPTightCaloOnly_L1DoubleEG_;
    TBranch *b_HLT_DiEle27_WPTightCaloOnly_L1DoubleEG_;
    bool loaded_HLT_DiEle27_WPTightCaloOnly_L1DoubleEG_;
    bool HLT_DiJet110_35_Mjj650_PFMET110_;
    TBranch *b_HLT_DiJet110_35_Mjj650_PFMET110_;
    bool loaded_HLT_DiJet110_35_Mjj650_PFMET110_;
    bool HLT_DiJet110_35_Mjj650_PFMET120_;
    TBranch *b_HLT_DiJet110_35_Mjj650_PFMET120_;
    bool loaded_HLT_DiJet110_35_Mjj650_PFMET120_;
    bool HLT_DiJet110_35_Mjj650_PFMET130_;
    TBranch *b_HLT_DiJet110_35_Mjj650_PFMET130_;
    bool loaded_HLT_DiJet110_35_Mjj650_PFMET130_;
    bool HLT_DiMu9_Ele9_CaloIdL_TrackIdL_;
    TBranch *b_HLT_DiMu9_Ele9_CaloIdL_TrackIdL_;
    bool loaded_HLT_DiMu9_Ele9_CaloIdL_TrackIdL_;
    bool HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ_;
    TBranch *b_HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ_;
    bool loaded_HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ_;
    bool HLT_DiPFJet15_FBEta3_NoCaloMatched_;
    TBranch *b_HLT_DiPFJet15_FBEta3_NoCaloMatched_;
    bool loaded_HLT_DiPFJet15_FBEta3_NoCaloMatched_;
    bool HLT_DiPFJet15_NoCaloMatched_;
    TBranch *b_HLT_DiPFJet15_NoCaloMatched_;
    bool loaded_HLT_DiPFJet15_NoCaloMatched_;
    bool HLT_DiPFJet25_FBEta3_NoCaloMatched_;
    TBranch *b_HLT_DiPFJet25_FBEta3_NoCaloMatched_;
    bool loaded_HLT_DiPFJet25_FBEta3_NoCaloMatched_;
    bool HLT_DiPFJet25_NoCaloMatched_;
    TBranch *b_HLT_DiPFJet25_NoCaloMatched_;
    bool loaded_HLT_DiPFJet25_NoCaloMatched_;
    bool HLT_DiPFJetAve100_HFJEC_;
    TBranch *b_HLT_DiPFJetAve100_HFJEC_;
    bool loaded_HLT_DiPFJetAve100_HFJEC_;
    bool HLT_DiPFJetAve140_;
    TBranch *b_HLT_DiPFJetAve140_;
    bool loaded_HLT_DiPFJetAve140_;
    bool HLT_DiPFJetAve15_HFJEC_;
    TBranch *b_HLT_DiPFJetAve15_HFJEC_;
    bool loaded_HLT_DiPFJetAve15_HFJEC_;
    bool HLT_DiPFJetAve160_HFJEC_;
    TBranch *b_HLT_DiPFJetAve160_HFJEC_;
    bool loaded_HLT_DiPFJetAve160_HFJEC_;
    bool HLT_DiPFJetAve200_;
    TBranch *b_HLT_DiPFJetAve200_;
    bool loaded_HLT_DiPFJetAve200_;
    bool HLT_DiPFJetAve220_HFJEC_;
    TBranch *b_HLT_DiPFJetAve220_HFJEC_;
    bool loaded_HLT_DiPFJetAve220_HFJEC_;
    bool HLT_DiPFJetAve25_HFJEC_;
    TBranch *b_HLT_DiPFJetAve25_HFJEC_;
    bool loaded_HLT_DiPFJetAve25_HFJEC_;
    bool HLT_DiPFJetAve260_;
    TBranch *b_HLT_DiPFJetAve260_;
    bool loaded_HLT_DiPFJetAve260_;
    bool HLT_DiPFJetAve300_HFJEC_;
    TBranch *b_HLT_DiPFJetAve300_HFJEC_;
    bool loaded_HLT_DiPFJetAve300_HFJEC_;
    bool HLT_DiPFJetAve320_;
    TBranch *b_HLT_DiPFJetAve320_;
    bool loaded_HLT_DiPFJetAve320_;
    bool HLT_DiPFJetAve35_HFJEC_;
    TBranch *b_HLT_DiPFJetAve35_HFJEC_;
    bool loaded_HLT_DiPFJetAve35_HFJEC_;
    bool HLT_DiPFJetAve40_;
    TBranch *b_HLT_DiPFJetAve40_;
    bool loaded_HLT_DiPFJetAve40_;
    bool HLT_DiPFJetAve400_;
    TBranch *b_HLT_DiPFJetAve400_;
    bool loaded_HLT_DiPFJetAve400_;
    bool HLT_DiPFJetAve500_;
    TBranch *b_HLT_DiPFJetAve500_;
    bool loaded_HLT_DiPFJetAve500_;
    bool HLT_DiPFJetAve60_;
    TBranch *b_HLT_DiPFJetAve60_;
    bool loaded_HLT_DiPFJetAve60_;
    bool HLT_DiPFJetAve60_HFJEC_;
    TBranch *b_HLT_DiPFJetAve60_HFJEC_;
    bool loaded_HLT_DiPFJetAve60_HFJEC_;
    bool HLT_DiPFJetAve80_;
    TBranch *b_HLT_DiPFJetAve80_;
    bool loaded_HLT_DiPFJetAve80_;
    bool HLT_DiPFJetAve80_HFJEC_;
    TBranch *b_HLT_DiPFJetAve80_HFJEC_;
    bool loaded_HLT_DiPFJetAve80_HFJEC_;
    bool HLT_DiSC30_18_EIso_AND_HE_Mass70_;
    TBranch *b_HLT_DiSC30_18_EIso_AND_HE_Mass70_;
    bool loaded_HLT_DiSC30_18_EIso_AND_HE_Mass70_;
    bool HLT_Dimuon0_Jpsi_;
    TBranch *b_HLT_Dimuon0_Jpsi_;
    bool loaded_HLT_Dimuon0_Jpsi_;
    bool HLT_Dimuon0_Jpsi3p5_Muon2_;
    TBranch *b_HLT_Dimuon0_Jpsi3p5_Muon2_;
    bool loaded_HLT_Dimuon0_Jpsi3p5_Muon2_;
    bool HLT_Dimuon0_Jpsi_L1_4R_0er1p5R_;
    TBranch *b_HLT_Dimuon0_Jpsi_L1_4R_0er1p5R_;
    bool loaded_HLT_Dimuon0_Jpsi_L1_4R_0er1p5R_;
    bool HLT_Dimuon0_Jpsi_L1_NoOS_;
    TBranch *b_HLT_Dimuon0_Jpsi_L1_NoOS_;
    bool loaded_HLT_Dimuon0_Jpsi_L1_NoOS_;
    bool HLT_Dimuon0_Jpsi_NoVertexing_;
    TBranch *b_HLT_Dimuon0_Jpsi_NoVertexing_;
    bool loaded_HLT_Dimuon0_Jpsi_NoVertexing_;
    bool HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R_;
    TBranch *b_HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R_;
    bool loaded_HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R_;
    bool HLT_Dimuon0_Jpsi_NoVertexing_NoOS_;
    TBranch *b_HLT_Dimuon0_Jpsi_NoVertexing_NoOS_;
    bool loaded_HLT_Dimuon0_Jpsi_NoVertexing_NoOS_;
    bool HLT_Dimuon0_LowMass_;
    TBranch *b_HLT_Dimuon0_LowMass_;
    bool loaded_HLT_Dimuon0_LowMass_;
    bool HLT_Dimuon0_LowMass_L1_0er1p5_;
    TBranch *b_HLT_Dimuon0_LowMass_L1_0er1p5_;
    bool loaded_HLT_Dimuon0_LowMass_L1_0er1p5_;
    bool HLT_Dimuon0_LowMass_L1_0er1p5R_;
    TBranch *b_HLT_Dimuon0_LowMass_L1_0er1p5R_;
    bool loaded_HLT_Dimuon0_LowMass_L1_0er1p5R_;
    bool HLT_Dimuon0_LowMass_L1_4_;
    TBranch *b_HLT_Dimuon0_LowMass_L1_4_;
    bool loaded_HLT_Dimuon0_LowMass_L1_4_;
    bool HLT_Dimuon0_LowMass_L1_4R_;
    TBranch *b_HLT_Dimuon0_LowMass_L1_4R_;
    bool loaded_HLT_Dimuon0_LowMass_L1_4R_;
    bool HLT_Dimuon0_LowMass_L1_TM530_;
    TBranch *b_HLT_Dimuon0_LowMass_L1_TM530_;
    bool loaded_HLT_Dimuon0_LowMass_L1_TM530_;
    bool HLT_Dimuon0_Upsilon_L1_4p5_;
    TBranch *b_HLT_Dimuon0_Upsilon_L1_4p5_;
    bool loaded_HLT_Dimuon0_Upsilon_L1_4p5_;
    bool HLT_Dimuon0_Upsilon_L1_4p5NoOS_;
    TBranch *b_HLT_Dimuon0_Upsilon_L1_4p5NoOS_;
    bool loaded_HLT_Dimuon0_Upsilon_L1_4p5NoOS_;
    bool HLT_Dimuon0_Upsilon_L1_4p5er2p0_;
    TBranch *b_HLT_Dimuon0_Upsilon_L1_4p5er2p0_;
    bool loaded_HLT_Dimuon0_Upsilon_L1_4p5er2p0_;
    bool HLT_Dimuon0_Upsilon_L1_4p5er2p0M_;
    TBranch *b_HLT_Dimuon0_Upsilon_L1_4p5er2p0M_;
    bool loaded_HLT_Dimuon0_Upsilon_L1_4p5er2p0M_;
    bool HLT_Dimuon0_Upsilon_L1_5_;
    TBranch *b_HLT_Dimuon0_Upsilon_L1_5_;
    bool loaded_HLT_Dimuon0_Upsilon_L1_5_;
    bool HLT_Dimuon0_Upsilon_L1_5M_;
    TBranch *b_HLT_Dimuon0_Upsilon_L1_5M_;
    bool loaded_HLT_Dimuon0_Upsilon_L1_5M_;
    bool HLT_Dimuon0_Upsilon_Muon_L1_TM0_;
    TBranch *b_HLT_Dimuon0_Upsilon_Muon_L1_TM0_;
    bool loaded_HLT_Dimuon0_Upsilon_Muon_L1_TM0_;
    bool HLT_Dimuon0_Upsilon_Muon_NoL1Mass_;
    TBranch *b_HLT_Dimuon0_Upsilon_Muon_NoL1Mass_;
    bool loaded_HLT_Dimuon0_Upsilon_Muon_NoL1Mass_;
    bool HLT_Dimuon0_Upsilon_NoVertexing_;
    TBranch *b_HLT_Dimuon0_Upsilon_NoVertexing_;
    bool loaded_HLT_Dimuon0_Upsilon_NoVertexing_;
    bool HLT_Dimuon10_PsiPrime_Barrel_Seagulls_;
    TBranch *b_HLT_Dimuon10_PsiPrime_Barrel_Seagulls_;
    bool loaded_HLT_Dimuon10_PsiPrime_Barrel_Seagulls_;
    bool HLT_Dimuon10_Upsilon_Barrel_Seagulls_;
    TBranch *b_HLT_Dimuon10_Upsilon_Barrel_Seagulls_;
    bool loaded_HLT_Dimuon10_Upsilon_Barrel_Seagulls_;
    bool HLT_Dimuon12_Upsilon_eta1p5_;
    TBranch *b_HLT_Dimuon12_Upsilon_eta1p5_;
    bool loaded_HLT_Dimuon12_Upsilon_eta1p5_;
    bool HLT_Dimuon14_Phi_Barrel_Seagulls_;
    TBranch *b_HLT_Dimuon14_Phi_Barrel_Seagulls_;
    bool loaded_HLT_Dimuon14_Phi_Barrel_Seagulls_;
    bool HLT_Dimuon18_PsiPrime_;
    TBranch *b_HLT_Dimuon18_PsiPrime_;
    bool loaded_HLT_Dimuon18_PsiPrime_;
    bool HLT_Dimuon18_PsiPrime_noCorrL1_;
    TBranch *b_HLT_Dimuon18_PsiPrime_noCorrL1_;
    bool loaded_HLT_Dimuon18_PsiPrime_noCorrL1_;
    bool HLT_Dimuon20_Jpsi_Barrel_Seagulls_;
    TBranch *b_HLT_Dimuon20_Jpsi_Barrel_Seagulls_;
    bool loaded_HLT_Dimuon20_Jpsi_Barrel_Seagulls_;
    bool HLT_Dimuon24_Phi_noCorrL1_;
    TBranch *b_HLT_Dimuon24_Phi_noCorrL1_;
    bool loaded_HLT_Dimuon24_Phi_noCorrL1_;
    bool HLT_Dimuon24_Upsilon_noCorrL1_;
    TBranch *b_HLT_Dimuon24_Upsilon_noCorrL1_;
    bool loaded_HLT_Dimuon24_Upsilon_noCorrL1_;
    bool HLT_Dimuon25_Jpsi_;
    TBranch *b_HLT_Dimuon25_Jpsi_;
    bool loaded_HLT_Dimuon25_Jpsi_;
    bool HLT_Dimuon25_Jpsi_noCorrL1_;
    TBranch *b_HLT_Dimuon25_Jpsi_noCorrL1_;
    bool loaded_HLT_Dimuon25_Jpsi_noCorrL1_;
    bool HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_;
    TBranch *b_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_;
    bool loaded_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_;
    bool HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_;
    TBranch *b_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_;
    bool loaded_HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_;
    bool HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_;
    TBranch *b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_;
    bool loaded_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_;
    bool HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_;
    TBranch *b_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_;
    bool loaded_HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_;
    bool HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_;
    TBranch *b_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_;
    bool loaded_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55_;
    bool HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_;
    TBranch *b_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_;
    bool loaded_HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55_;
    bool HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_;
    TBranch *b_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_;
    bool loaded_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90_;
    bool HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95_;
    TBranch *b_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95_;
    bool loaded_HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95_;
    bool HLT_DoubleEle24_eta2p1_WPTight_Gsf_;
    TBranch *b_HLT_DoubleEle24_eta2p1_WPTight_Gsf_;
    bool loaded_HLT_DoubleEle24_eta2p1_WPTight_Gsf_;
    bool HLT_DoubleEle25_CaloIdL_MW_;
    TBranch *b_HLT_DoubleEle25_CaloIdL_MW_;
    bool loaded_HLT_DoubleEle25_CaloIdL_MW_;
    bool HLT_DoubleEle27_CaloIdL_MW_;
    TBranch *b_HLT_DoubleEle27_CaloIdL_MW_;
    bool loaded_HLT_DoubleEle27_CaloIdL_MW_;
    bool HLT_DoubleEle33_CaloIdL_MW_;
    TBranch *b_HLT_DoubleEle33_CaloIdL_MW_;
    bool loaded_HLT_DoubleEle33_CaloIdL_MW_;
    bool HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350_;
    TBranch *b_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350_;
    bool loaded_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350_;
    bool HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350_;
    TBranch *b_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350_;
    bool loaded_HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350_;
    bool HLT_DoubleIsoMu20_eta2p1_;
    TBranch *b_HLT_DoubleIsoMu20_eta2p1_;
    bool loaded_HLT_DoubleIsoMu20_eta2p1_;
    bool HLT_DoubleIsoMu24_eta2p1_;
    TBranch *b_HLT_DoubleIsoMu24_eta2p1_;
    bool loaded_HLT_DoubleIsoMu24_eta2p1_;
    bool HLT_DoubleL2Mu50_;
    TBranch *b_HLT_DoubleL2Mu50_;
    bool loaded_HLT_DoubleL2Mu50_;
    bool HLT_DoubleLooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_;
    TBranch *b_HLT_DoubleLooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_;
    bool loaded_HLT_DoubleLooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_;
    bool HLT_DoubleLooseChargedIsoPFTau35_Trk1_eta2p1_Reg_;
    TBranch *b_HLT_DoubleLooseChargedIsoPFTau35_Trk1_eta2p1_Reg_;
    bool loaded_HLT_DoubleLooseChargedIsoPFTau35_Trk1_eta2p1_Reg_;
    bool HLT_DoubleLooseChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_;
    TBranch *b_HLT_DoubleLooseChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_;
    bool loaded_HLT_DoubleLooseChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_;
    bool HLT_DoubleLooseChargedIsoPFTau40_Trk1_eta2p1_Reg_;
    TBranch *b_HLT_DoubleLooseChargedIsoPFTau40_Trk1_eta2p1_Reg_;
    bool loaded_HLT_DoubleLooseChargedIsoPFTau40_Trk1_eta2p1_Reg_;
    bool HLT_DoubleMediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_;
    TBranch *b_HLT_DoubleMediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_;
    bool loaded_HLT_DoubleMediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_;
    bool HLT_DoubleMediumChargedIsoPFTau35_Trk1_eta2p1_Reg_;
    TBranch *b_HLT_DoubleMediumChargedIsoPFTau35_Trk1_eta2p1_Reg_;
    bool loaded_HLT_DoubleMediumChargedIsoPFTau35_Trk1_eta2p1_Reg_;
    bool HLT_DoubleMediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_;
    TBranch *b_HLT_DoubleMediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_;
    bool loaded_HLT_DoubleMediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_;
    bool HLT_DoubleMediumChargedIsoPFTau40_Trk1_eta2p1_Reg_;
    TBranch *b_HLT_DoubleMediumChargedIsoPFTau40_Trk1_eta2p1_Reg_;
    bool loaded_HLT_DoubleMediumChargedIsoPFTau40_Trk1_eta2p1_Reg_;
    bool HLT_DoubleMu20_7_Mass0to30_L1_DM4_;
    TBranch *b_HLT_DoubleMu20_7_Mass0to30_L1_DM4_;
    bool loaded_HLT_DoubleMu20_7_Mass0to30_L1_DM4_;
    bool HLT_DoubleMu20_7_Mass0to30_L1_DM4EG_;
    TBranch *b_HLT_DoubleMu20_7_Mass0to30_L1_DM4EG_;
    bool loaded_HLT_DoubleMu20_7_Mass0to30_L1_DM4EG_;
    bool HLT_DoubleMu20_7_Mass0to30_Photon23_;
    TBranch *b_HLT_DoubleMu20_7_Mass0to30_Photon23_;
    bool loaded_HLT_DoubleMu20_7_Mass0to30_Photon23_;
    bool HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi_;
    TBranch *b_HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi_;
    bool loaded_HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi_;
    bool HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi_;
    TBranch *b_HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi_;
    bool loaded_HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi_;
    bool HLT_DoubleMu3_DCA_PFMET50_PFMHT60_;
    TBranch *b_HLT_DoubleMu3_DCA_PFMET50_PFMHT60_;
    bool loaded_HLT_DoubleMu3_DCA_PFMET50_PFMHT60_;
    bool HLT_DoubleMu3_DZ_PFMET50_PFMHT60_;
    TBranch *b_HLT_DoubleMu3_DZ_PFMET50_PFMHT60_;
    bool loaded_HLT_DoubleMu3_DZ_PFMET50_PFMHT60_;
    bool HLT_DoubleMu3_DZ_PFMET70_PFMHT70_;
    TBranch *b_HLT_DoubleMu3_DZ_PFMET70_PFMHT70_;
    bool loaded_HLT_DoubleMu3_DZ_PFMET70_PFMHT70_;
    bool HLT_DoubleMu3_DZ_PFMET90_PFMHT90_;
    TBranch *b_HLT_DoubleMu3_DZ_PFMET90_PFMHT90_;
    bool loaded_HLT_DoubleMu3_DZ_PFMET90_PFMHT90_;
    bool HLT_DoubleMu3_Trk_Tau3mu_;
    TBranch *b_HLT_DoubleMu3_Trk_Tau3mu_;
    bool loaded_HLT_DoubleMu3_Trk_Tau3mu_;
    bool HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass_;
    TBranch *b_HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass_;
    bool loaded_HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass_;
    bool HLT_DoubleMu43NoFiltersNoVtx_;
    TBranch *b_HLT_DoubleMu43NoFiltersNoVtx_;
    bool loaded_HLT_DoubleMu43NoFiltersNoVtx_;
    bool HLT_DoubleMu48NoFiltersNoVtx_;
    TBranch *b_HLT_DoubleMu48NoFiltersNoVtx_;
    bool loaded_HLT_DoubleMu48NoFiltersNoVtx_;
    bool HLT_DoubleMu4_3_Bs_;
    TBranch *b_HLT_DoubleMu4_3_Bs_;
    bool loaded_HLT_DoubleMu4_3_Bs_;
    bool HLT_DoubleMu4_3_Jpsi_Displaced_;
    TBranch *b_HLT_DoubleMu4_3_Jpsi_Displaced_;
    bool loaded_HLT_DoubleMu4_3_Jpsi_Displaced_;
    bool HLT_DoubleMu4_JpsiTrkTrk_Displaced_;
    TBranch *b_HLT_DoubleMu4_JpsiTrkTrk_Displaced_;
    bool loaded_HLT_DoubleMu4_JpsiTrkTrk_Displaced_;
    bool HLT_DoubleMu4_JpsiTrk_Displaced_;
    TBranch *b_HLT_DoubleMu4_JpsiTrk_Displaced_;
    bool loaded_HLT_DoubleMu4_JpsiTrk_Displaced_;
    bool HLT_DoubleMu4_Jpsi_Displaced_;
    TBranch *b_HLT_DoubleMu4_Jpsi_Displaced_;
    bool loaded_HLT_DoubleMu4_Jpsi_Displaced_;
    bool HLT_DoubleMu4_Jpsi_NoVertexing_;
    TBranch *b_HLT_DoubleMu4_Jpsi_NoVertexing_;
    bool loaded_HLT_DoubleMu4_Jpsi_NoVertexing_;
    bool HLT_DoubleMu4_LowMassNonResonantTrk_Displaced_;
    TBranch *b_HLT_DoubleMu4_LowMassNonResonantTrk_Displaced_;
    bool loaded_HLT_DoubleMu4_LowMassNonResonantTrk_Displaced_;
    bool HLT_DoubleMu4_Mass8_DZ_PFHT350_;
    TBranch *b_HLT_DoubleMu4_Mass8_DZ_PFHT350_;
    bool loaded_HLT_DoubleMu4_Mass8_DZ_PFHT350_;
    bool HLT_DoubleMu4_PsiPrimeTrk_Displaced_;
    TBranch *b_HLT_DoubleMu4_PsiPrimeTrk_Displaced_;
    bool loaded_HLT_DoubleMu4_PsiPrimeTrk_Displaced_;
    bool HLT_DoubleMu8_Mass8_PFHT350_;
    TBranch *b_HLT_DoubleMu8_Mass8_PFHT350_;
    bool loaded_HLT_DoubleMu8_Mass8_PFHT350_;
    bool HLT_DoublePFJets100MaxDeta1p6_DoubleCaloBTagCSV_p33_;
    TBranch *b_HLT_DoublePFJets100MaxDeta1p6_DoubleCaloBTagCSV_p33_;
    bool loaded_HLT_DoublePFJets100MaxDeta1p6_DoubleCaloBTagCSV_p33_;
    bool HLT_DoublePFJets100_CaloBTagCSV_p33_;
    TBranch *b_HLT_DoublePFJets100_CaloBTagCSV_p33_;
    bool loaded_HLT_DoublePFJets100_CaloBTagCSV_p33_;
    bool HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagCSV_p33_;
    TBranch *b_HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagCSV_p33_;
    bool loaded_HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagCSV_p33_;
    bool HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagCSV_p33_;
    TBranch *b_HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagCSV_p33_;
    bool loaded_HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagCSV_p33_;
    bool HLT_DoublePFJets200_CaloBTagCSV_p33_;
    TBranch *b_HLT_DoublePFJets200_CaloBTagCSV_p33_;
    bool loaded_HLT_DoublePFJets200_CaloBTagCSV_p33_;
    bool HLT_DoublePFJets350_CaloBTagCSV_p33_;
    TBranch *b_HLT_DoublePFJets350_CaloBTagCSV_p33_;
    bool loaded_HLT_DoublePFJets350_CaloBTagCSV_p33_;
    bool HLT_DoublePFJets40_CaloBTagCSV_p33_;
    TBranch *b_HLT_DoublePFJets40_CaloBTagCSV_p33_;
    bool loaded_HLT_DoublePFJets40_CaloBTagCSV_p33_;
    bool HLT_DoublePhoton33_CaloIdL_;
    TBranch *b_HLT_DoublePhoton33_CaloIdL_;
    bool loaded_HLT_DoublePhoton33_CaloIdL_;
    bool HLT_DoublePhoton70_;
    TBranch *b_HLT_DoublePhoton70_;
    bool loaded_HLT_DoublePhoton70_;
    bool HLT_DoublePhoton85_;
    TBranch *b_HLT_DoublePhoton85_;
    bool loaded_HLT_DoublePhoton85_;
    bool HLT_DoubleTightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_;
    TBranch *b_HLT_DoubleTightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_;
    bool loaded_HLT_DoubleTightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_;
    bool HLT_DoubleTightChargedIsoPFTau35_Trk1_eta2p1_Reg_;
    TBranch *b_HLT_DoubleTightChargedIsoPFTau35_Trk1_eta2p1_Reg_;
    bool loaded_HLT_DoubleTightChargedIsoPFTau35_Trk1_eta2p1_Reg_;
    bool HLT_DoubleTightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_;
    TBranch *b_HLT_DoubleTightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_;
    bool loaded_HLT_DoubleTightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_;
    bool HLT_DoubleTightChargedIsoPFTau40_Trk1_eta2p1_Reg_;
    TBranch *b_HLT_DoubleTightChargedIsoPFTau40_Trk1_eta2p1_Reg_;
    bool loaded_HLT_DoubleTightChargedIsoPFTau40_Trk1_eta2p1_Reg_;
    bool HLT_ECALHT800_;
    TBranch *b_HLT_ECALHT800_;
    bool loaded_HLT_ECALHT800_;
    bool HLT_EcalCalibration_;
    TBranch *b_HLT_EcalCalibration_;
    bool loaded_HLT_EcalCalibration_;
    bool HLT_Ele115_CaloIdVT_GsfTrkIdT_;
    TBranch *b_HLT_Ele115_CaloIdVT_GsfTrkIdT_;
    bool loaded_HLT_Ele115_CaloIdVT_GsfTrkIdT_;
    bool HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_;
    TBranch *b_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_;
    bool loaded_HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30_;
    bool HLT_Ele135_CaloIdVT_GsfTrkIdT_;
    TBranch *b_HLT_Ele135_CaloIdVT_GsfTrkIdT_;
    bool loaded_HLT_Ele135_CaloIdVT_GsfTrkIdT_;
    bool HLT_Ele145_CaloIdVT_GsfTrkIdT_;
    TBranch *b_HLT_Ele145_CaloIdVT_GsfTrkIdT_;
    bool loaded_HLT_Ele145_CaloIdVT_GsfTrkIdT_;
    bool HLT_Ele15_IsoVVVL_PFHT450_;
    TBranch *b_HLT_Ele15_IsoVVVL_PFHT450_;
    bool loaded_HLT_Ele15_IsoVVVL_PFHT450_;
    bool HLT_Ele15_IsoVVVL_PFHT450_CaloBTagCSV_4p5_;
    TBranch *b_HLT_Ele15_IsoVVVL_PFHT450_CaloBTagCSV_4p5_;
    bool loaded_HLT_Ele15_IsoVVVL_PFHT450_CaloBTagCSV_4p5_;
    bool HLT_Ele15_IsoVVVL_PFHT450_PFMET50_;
    TBranch *b_HLT_Ele15_IsoVVVL_PFHT450_PFMET50_;
    bool loaded_HLT_Ele15_IsoVVVL_PFHT450_PFMET50_;
    bool HLT_Ele15_IsoVVVL_PFHT600_;
    TBranch *b_HLT_Ele15_IsoVVVL_PFHT600_;
    bool loaded_HLT_Ele15_IsoVVVL_PFHT600_;
    bool HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL_;
    TBranch *b_HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL_;
    bool loaded_HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL_;
    bool HLT_Ele17_CaloIdM_TrackIdM_PFJet30_;
    TBranch *b_HLT_Ele17_CaloIdM_TrackIdM_PFJet30_;
    bool loaded_HLT_Ele17_CaloIdM_TrackIdM_PFJet30_;
    bool HLT_Ele200_CaloIdVT_GsfTrkIdT_;
    TBranch *b_HLT_Ele200_CaloIdVT_GsfTrkIdT_;
    bool loaded_HLT_Ele200_CaloIdVT_GsfTrkIdT_;
    bool HLT_Ele20_WPLoose_Gsf_;
    TBranch *b_HLT_Ele20_WPLoose_Gsf_;
    bool loaded_HLT_Ele20_WPLoose_Gsf_;
    bool HLT_Ele20_WPTight_Gsf_;
    TBranch *b_HLT_Ele20_WPTight_Gsf_;
    bool loaded_HLT_Ele20_WPTight_Gsf_;
    bool HLT_Ele20_eta2p1_WPLoose_Gsf_;
    TBranch *b_HLT_Ele20_eta2p1_WPLoose_Gsf_;
    bool loaded_HLT_Ele20_eta2p1_WPLoose_Gsf_;
    bool HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_;
    TBranch *b_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_;
    bool loaded_HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30_;
    bool HLT_Ele23_CaloIdM_TrackIdM_PFJet30_;
    TBranch *b_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_;
    bool loaded_HLT_Ele23_CaloIdM_TrackIdM_PFJet30_;
    bool HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_;
    TBranch *b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_;
    bool loaded_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_;
    bool HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_;
    TBranch *b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_;
    bool loaded_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_;
    bool HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_CrossL1_;
    TBranch *b_HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_CrossL1_;
    bool loaded_HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_CrossL1_;
    bool HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_TightID_CrossL1_;
    TBranch *b_HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_TightID_CrossL1_;
    bool loaded_HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_TightID_CrossL1_;
    bool HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_CrossL1_;
    TBranch *b_HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_CrossL1_;
    bool loaded_HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_CrossL1_;
    bool HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_TightID_CrossL1_;
    TBranch *b_HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_TightID_CrossL1_;
    bool loaded_HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_TightID_CrossL1_;
    bool HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_CrossL1_;
    TBranch *b_HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_CrossL1_;
    bool loaded_HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_CrossL1_;
    bool HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_TightID_CrossL1_;
    TBranch *b_HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_TightID_CrossL1_;
    bool loaded_HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_TightID_CrossL1_;
    bool HLT_Ele250_CaloIdVT_GsfTrkIdT_;
    TBranch *b_HLT_Ele250_CaloIdVT_GsfTrkIdT_;
    bool loaded_HLT_Ele250_CaloIdVT_GsfTrkIdT_;
    bool HLT_Ele27_Ele37_CaloIdL_MW_;
    TBranch *b_HLT_Ele27_Ele37_CaloIdL_MW_;
    bool loaded_HLT_Ele27_Ele37_CaloIdL_MW_;
    bool HLT_Ele27_WPTight_Gsf_;
    TBranch *b_HLT_Ele27_WPTight_Gsf_;
    bool loaded_HLT_Ele27_WPTight_Gsf_;
    bool HLT_Ele28_HighEta_SC20_Mass55_;
    TBranch *b_HLT_Ele28_HighEta_SC20_Mass55_;
    bool loaded_HLT_Ele28_HighEta_SC20_Mass55_;
    bool HLT_Ele28_eta2p1_WPTight_Gsf_HT150_;
    TBranch *b_HLT_Ele28_eta2p1_WPTight_Gsf_HT150_;
    bool loaded_HLT_Ele28_eta2p1_WPTight_Gsf_HT150_;
    bool HLT_Ele300_CaloIdVT_GsfTrkIdT_;
    TBranch *b_HLT_Ele300_CaloIdVT_GsfTrkIdT_;
    bool loaded_HLT_Ele300_CaloIdVT_GsfTrkIdT_;
    bool HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned_;
    TBranch *b_HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned_;
    bool loaded_HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned_;
    bool HLT_Ele32_WPTight_Gsf_;
    TBranch *b_HLT_Ele32_WPTight_Gsf_;
    bool loaded_HLT_Ele32_WPTight_Gsf_;
    bool HLT_Ele32_WPTight_Gsf_L1DoubleEG_;
    TBranch *b_HLT_Ele32_WPTight_Gsf_L1DoubleEG_;
    bool loaded_HLT_Ele32_WPTight_Gsf_L1DoubleEG_;
    bool HLT_Ele35_WPTight_Gsf_;
    TBranch *b_HLT_Ele35_WPTight_Gsf_;
    bool loaded_HLT_Ele35_WPTight_Gsf_;
    bool HLT_Ele35_WPTight_Gsf_L1EGMT_;
    TBranch *b_HLT_Ele35_WPTight_Gsf_L1EGMT_;
    bool loaded_HLT_Ele35_WPTight_Gsf_L1EGMT_;
    bool HLT_Ele38_WPTight_Gsf_;
    TBranch *b_HLT_Ele38_WPTight_Gsf_;
    bool loaded_HLT_Ele38_WPTight_Gsf_;
    bool HLT_Ele40_WPTight_Gsf_;
    TBranch *b_HLT_Ele40_WPTight_Gsf_;
    bool loaded_HLT_Ele40_WPTight_Gsf_;
    bool HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165_;
    TBranch *b_HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165_;
    bool loaded_HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165_;
    bool HLT_Ele50_IsoVVVL_PFHT450_;
    TBranch *b_HLT_Ele50_IsoVVVL_PFHT450_;
    bool loaded_HLT_Ele50_IsoVVVL_PFHT450_;
    bool HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30_;
    TBranch *b_HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30_;
    bool loaded_HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30_;
    bool HLT_Ele8_CaloIdM_TrackIdM_PFJet30_;
    TBranch *b_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_;
    bool loaded_HLT_Ele8_CaloIdM_TrackIdM_PFJet30_;
    bool HLT_FullTrack_Multiplicity100_;
    TBranch *b_HLT_FullTrack_Multiplicity100_;
    bool loaded_HLT_FullTrack_Multiplicity100_;
    bool HLT_FullTrack_Multiplicity130_;
    TBranch *b_HLT_FullTrack_Multiplicity130_;
    bool loaded_HLT_FullTrack_Multiplicity130_;
    bool HLT_FullTrack_Multiplicity155_;
    TBranch *b_HLT_FullTrack_Multiplicity155_;
    bool loaded_HLT_FullTrack_Multiplicity155_;
    bool HLT_FullTrack_Multiplicity85_;
    TBranch *b_HLT_FullTrack_Multiplicity85_;
    bool loaded_HLT_FullTrack_Multiplicity85_;
    bool HLT_HISinglePhoton10_Eta3p1ForPPRef_;
    TBranch *b_HLT_HISinglePhoton10_Eta3p1ForPPRef_;
    bool loaded_HLT_HISinglePhoton10_Eta3p1ForPPRef_;
    bool HLT_HISinglePhoton20_Eta3p1ForPPRef_;
    TBranch *b_HLT_HISinglePhoton20_Eta3p1ForPPRef_;
    bool loaded_HLT_HISinglePhoton20_Eta3p1ForPPRef_;
    bool HLT_HISinglePhoton30_Eta3p1ForPPRef_;
    TBranch *b_HLT_HISinglePhoton30_Eta3p1ForPPRef_;
    bool loaded_HLT_HISinglePhoton30_Eta3p1ForPPRef_;
    bool HLT_HISinglePhoton40_Eta3p1ForPPRef_;
    TBranch *b_HLT_HISinglePhoton40_Eta3p1ForPPRef_;
    bool loaded_HLT_HISinglePhoton40_Eta3p1ForPPRef_;
    bool HLT_HISinglePhoton50_Eta3p1ForPPRef_;
    TBranch *b_HLT_HISinglePhoton50_Eta3p1ForPPRef_;
    bool loaded_HLT_HISinglePhoton50_Eta3p1ForPPRef_;
    bool HLT_HISinglePhoton60_Eta3p1ForPPRef_;
    TBranch *b_HLT_HISinglePhoton60_Eta3p1ForPPRef_;
    bool loaded_HLT_HISinglePhoton60_Eta3p1ForPPRef_;
    bool HLT_HT300_Beamspot_;
    TBranch *b_HLT_HT300_Beamspot_;
    bool loaded_HLT_HT300_Beamspot_;
    bool HLT_HT400_DisplacedDijet40_DisplacedTrack_;
    TBranch *b_HLT_HT400_DisplacedDijet40_DisplacedTrack_;
    bool loaded_HLT_HT400_DisplacedDijet40_DisplacedTrack_;
    bool HLT_HT425_;
    TBranch *b_HLT_HT425_;
    bool loaded_HLT_HT425_;
    bool HLT_HT430_DisplacedDijet40_DisplacedTrack_;
    TBranch *b_HLT_HT430_DisplacedDijet40_DisplacedTrack_;
    bool loaded_HLT_HT430_DisplacedDijet40_DisplacedTrack_;
    bool HLT_HT430_DisplacedDijet60_DisplacedTrack_;
    TBranch *b_HLT_HT430_DisplacedDijet60_DisplacedTrack_;
    bool loaded_HLT_HT430_DisplacedDijet60_DisplacedTrack_;
    bool HLT_HT430_DisplacedDijet80_DisplacedTrack_;
    TBranch *b_HLT_HT430_DisplacedDijet80_DisplacedTrack_;
    bool loaded_HLT_HT430_DisplacedDijet80_DisplacedTrack_;
    bool HLT_HT450_Beamspot_;
    TBranch *b_HLT_HT450_Beamspot_;
    bool loaded_HLT_HT450_Beamspot_;
    bool HLT_HT550_DisplacedDijet60_Inclusive_;
    TBranch *b_HLT_HT550_DisplacedDijet60_Inclusive_;
    bool loaded_HLT_HT550_DisplacedDijet60_Inclusive_;
    bool HLT_HT550_DisplacedDijet80_Inclusive_;
    TBranch *b_HLT_HT550_DisplacedDijet80_Inclusive_;
    bool loaded_HLT_HT550_DisplacedDijet80_Inclusive_;
    bool HLT_HT650_DisplacedDijet60_Inclusive_;
    TBranch *b_HLT_HT650_DisplacedDijet60_Inclusive_;
    bool loaded_HLT_HT650_DisplacedDijet60_Inclusive_;
    bool HLT_HT650_DisplacedDijet80_Inclusive_;
    TBranch *b_HLT_HT650_DisplacedDijet80_Inclusive_;
    bool loaded_HLT_HT650_DisplacedDijet80_Inclusive_;
    bool HLT_HT750_DisplacedDijet80_Inclusive_;
    TBranch *b_HLT_HT750_DisplacedDijet80_Inclusive_;
    bool loaded_HLT_HT750_DisplacedDijet80_Inclusive_;
    bool HLT_HcalCalibration_;
    TBranch *b_HLT_HcalCalibration_;
    bool loaded_HLT_HcalCalibration_;
    bool HLT_HcalIsolatedbunch_;
    TBranch *b_HLT_HcalIsolatedbunch_;
    bool loaded_HLT_HcalIsolatedbunch_;
    bool HLT_HcalNZS_;
    TBranch *b_HLT_HcalNZS_;
    bool loaded_HLT_HcalNZS_;
    bool HLT_HcalPhiSym_;
    TBranch *b_HLT_HcalPhiSym_;
    bool loaded_HLT_HcalPhiSym_;
    bool HLT_IsoMu20_;
    TBranch *b_HLT_IsoMu20_;
    bool loaded_HLT_IsoMu20_;
    bool HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_CrossL1_;
    TBranch *b_HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_CrossL1_;
    bool loaded_HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_CrossL1_;
    bool HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_TightID_CrossL1_;
    TBranch *b_HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_TightID_CrossL1_;
    bool loaded_HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_TightID_CrossL1_;
    bool HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_CrossL1_;
    TBranch *b_HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_CrossL1_;
    bool loaded_HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_CrossL1_;
    bool HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_TightID_CrossL1_;
    TBranch *b_HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_TightID_CrossL1_;
    bool loaded_HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_TightID_CrossL1_;
    bool HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_CrossL1_;
    TBranch *b_HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_CrossL1_;
    bool loaded_HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_CrossL1_;
    bool HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_TightID_CrossL1_;
    TBranch *b_HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_TightID_CrossL1_;
    bool loaded_HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_TightID_CrossL1_;
    bool HLT_IsoMu24_;
    TBranch *b_HLT_IsoMu24_;
    bool loaded_HLT_IsoMu24_;
    bool HLT_IsoMu24_eta2p1_;
    TBranch *b_HLT_IsoMu24_eta2p1_;
    bool loaded_HLT_IsoMu24_eta2p1_;
    bool HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_SingleL1_;
    TBranch *b_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_SingleL1_;
    bool loaded_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_SingleL1_;
    bool HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_TightID_SingleL1_;
    TBranch *b_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_TightID_SingleL1_;
    bool loaded_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_TightID_SingleL1_;
    bool HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_;
    TBranch *b_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_;
    bool loaded_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_;
    bool HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_;
    TBranch *b_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_;
    bool loaded_HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_;
    bool HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_SingleL1_;
    TBranch *b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_SingleL1_;
    bool loaded_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_SingleL1_;
    bool HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_TightID_SingleL1_;
    TBranch *b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_TightID_SingleL1_;
    bool loaded_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_TightID_SingleL1_;
    bool HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_;
    TBranch *b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_;
    bool loaded_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_;
    bool HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_;
    TBranch *b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_;
    bool loaded_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_;
    bool HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1_;
    TBranch *b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1_;
    bool loaded_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1_;
    bool HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1_;
    TBranch *b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1_;
    bool loaded_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1_;
    bool HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_;
    TBranch *b_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_;
    bool loaded_HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_;
    bool HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_SingleL1_;
    TBranch *b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_SingleL1_;
    bool loaded_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_SingleL1_;
    bool HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_TightID_SingleL1_;
    TBranch *b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_TightID_SingleL1_;
    bool loaded_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_TightID_SingleL1_;
    bool HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_;
    TBranch *b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_;
    bool loaded_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1_;
    bool HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_;
    TBranch *b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_;
    bool loaded_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1_;
    bool HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1_;
    TBranch *b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1_;
    bool loaded_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1_;
    bool HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1_;
    TBranch *b_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1_;
    bool loaded_HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1_;
    bool HLT_IsoMu27_;
    TBranch *b_HLT_IsoMu27_;
    bool loaded_HLT_IsoMu27_;
    bool HLT_IsoMu27_LooseChargedIsoPFTau20_SingleL1_;
    TBranch *b_HLT_IsoMu27_LooseChargedIsoPFTau20_SingleL1_;
    bool loaded_HLT_IsoMu27_LooseChargedIsoPFTau20_SingleL1_;
    bool HLT_IsoMu27_MediumChargedIsoPFTau20_SingleL1_;
    TBranch *b_HLT_IsoMu27_MediumChargedIsoPFTau20_SingleL1_;
    bool loaded_HLT_IsoMu27_MediumChargedIsoPFTau20_SingleL1_;
    bool HLT_IsoMu27_TightChargedIsoPFTau20_SingleL1_;
    TBranch *b_HLT_IsoMu27_TightChargedIsoPFTau20_SingleL1_;
    bool loaded_HLT_IsoMu27_TightChargedIsoPFTau20_SingleL1_;
    bool HLT_IsoMu30_;
    TBranch *b_HLT_IsoMu30_;
    bool loaded_HLT_IsoMu30_;
    bool HLT_IsoTrackHB_;
    TBranch *b_HLT_IsoTrackHB_;
    bool loaded_HLT_IsoTrackHB_;
    bool HLT_IsoTrackHE_;
    TBranch *b_HLT_IsoTrackHE_;
    bool loaded_HLT_IsoTrackHE_;
    bool HLT_L1ETMHadSeeds_;
    TBranch *b_HLT_L1ETMHadSeeds_;
    bool loaded_HLT_L1ETMHadSeeds_;
    bool HLT_L1MinimumBiasHF0OR_;
    TBranch *b_HLT_L1MinimumBiasHF0OR_;
    bool loaded_HLT_L1MinimumBiasHF0OR_;
    bool HLT_L1MinimumBiasHF_OR_;
    TBranch *b_HLT_L1MinimumBiasHF_OR_;
    bool loaded_HLT_L1MinimumBiasHF_OR_;
    bool HLT_L1NotBptxOR_;
    TBranch *b_HLT_L1NotBptxOR_;
    bool loaded_HLT_L1NotBptxOR_;
    bool HLT_L1SingleMu18_;
    TBranch *b_HLT_L1SingleMu18_;
    bool loaded_HLT_L1SingleMu18_;
    bool HLT_L1SingleMu25_;
    TBranch *b_HLT_L1SingleMu25_;
    bool loaded_HLT_L1SingleMu25_;
    bool HLT_L1UnpairedBunchBptxMinus_;
    TBranch *b_HLT_L1UnpairedBunchBptxMinus_;
    bool loaded_HLT_L1UnpairedBunchBptxMinus_;
    bool HLT_L1UnpairedBunchBptxPlus_;
    TBranch *b_HLT_L1UnpairedBunchBptxPlus_;
    bool loaded_HLT_L1UnpairedBunchBptxPlus_;
    bool HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142_;
    TBranch *b_HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142_;
    bool loaded_HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142_;
    bool HLT_L1_DoubleJet30_Mass_Min400_Mu10_;
    TBranch *b_HLT_L1_DoubleJet30_Mass_Min400_Mu10_;
    bool loaded_HLT_L1_DoubleJet30_Mass_Min400_Mu10_;
    bool HLT_L2Mu10_;
    TBranch *b_HLT_L2Mu10_;
    bool loaded_HLT_L2Mu10_;
    bool HLT_L2Mu10_NoVertex_NoBPTX_;
    TBranch *b_HLT_L2Mu10_NoVertex_NoBPTX_;
    bool loaded_HLT_L2Mu10_NoVertex_NoBPTX_;
    bool HLT_L2Mu10_NoVertex_NoBPTX3BX_;
    TBranch *b_HLT_L2Mu10_NoVertex_NoBPTX3BX_;
    bool loaded_HLT_L2Mu10_NoVertex_NoBPTX3BX_;
    bool HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX_;
    TBranch *b_HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX_;
    bool loaded_HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX_;
    bool HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX_;
    TBranch *b_HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX_;
    bool loaded_HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX_;
    bool HLT_L2Mu50_;
    TBranch *b_HLT_L2Mu50_;
    bool loaded_HLT_L2Mu50_;
    bool HLT_MET105_IsoTrk50_;
    TBranch *b_HLT_MET105_IsoTrk50_;
    bool loaded_HLT_MET105_IsoTrk50_;
    bool HLT_MET120_IsoTrk50_;
    TBranch *b_HLT_MET120_IsoTrk50_;
    bool loaded_HLT_MET120_IsoTrk50_;
    bool HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_;
    TBranch *b_HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_;
    bool loaded_HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_;
    bool HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr_;
    TBranch *b_HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr_;
    bool loaded_HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr_;
    bool HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_;
    TBranch *b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_;
    bool loaded_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_;
    bool HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100_;
    TBranch *b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100_;
    bool loaded_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100_;
    bool HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110_;
    TBranch *b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110_;
    bool loaded_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110_;
    bool HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120_;
    TBranch *b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120_;
    bool loaded_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120_;
    bool HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130_;
    TBranch *b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130_;
    bool loaded_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130_;
    bool HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90_;
    TBranch *b_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90_;
    bool loaded_HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90_;
    bool HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight_;
    TBranch *b_HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight_;
    bool loaded_HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight_;
    bool HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight_;
    TBranch *b_HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight_;
    bool loaded_HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight_;
    bool HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight_;
    TBranch *b_HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight_;
    bool loaded_HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight_;
    bool HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight_;
    TBranch *b_HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight_;
    bool loaded_HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight_;
    bool HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60_;
    TBranch *b_HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60_;
    bool loaded_HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60_;
    bool HLT_Mu12_DoublePFJets100_CaloBTagCSV_p33_;
    TBranch *b_HLT_Mu12_DoublePFJets100_CaloBTagCSV_p33_;
    bool loaded_HLT_Mu12_DoublePFJets100_CaloBTagCSV_p33_;
    bool HLT_Mu12_DoublePFJets200_CaloBTagCSV_p33_;
    TBranch *b_HLT_Mu12_DoublePFJets200_CaloBTagCSV_p33_;
    bool loaded_HLT_Mu12_DoublePFJets200_CaloBTagCSV_p33_;
    bool HLT_Mu12_DoublePFJets350_CaloBTagCSV_p33_;
    TBranch *b_HLT_Mu12_DoublePFJets350_CaloBTagCSV_p33_;
    bool loaded_HLT_Mu12_DoublePFJets350_CaloBTagCSV_p33_;
    bool HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagCSV_p33_;
    TBranch *b_HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagCSV_p33_;
    bool loaded_HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagCSV_p33_;
    bool HLT_Mu12_DoublePFJets40_CaloBTagCSV_p33_;
    TBranch *b_HLT_Mu12_DoublePFJets40_CaloBTagCSV_p33_;
    bool loaded_HLT_Mu12_DoublePFJets40_CaloBTagCSV_p33_;
    bool HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagCSV_p33_;
    TBranch *b_HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagCSV_p33_;
    bool loaded_HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagCSV_p33_;
    bool HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagCSV_p33_;
    TBranch *b_HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagCSV_p33_;
    bool loaded_HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagCSV_p33_;
    bool HLT_Mu12_DoublePhoton20_;
    TBranch *b_HLT_Mu12_DoublePhoton20_;
    bool loaded_HLT_Mu12_DoublePhoton20_;
    bool HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_;
    TBranch *b_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_;
    bool loaded_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_;
    bool HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_;
    TBranch *b_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_;
    bool loaded_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_;
    bool HLT_Mu15_IsoVVVL_PFHT450_;
    TBranch *b_HLT_Mu15_IsoVVVL_PFHT450_;
    bool loaded_HLT_Mu15_IsoVVVL_PFHT450_;
    bool HLT_Mu15_IsoVVVL_PFHT450_CaloBTagCSV_4p5_;
    TBranch *b_HLT_Mu15_IsoVVVL_PFHT450_CaloBTagCSV_4p5_;
    bool loaded_HLT_Mu15_IsoVVVL_PFHT450_CaloBTagCSV_4p5_;
    bool HLT_Mu15_IsoVVVL_PFHT450_PFMET50_;
    TBranch *b_HLT_Mu15_IsoVVVL_PFHT450_PFMET50_;
    bool loaded_HLT_Mu15_IsoVVVL_PFHT450_PFMET50_;
    bool HLT_Mu15_IsoVVVL_PFHT600_;
    TBranch *b_HLT_Mu15_IsoVVVL_PFHT600_;
    bool loaded_HLT_Mu15_IsoVVVL_PFHT600_;
    bool HLT_Mu17_;
    TBranch *b_HLT_Mu17_;
    bool loaded_HLT_Mu17_;
    bool HLT_Mu17_Photon30_IsoCaloId_;
    TBranch *b_HLT_Mu17_Photon30_IsoCaloId_;
    bool loaded_HLT_Mu17_Photon30_IsoCaloId_;
    bool HLT_Mu17_TrkIsoVVL_;
    TBranch *b_HLT_Mu17_TrkIsoVVL_;
    bool loaded_HLT_Mu17_TrkIsoVVL_;
    bool HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_;
    TBranch *b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_;
    bool loaded_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_;
    bool HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_;
    TBranch *b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_;
    bool loaded_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_;
    bool HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8_;
    TBranch *b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8_;
    bool loaded_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8_;
    bool HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8_;
    TBranch *b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8_;
    bool loaded_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8_;
    bool HLT_Mu18_Mu9_;
    TBranch *b_HLT_Mu18_Mu9_;
    bool loaded_HLT_Mu18_Mu9_;
    bool HLT_Mu18_Mu9_DZ_;
    TBranch *b_HLT_Mu18_Mu9_DZ_;
    bool loaded_HLT_Mu18_Mu9_DZ_;
    bool HLT_Mu18_Mu9_SameSign_;
    TBranch *b_HLT_Mu18_Mu9_SameSign_;
    bool loaded_HLT_Mu18_Mu9_SameSign_;
    bool HLT_Mu18_Mu9_SameSign_DZ_;
    TBranch *b_HLT_Mu18_Mu9_SameSign_DZ_;
    bool loaded_HLT_Mu18_Mu9_SameSign_DZ_;
    bool HLT_Mu19_;
    TBranch *b_HLT_Mu19_;
    bool loaded_HLT_Mu19_;
    bool HLT_Mu19_TrkIsoVVL_;
    TBranch *b_HLT_Mu19_TrkIsoVVL_;
    bool loaded_HLT_Mu19_TrkIsoVVL_;
    bool HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_;
    TBranch *b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_;
    bool loaded_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_;
    bool HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_;
    TBranch *b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_;
    bool loaded_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_;
    bool HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8_;
    TBranch *b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8_;
    bool loaded_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8_;
    bool HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8_;
    TBranch *b_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8_;
    bool loaded_HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8_;
    bool HLT_Mu20_;
    TBranch *b_HLT_Mu20_;
    bool loaded_HLT_Mu20_;
    bool HLT_Mu20_Mu10_;
    TBranch *b_HLT_Mu20_Mu10_;
    bool loaded_HLT_Mu20_Mu10_;
    bool HLT_Mu20_Mu10_DZ_;
    TBranch *b_HLT_Mu20_Mu10_DZ_;
    bool loaded_HLT_Mu20_Mu10_DZ_;
    bool HLT_Mu20_Mu10_SameSign_;
    TBranch *b_HLT_Mu20_Mu10_SameSign_;
    bool loaded_HLT_Mu20_Mu10_SameSign_;
    bool HLT_Mu20_Mu10_SameSign_DZ_;
    TBranch *b_HLT_Mu20_Mu10_SameSign_DZ_;
    bool loaded_HLT_Mu20_Mu10_SameSign_DZ_;
    bool HLT_Mu20_TkMu0_Phi_;
    TBranch *b_HLT_Mu20_TkMu0_Phi_;
    bool loaded_HLT_Mu20_TkMu0_Phi_;
    bool HLT_Mu23_Mu12_;
    TBranch *b_HLT_Mu23_Mu12_;
    bool loaded_HLT_Mu23_Mu12_;
    bool HLT_Mu23_Mu12_DZ_;
    TBranch *b_HLT_Mu23_Mu12_DZ_;
    bool loaded_HLT_Mu23_Mu12_DZ_;
    bool HLT_Mu23_Mu12_SameSign_;
    TBranch *b_HLT_Mu23_Mu12_SameSign_;
    bool loaded_HLT_Mu23_Mu12_SameSign_;
    bool HLT_Mu23_Mu12_SameSign_DZ_;
    TBranch *b_HLT_Mu23_Mu12_SameSign_DZ_;
    bool loaded_HLT_Mu23_Mu12_SameSign_DZ_;
    bool HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_;
    TBranch *b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_;
    bool loaded_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_;
    bool HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_;
    TBranch *b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_;
    bool loaded_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ_;
    bool HLT_Mu25_TkMu0_Onia_;
    TBranch *b_HLT_Mu25_TkMu0_Onia_;
    bool loaded_HLT_Mu25_TkMu0_Onia_;
    bool HLT_Mu25_TkMu0_Phi_;
    TBranch *b_HLT_Mu25_TkMu0_Phi_;
    bool loaded_HLT_Mu25_TkMu0_Phi_;
    bool HLT_Mu27_;
    TBranch *b_HLT_Mu27_;
    bool loaded_HLT_Mu27_;
    bool HLT_Mu27_Ele37_CaloIdL_MW_;
    TBranch *b_HLT_Mu27_Ele37_CaloIdL_MW_;
    bool loaded_HLT_Mu27_Ele37_CaloIdL_MW_;
    bool HLT_Mu30_TkMu0_Onia_;
    TBranch *b_HLT_Mu30_TkMu0_Onia_;
    bool loaded_HLT_Mu30_TkMu0_Onia_;
    bool HLT_Mu37_Ele27_CaloIdL_MW_;
    TBranch *b_HLT_Mu37_Ele27_CaloIdL_MW_;
    bool loaded_HLT_Mu37_Ele27_CaloIdL_MW_;
    bool HLT_Mu37_TkMu27_;
    TBranch *b_HLT_Mu37_TkMu27_;
    bool loaded_HLT_Mu37_TkMu27_;
    bool HLT_Mu3_PFJet40_;
    TBranch *b_HLT_Mu3_PFJet40_;
    bool loaded_HLT_Mu3_PFJet40_;
    bool HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL_;
    TBranch *b_HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL_;
    bool loaded_HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL_;
    bool HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL_;
    TBranch *b_HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL_;
    bool loaded_HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL_;
    bool HLT_Mu50_;
    TBranch *b_HLT_Mu50_;
    bool loaded_HLT_Mu50_;
    bool HLT_Mu50_IsoVVVL_PFHT450_;
    TBranch *b_HLT_Mu50_IsoVVVL_PFHT450_;
    bool loaded_HLT_Mu50_IsoVVVL_PFHT450_;
    bool HLT_Mu55_;
    TBranch *b_HLT_Mu55_;
    bool loaded_HLT_Mu55_;
    bool HLT_Mu7p5_L2Mu2_Jpsi_;
    TBranch *b_HLT_Mu7p5_L2Mu2_Jpsi_;
    bool loaded_HLT_Mu7p5_L2Mu2_Jpsi_;
    bool HLT_Mu7p5_L2Mu2_Upsilon_;
    TBranch *b_HLT_Mu7p5_L2Mu2_Upsilon_;
    bool loaded_HLT_Mu7p5_L2Mu2_Upsilon_;
    bool HLT_Mu7p5_Track2_Jpsi_;
    TBranch *b_HLT_Mu7p5_Track2_Jpsi_;
    bool loaded_HLT_Mu7p5_Track2_Jpsi_;
    bool HLT_Mu7p5_Track2_Upsilon_;
    TBranch *b_HLT_Mu7p5_Track2_Upsilon_;
    bool loaded_HLT_Mu7p5_Track2_Upsilon_;
    bool HLT_Mu7p5_Track3p5_Jpsi_;
    TBranch *b_HLT_Mu7p5_Track3p5_Jpsi_;
    bool loaded_HLT_Mu7p5_Track3p5_Jpsi_;
    bool HLT_Mu7p5_Track3p5_Upsilon_;
    TBranch *b_HLT_Mu7p5_Track3p5_Upsilon_;
    bool loaded_HLT_Mu7p5_Track3p5_Upsilon_;
    bool HLT_Mu7p5_Track7_Jpsi_;
    TBranch *b_HLT_Mu7p5_Track7_Jpsi_;
    bool loaded_HLT_Mu7p5_Track7_Jpsi_;
    bool HLT_Mu7p5_Track7_Upsilon_;
    TBranch *b_HLT_Mu7p5_Track7_Upsilon_;
    bool loaded_HLT_Mu7p5_Track7_Upsilon_;
    bool HLT_Mu8_;
    TBranch *b_HLT_Mu8_;
    bool loaded_HLT_Mu8_;
    bool HLT_Mu8_DiEle12_CaloIdL_TrackIdL_;
    TBranch *b_HLT_Mu8_DiEle12_CaloIdL_TrackIdL_;
    bool loaded_HLT_Mu8_DiEle12_CaloIdL_TrackIdL_;
    bool HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ_;
    TBranch *b_HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ_;
    bool loaded_HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ_;
    bool HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_;
    TBranch *b_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_;
    bool loaded_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_;
    bool HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ_;
    TBranch *b_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ_;
    bool loaded_HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ_;
    bool HLT_Mu8_TrkIsoVVL_;
    TBranch *b_HLT_Mu8_TrkIsoVVL_;
    bool loaded_HLT_Mu8_TrkIsoVVL_;
    bool HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60_;
    TBranch *b_HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60_;
    bool loaded_HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60_;
    bool HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_;
    TBranch *b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_;
    bool loaded_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_;
    bool HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_;
    TBranch *b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_;
    bool loaded_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ_;
    bool HLT_OldMu100_;
    TBranch *b_HLT_OldMu100_;
    bool loaded_HLT_OldMu100_;
    bool HLT_PFHT1050_;
    TBranch *b_HLT_PFHT1050_;
    bool loaded_HLT_PFHT1050_;
    bool HLT_PFHT180_;
    TBranch *b_HLT_PFHT180_;
    bool loaded_HLT_PFHT180_;
    bool HLT_PFHT250_;
    TBranch *b_HLT_PFHT250_;
    bool loaded_HLT_PFHT250_;
    bool HLT_PFHT300PT30_QuadPFJet_75_60_45_40_;
    TBranch *b_HLT_PFHT300PT30_QuadPFJet_75_60_45_40_;
    bool loaded_HLT_PFHT300PT30_QuadPFJet_75_60_45_40_;
    bool HLT_PFHT300PT30_QuadPFJet_75_60_45_40_TriplePFBTagCSV_3p0_;
    TBranch *b_HLT_PFHT300PT30_QuadPFJet_75_60_45_40_TriplePFBTagCSV_3p0_;
    bool loaded_HLT_PFHT300PT30_QuadPFJet_75_60_45_40_TriplePFBTagCSV_3p0_;
    bool HLT_PFHT350_;
    TBranch *b_HLT_PFHT350_;
    bool loaded_HLT_PFHT350_;
    bool HLT_PFHT350MinPFJet15_;
    TBranch *b_HLT_PFHT350MinPFJet15_;
    bool loaded_HLT_PFHT350MinPFJet15_;
    bool HLT_PFHT370_;
    TBranch *b_HLT_PFHT370_;
    bool loaded_HLT_PFHT370_;
    bool HLT_PFHT380_SixPFJet32_;
    TBranch *b_HLT_PFHT380_SixPFJet32_;
    bool loaded_HLT_PFHT380_SixPFJet32_;
    bool HLT_PFHT380_SixPFJet32_DoublePFBTagCSV_2p2_;
    TBranch *b_HLT_PFHT380_SixPFJet32_DoublePFBTagCSV_2p2_;
    bool loaded_HLT_PFHT380_SixPFJet32_DoublePFBTagCSV_2p2_;
    bool HLT_PFHT380_SixPFJet32_DoublePFBTagDeepCSV_2p2_;
    TBranch *b_HLT_PFHT380_SixPFJet32_DoublePFBTagDeepCSV_2p2_;
    bool loaded_HLT_PFHT380_SixPFJet32_DoublePFBTagDeepCSV_2p2_;
    bool HLT_PFHT430_;
    TBranch *b_HLT_PFHT430_;
    bool loaded_HLT_PFHT430_;
    bool HLT_PFHT430_SixPFJet40_;
    TBranch *b_HLT_PFHT430_SixPFJet40_;
    bool loaded_HLT_PFHT430_SixPFJet40_;
    bool HLT_PFHT430_SixPFJet40_PFBTagCSV_1p5_;
    TBranch *b_HLT_PFHT430_SixPFJet40_PFBTagCSV_1p5_;
    bool loaded_HLT_PFHT430_SixPFJet40_PFBTagCSV_1p5_;
    bool HLT_PFHT500_PFMET100_PFMHT100_IDTight_;
    TBranch *b_HLT_PFHT500_PFMET100_PFMHT100_IDTight_;
    bool loaded_HLT_PFHT500_PFMET100_PFMHT100_IDTight_;
    bool HLT_PFHT500_PFMET110_PFMHT110_IDTight_;
    TBranch *b_HLT_PFHT500_PFMET110_PFMHT110_IDTight_;
    bool loaded_HLT_PFHT500_PFMET110_PFMHT110_IDTight_;
    bool HLT_PFHT510_;
    TBranch *b_HLT_PFHT510_;
    bool loaded_HLT_PFHT510_;
    bool HLT_PFHT590_;
    TBranch *b_HLT_PFHT590_;
    bool loaded_HLT_PFHT590_;
    bool HLT_PFHT680_;
    TBranch *b_HLT_PFHT680_;
    bool loaded_HLT_PFHT680_;
    bool HLT_PFHT700_PFMET85_PFMHT85_IDTight_;
    TBranch *b_HLT_PFHT700_PFMET85_PFMHT85_IDTight_;
    bool loaded_HLT_PFHT700_PFMET85_PFMHT85_IDTight_;
    bool HLT_PFHT700_PFMET95_PFMHT95_IDTight_;
    TBranch *b_HLT_PFHT700_PFMET95_PFMHT95_IDTight_;
    bool loaded_HLT_PFHT700_PFMET95_PFMHT95_IDTight_;
    bool HLT_PFHT780_;
    TBranch *b_HLT_PFHT780_;
    bool loaded_HLT_PFHT780_;
    bool HLT_PFHT800_PFMET75_PFMHT75_IDTight_;
    TBranch *b_HLT_PFHT800_PFMET75_PFMHT75_IDTight_;
    bool loaded_HLT_PFHT800_PFMET75_PFMHT75_IDTight_;
    bool HLT_PFHT800_PFMET85_PFMHT85_IDTight_;
    TBranch *b_HLT_PFHT800_PFMET85_PFMHT85_IDTight_;
    bool loaded_HLT_PFHT800_PFMET85_PFMHT85_IDTight_;
    bool HLT_PFHT890_;
    TBranch *b_HLT_PFHT890_;
    bool loaded_HLT_PFHT890_;
    bool HLT_PFJet140_;
    TBranch *b_HLT_PFJet140_;
    bool loaded_HLT_PFJet140_;
    bool HLT_PFJet200_;
    TBranch *b_HLT_PFJet200_;
    bool loaded_HLT_PFJet200_;
    bool HLT_PFJet260_;
    TBranch *b_HLT_PFJet260_;
    bool loaded_HLT_PFJet260_;
    bool HLT_PFJet320_;
    TBranch *b_HLT_PFJet320_;
    bool loaded_HLT_PFJet320_;
    bool HLT_PFJet40_;
    TBranch *b_HLT_PFJet40_;
    bool loaded_HLT_PFJet40_;
    bool HLT_PFJet400_;
    TBranch *b_HLT_PFJet400_;
    bool loaded_HLT_PFJet400_;
    bool HLT_PFJet450_;
    TBranch *b_HLT_PFJet450_;
    bool loaded_HLT_PFJet450_;
    bool HLT_PFJet500_;
    TBranch *b_HLT_PFJet500_;
    bool loaded_HLT_PFJet500_;
    bool HLT_PFJet550_;
    TBranch *b_HLT_PFJet550_;
    bool loaded_HLT_PFJet550_;
    bool HLT_PFJet60_;
    TBranch *b_HLT_PFJet60_;
    bool loaded_HLT_PFJet60_;
    bool HLT_PFJet80_;
    TBranch *b_HLT_PFJet80_;
    bool loaded_HLT_PFJet80_;
    bool HLT_PFJetFwd140_;
    TBranch *b_HLT_PFJetFwd140_;
    bool loaded_HLT_PFJetFwd140_;
    bool HLT_PFJetFwd200_;
    TBranch *b_HLT_PFJetFwd200_;
    bool loaded_HLT_PFJetFwd200_;
    bool HLT_PFJetFwd260_;
    TBranch *b_HLT_PFJetFwd260_;
    bool loaded_HLT_PFJetFwd260_;
    bool HLT_PFJetFwd320_;
    TBranch *b_HLT_PFJetFwd320_;
    bool loaded_HLT_PFJetFwd320_;
    bool HLT_PFJetFwd40_;
    TBranch *b_HLT_PFJetFwd40_;
    bool loaded_HLT_PFJetFwd40_;
    bool HLT_PFJetFwd400_;
    TBranch *b_HLT_PFJetFwd400_;
    bool loaded_HLT_PFJetFwd400_;
    bool HLT_PFJetFwd450_;
    TBranch *b_HLT_PFJetFwd450_;
    bool loaded_HLT_PFJetFwd450_;
    bool HLT_PFJetFwd500_;
    TBranch *b_HLT_PFJetFwd500_;
    bool loaded_HLT_PFJetFwd500_;
    bool HLT_PFJetFwd60_;
    TBranch *b_HLT_PFJetFwd60_;
    bool loaded_HLT_PFJetFwd60_;
    bool HLT_PFJetFwd80_;
    TBranch *b_HLT_PFJetFwd80_;
    bool loaded_HLT_PFJetFwd80_;
    bool HLT_PFMET100_PFMHT100_IDTight_CaloBTagCSV_3p1_;
    TBranch *b_HLT_PFMET100_PFMHT100_IDTight_CaloBTagCSV_3p1_;
    bool loaded_HLT_PFMET100_PFMHT100_IDTight_CaloBTagCSV_3p1_;
    bool HLT_PFMET100_PFMHT100_IDTight_PFHT60_;
    TBranch *b_HLT_PFMET100_PFMHT100_IDTight_PFHT60_;
    bool loaded_HLT_PFMET100_PFMHT100_IDTight_PFHT60_;
    bool HLT_PFMET110_PFMHT110_IDTight_;
    TBranch *b_HLT_PFMET110_PFMHT110_IDTight_;
    bool loaded_HLT_PFMET110_PFMHT110_IDTight_;
    bool HLT_PFMET110_PFMHT110_IDTight_CaloBTagCSV_3p1_;
    TBranch *b_HLT_PFMET110_PFMHT110_IDTight_CaloBTagCSV_3p1_;
    bool loaded_HLT_PFMET110_PFMHT110_IDTight_CaloBTagCSV_3p1_;
    bool HLT_PFMET120_PFMHT120_IDTight_;
    TBranch *b_HLT_PFMET120_PFMHT120_IDTight_;
    bool loaded_HLT_PFMET120_PFMHT120_IDTight_;
    bool HLT_PFMET120_PFMHT120_IDTight_CaloBTagCSV_3p1_;
    TBranch *b_HLT_PFMET120_PFMHT120_IDTight_CaloBTagCSV_3p1_;
    bool loaded_HLT_PFMET120_PFMHT120_IDTight_CaloBTagCSV_3p1_;
    bool HLT_PFMET120_PFMHT120_IDTight_PFHT60_;
    TBranch *b_HLT_PFMET120_PFMHT120_IDTight_PFHT60_;
    bool loaded_HLT_PFMET120_PFMHT120_IDTight_PFHT60_;
    bool HLT_PFMET130_PFMHT130_IDTight_;
    TBranch *b_HLT_PFMET130_PFMHT130_IDTight_;
    bool loaded_HLT_PFMET130_PFMHT130_IDTight_;
    bool HLT_PFMET130_PFMHT130_IDTight_CaloBTagCSV_3p1_;
    TBranch *b_HLT_PFMET130_PFMHT130_IDTight_CaloBTagCSV_3p1_;
    bool loaded_HLT_PFMET130_PFMHT130_IDTight_CaloBTagCSV_3p1_;
    bool HLT_PFMET140_PFMHT140_IDTight_;
    TBranch *b_HLT_PFMET140_PFMHT140_IDTight_;
    bool loaded_HLT_PFMET140_PFMHT140_IDTight_;
    bool HLT_PFMET140_PFMHT140_IDTight_CaloBTagCSV_3p1_;
    TBranch *b_HLT_PFMET140_PFMHT140_IDTight_CaloBTagCSV_3p1_;
    bool loaded_HLT_PFMET140_PFMHT140_IDTight_CaloBTagCSV_3p1_;
    bool HLT_PFMET200_HBHECleaned_;
    TBranch *b_HLT_PFMET200_HBHECleaned_;
    bool loaded_HLT_PFMET200_HBHECleaned_;
    bool HLT_PFMET200_HBHE_BeamHaloCleaned_;
    TBranch *b_HLT_PFMET200_HBHE_BeamHaloCleaned_;
    bool loaded_HLT_PFMET200_HBHE_BeamHaloCleaned_;
    bool HLT_PFMET200_NotCleaned_;
    TBranch *b_HLT_PFMET200_NotCleaned_;
    bool loaded_HLT_PFMET200_NotCleaned_;
    bool HLT_PFMET250_HBHECleaned_;
    TBranch *b_HLT_PFMET250_HBHECleaned_;
    bool loaded_HLT_PFMET250_HBHECleaned_;
    bool HLT_PFMET300_HBHECleaned_;
    TBranch *b_HLT_PFMET300_HBHECleaned_;
    bool loaded_HLT_PFMET300_HBHECleaned_;
    bool HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60_;
    TBranch *b_HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60_;
    bool loaded_HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60_;
    bool HLT_PFMETNoMu110_PFMHTNoMu110_IDTight_;
    TBranch *b_HLT_PFMETNoMu110_PFMHTNoMu110_IDTight_;
    bool loaded_HLT_PFMETNoMu110_PFMHTNoMu110_IDTight_;
    bool HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_;
    TBranch *b_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_;
    bool loaded_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_;
    bool HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60_;
    TBranch *b_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60_;
    bool loaded_HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60_;
    bool HLT_PFMETNoMu130_PFMHTNoMu130_IDTight_;
    TBranch *b_HLT_PFMETNoMu130_PFMHTNoMu130_IDTight_;
    bool loaded_HLT_PFMETNoMu130_PFMHTNoMu130_IDTight_;
    bool HLT_PFMETNoMu140_PFMHTNoMu140_IDTight_;
    TBranch *b_HLT_PFMETNoMu140_PFMHTNoMu140_IDTight_;
    bool loaded_HLT_PFMETNoMu140_PFMHTNoMu140_IDTight_;
    bool HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60_;
    TBranch *b_HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60_;
    bool loaded_HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60_;
    bool HLT_PFMETTypeOne110_PFMHT110_IDTight_;
    TBranch *b_HLT_PFMETTypeOne110_PFMHT110_IDTight_;
    bool loaded_HLT_PFMETTypeOne110_PFMHT110_IDTight_;
    bool HLT_PFMETTypeOne120_PFMHT120_IDTight_;
    TBranch *b_HLT_PFMETTypeOne120_PFMHT120_IDTight_;
    bool loaded_HLT_PFMETTypeOne120_PFMHT120_IDTight_;
    bool HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60_;
    TBranch *b_HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60_;
    bool loaded_HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60_;
    bool HLT_PFMETTypeOne130_PFMHT130_IDTight_;
    TBranch *b_HLT_PFMETTypeOne130_PFMHT130_IDTight_;
    bool loaded_HLT_PFMETTypeOne130_PFMHT130_IDTight_;
    bool HLT_PFMETTypeOne140_PFMHT140_IDTight_;
    TBranch *b_HLT_PFMETTypeOne140_PFMHT140_IDTight_;
    bool loaded_HLT_PFMETTypeOne140_PFMHT140_IDTight_;
    bool HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned_;
    TBranch *b_HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned_;
    bool loaded_HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned_;
    bool HLT_Photon120_;
    TBranch *b_HLT_Photon120_;
    bool loaded_HLT_Photon120_;
    bool HLT_Photon120_R9Id90_HE10_IsoM_;
    TBranch *b_HLT_Photon120_R9Id90_HE10_IsoM_;
    bool loaded_HLT_Photon120_R9Id90_HE10_IsoM_;
    bool HLT_Photon150_;
    TBranch *b_HLT_Photon150_;
    bool loaded_HLT_Photon150_;
    bool HLT_Photon165_R9Id90_HE10_IsoM_;
    TBranch *b_HLT_Photon165_R9Id90_HE10_IsoM_;
    bool loaded_HLT_Photon165_R9Id90_HE10_IsoM_;
    bool HLT_Photon175_;
    TBranch *b_HLT_Photon175_;
    bool loaded_HLT_Photon175_;
    bool HLT_Photon200_;
    TBranch *b_HLT_Photon200_;
    bool loaded_HLT_Photon200_;
    bool HLT_Photon20_HoverELoose_;
    TBranch *b_HLT_Photon20_HoverELoose_;
    bool loaded_HLT_Photon20_HoverELoose_;
    bool HLT_Photon25_;
    TBranch *b_HLT_Photon25_;
    bool loaded_HLT_Photon25_;
    bool HLT_Photon300_NoHE_;
    TBranch *b_HLT_Photon300_NoHE_;
    bool loaded_HLT_Photon300_NoHE_;
    bool HLT_Photon30_HoverELoose_;
    TBranch *b_HLT_Photon30_HoverELoose_;
    bool loaded_HLT_Photon30_HoverELoose_;
    bool HLT_Photon33_;
    TBranch *b_HLT_Photon33_;
    bool loaded_HLT_Photon33_;
    bool HLT_Photon40_HoverELoose_;
    TBranch *b_HLT_Photon40_HoverELoose_;
    bool loaded_HLT_Photon40_HoverELoose_;
    bool HLT_Photon50_;
    TBranch *b_HLT_Photon50_;
    bool loaded_HLT_Photon50_;
    bool HLT_Photon50_HoverELoose_;
    TBranch *b_HLT_Photon50_HoverELoose_;
    bool loaded_HLT_Photon50_HoverELoose_;
    bool HLT_Photon50_R9Id90_HE10_IsoM_;
    TBranch *b_HLT_Photon50_R9Id90_HE10_IsoM_;
    bool loaded_HLT_Photon50_R9Id90_HE10_IsoM_;
    bool HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50_;
    TBranch *b_HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50_;
    bool loaded_HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50_;
    bool HLT_Photon60_HoverELoose_;
    TBranch *b_HLT_Photon60_HoverELoose_;
    bool loaded_HLT_Photon60_HoverELoose_;
    bool HLT_Photon60_R9Id90_CaloIdL_IsoL_;
    TBranch *b_HLT_Photon60_R9Id90_CaloIdL_IsoL_;
    bool loaded_HLT_Photon60_R9Id90_CaloIdL_IsoL_;
    bool HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_;
    TBranch *b_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_;
    bool loaded_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_;
    bool HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15_;
    TBranch *b_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15_;
    bool loaded_HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15_;
    bool HLT_Photon75_;
    TBranch *b_HLT_Photon75_;
    bool loaded_HLT_Photon75_;
    bool HLT_Photon75_R9Id90_HE10_IsoM_;
    TBranch *b_HLT_Photon75_R9Id90_HE10_IsoM_;
    bool loaded_HLT_Photon75_R9Id90_HE10_IsoM_;
    bool HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_;
    TBranch *b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_;
    bool loaded_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_;
    bool HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3_;
    TBranch *b_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3_;
    bool loaded_HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3_;
    bool HLT_Photon90_;
    TBranch *b_HLT_Photon90_;
    bool loaded_HLT_Photon90_;
    bool HLT_Photon90_CaloIdL_PFHT700_;
    TBranch *b_HLT_Photon90_CaloIdL_PFHT700_;
    bool loaded_HLT_Photon90_CaloIdL_PFHT700_;
    bool HLT_Photon90_R9Id90_HE10_IsoM_;
    TBranch *b_HLT_Photon90_R9Id90_HE10_IsoM_;
    bool loaded_HLT_Photon90_R9Id90_HE10_IsoM_;
    bool HLT_Physics_;
    TBranch *b_HLT_Physics_;
    bool loaded_HLT_Physics_;
    bool HLT_Physics_part0_;
    TBranch *b_HLT_Physics_part0_;
    bool loaded_HLT_Physics_part0_;
    bool HLT_Physics_part1_;
    TBranch *b_HLT_Physics_part1_;
    bool loaded_HLT_Physics_part1_;
    bool HLT_Physics_part2_;
    TBranch *b_HLT_Physics_part2_;
    bool loaded_HLT_Physics_part2_;
    bool HLT_Physics_part3_;
    TBranch *b_HLT_Physics_part3_;
    bool loaded_HLT_Physics_part3_;
    bool HLT_Physics_part4_;
    TBranch *b_HLT_Physics_part4_;
    bool loaded_HLT_Physics_part4_;
    bool HLT_Physics_part5_;
    TBranch *b_HLT_Physics_part5_;
    bool loaded_HLT_Physics_part5_;
    bool HLT_Physics_part6_;
    TBranch *b_HLT_Physics_part6_;
    bool loaded_HLT_Physics_part6_;
    bool HLT_Physics_part7_;
    TBranch *b_HLT_Physics_part7_;
    bool loaded_HLT_Physics_part7_;
    bool HLT_QuadPFJet103_88_75_15_;
    TBranch *b_HLT_QuadPFJet103_88_75_15_;
    bool loaded_HLT_QuadPFJet103_88_75_15_;
    bool HLT_QuadPFJet103_88_75_15_BTagCSV_p013_VBF2_;
    TBranch *b_HLT_QuadPFJet103_88_75_15_BTagCSV_p013_VBF2_;
    bool loaded_HLT_QuadPFJet103_88_75_15_BTagCSV_p013_VBF2_;
    bool HLT_QuadPFJet103_88_75_15_DoubleBTagCSV_p013_p08_VBF1_;
    TBranch *b_HLT_QuadPFJet103_88_75_15_DoubleBTagCSV_p013_p08_VBF1_;
    bool loaded_HLT_QuadPFJet103_88_75_15_DoubleBTagCSV_p013_p08_VBF1_;
    bool HLT_QuadPFJet105_88_76_15_;
    TBranch *b_HLT_QuadPFJet105_88_76_15_;
    bool loaded_HLT_QuadPFJet105_88_76_15_;
    bool HLT_QuadPFJet105_88_76_15_BTagCSV_p013_VBF2_;
    TBranch *b_HLT_QuadPFJet105_88_76_15_BTagCSV_p013_VBF2_;
    bool loaded_HLT_QuadPFJet105_88_76_15_BTagCSV_p013_VBF2_;
    bool HLT_QuadPFJet105_90_76_15_DoubleBTagCSV_p013_p08_VBF1_;
    TBranch *b_HLT_QuadPFJet105_90_76_15_DoubleBTagCSV_p013_p08_VBF1_;
    bool loaded_HLT_QuadPFJet105_90_76_15_DoubleBTagCSV_p013_p08_VBF1_;
    bool HLT_QuadPFJet111_90_80_15_;
    TBranch *b_HLT_QuadPFJet111_90_80_15_;
    bool loaded_HLT_QuadPFJet111_90_80_15_;
    bool HLT_QuadPFJet111_90_80_15_BTagCSV_p013_VBF2_;
    TBranch *b_HLT_QuadPFJet111_90_80_15_BTagCSV_p013_VBF2_;
    bool loaded_HLT_QuadPFJet111_90_80_15_BTagCSV_p013_VBF2_;
    bool HLT_QuadPFJet111_90_80_15_DoubleBTagCSV_p013_p08_VBF1_;
    TBranch *b_HLT_QuadPFJet111_90_80_15_DoubleBTagCSV_p013_p08_VBF1_;
    bool loaded_HLT_QuadPFJet111_90_80_15_DoubleBTagCSV_p013_p08_VBF1_;
    bool HLT_QuadPFJet98_83_71_15_;
    TBranch *b_HLT_QuadPFJet98_83_71_15_;
    bool loaded_HLT_QuadPFJet98_83_71_15_;
    bool HLT_QuadPFJet98_83_71_15_BTagCSV_p013_VBF2_;
    TBranch *b_HLT_QuadPFJet98_83_71_15_BTagCSV_p013_VBF2_;
    bool loaded_HLT_QuadPFJet98_83_71_15_BTagCSV_p013_VBF2_;
    bool HLT_QuadPFJet98_83_71_15_DoubleBTagCSV_p013_p08_VBF1_;
    TBranch *b_HLT_QuadPFJet98_83_71_15_DoubleBTagCSV_p013_p08_VBF1_;
    bool loaded_HLT_QuadPFJet98_83_71_15_DoubleBTagCSV_p013_p08_VBF1_;
    bool HLT_Random_;
    TBranch *b_HLT_Random_;
    bool loaded_HLT_Random_;
    bool HLT_Rsq0p35_;
    TBranch *b_HLT_Rsq0p35_;
    bool loaded_HLT_Rsq0p35_;
    bool HLT_Rsq0p40_;
    TBranch *b_HLT_Rsq0p40_;
    bool loaded_HLT_Rsq0p40_;
    bool HLT_RsqMR300_Rsq0p09_MR200_;
    TBranch *b_HLT_RsqMR300_Rsq0p09_MR200_;
    bool loaded_HLT_RsqMR300_Rsq0p09_MR200_;
    bool HLT_RsqMR300_Rsq0p09_MR200_4jet_;
    TBranch *b_HLT_RsqMR300_Rsq0p09_MR200_4jet_;
    bool loaded_HLT_RsqMR300_Rsq0p09_MR200_4jet_;
    bool HLT_RsqMR320_Rsq0p09_MR200_;
    TBranch *b_HLT_RsqMR320_Rsq0p09_MR200_;
    bool loaded_HLT_RsqMR320_Rsq0p09_MR200_;
    bool HLT_RsqMR320_Rsq0p09_MR200_4jet_;
    TBranch *b_HLT_RsqMR320_Rsq0p09_MR200_4jet_;
    bool loaded_HLT_RsqMR320_Rsq0p09_MR200_4jet_;
    bool HLT_SingleJet30_Mu12_SinglePFJet40_;
    TBranch *b_HLT_SingleJet30_Mu12_SinglePFJet40_;
    bool loaded_HLT_SingleJet30_Mu12_SinglePFJet40_;
    bool HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_;
    TBranch *b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_;
    bool loaded_HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_;
    bool HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1_;
    TBranch *b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1_;
    bool loaded_HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1_;
    bool HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_;
    TBranch *b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_;
    bool loaded_HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_;
    bool HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1_;
    TBranch *b_HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1_;
    bool loaded_HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1_;
    bool HLT_TkMu100_;
    TBranch *b_HLT_TkMu100_;
    bool loaded_HLT_TkMu100_;
    bool HLT_Trimuon5_3p5_2_Upsilon_Muon_;
    TBranch *b_HLT_Trimuon5_3p5_2_Upsilon_Muon_;
    bool loaded_HLT_Trimuon5_3p5_2_Upsilon_Muon_;
    bool HLT_TripleJet110_35_35_Mjj650_PFMET110_;
    TBranch *b_HLT_TripleJet110_35_35_Mjj650_PFMET110_;
    bool loaded_HLT_TripleJet110_35_35_Mjj650_PFMET110_;
    bool HLT_TripleJet110_35_35_Mjj650_PFMET120_;
    TBranch *b_HLT_TripleJet110_35_35_Mjj650_PFMET120_;
    bool loaded_HLT_TripleJet110_35_35_Mjj650_PFMET120_;
    bool HLT_TripleJet110_35_35_Mjj650_PFMET130_;
    TBranch *b_HLT_TripleJet110_35_35_Mjj650_PFMET130_;
    bool loaded_HLT_TripleJet110_35_35_Mjj650_PFMET130_;
    bool HLT_TripleMu_10_5_5_DZ_;
    TBranch *b_HLT_TripleMu_10_5_5_DZ_;
    bool loaded_HLT_TripleMu_10_5_5_DZ_;
    bool HLT_TripleMu_12_10_5_;
    TBranch *b_HLT_TripleMu_12_10_5_;
    bool loaded_HLT_TripleMu_12_10_5_;
    bool HLT_TripleMu_5_3_3_Mass3p8to60_DCA_;
    TBranch *b_HLT_TripleMu_5_3_3_Mass3p8to60_DCA_;
    bool loaded_HLT_TripleMu_5_3_3_Mass3p8to60_DCA_;
    bool HLT_TripleMu_5_3_3_Mass3p8to60_DZ_;
    TBranch *b_HLT_TripleMu_5_3_3_Mass3p8to60_DZ_;
    bool loaded_HLT_TripleMu_5_3_3_Mass3p8to60_DZ_;
    bool HLT_TriplePhoton_20_20_20_CaloIdLV2_;
    TBranch *b_HLT_TriplePhoton_20_20_20_CaloIdLV2_;
    bool loaded_HLT_TriplePhoton_20_20_20_CaloIdLV2_;
    bool HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL_;
    TBranch *b_HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL_;
    bool loaded_HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL_;
    bool HLT_TriplePhoton_30_30_10_CaloIdLV2_;
    TBranch *b_HLT_TriplePhoton_30_30_10_CaloIdLV2_;
    bool loaded_HLT_TriplePhoton_30_30_10_CaloIdLV2_;
    bool HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL_;
    TBranch *b_HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL_;
    bool loaded_HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL_;
    bool HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL_;
    TBranch *b_HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL_;
    bool loaded_HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL_;
    bool HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx_;
    TBranch *b_HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx_;
    bool loaded_HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx_;
    bool HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx_;
    TBranch *b_HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx_;
    bool loaded_HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx_;
    bool HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx_;
    TBranch *b_HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx_;
    bool loaded_HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx_;
    bool HLT_UncorrectedJetE30_NoBPTX_;
    TBranch *b_HLT_UncorrectedJetE30_NoBPTX_;
    bool loaded_HLT_UncorrectedJetE30_NoBPTX_;
    bool HLT_UncorrectedJetE30_NoBPTX3BX_;
    TBranch *b_HLT_UncorrectedJetE30_NoBPTX3BX_;
    bool loaded_HLT_UncorrectedJetE30_NoBPTX3BX_;
    bool HLT_UncorrectedJetE60_NoBPTX3BX_;
    TBranch *b_HLT_UncorrectedJetE60_NoBPTX3BX_;
    bool loaded_HLT_UncorrectedJetE60_NoBPTX3BX_;
    bool HLT_UncorrectedJetE70_NoBPTX3BX_;
    TBranch *b_HLT_UncorrectedJetE70_NoBPTX3BX_;
    bool loaded_HLT_UncorrectedJetE70_NoBPTX3BX_;
    bool HLT_VBF_DoubleLooseChargedIsoPFTau20_Trk1_eta2p1_Reg_;
    TBranch *b_HLT_VBF_DoubleLooseChargedIsoPFTau20_Trk1_eta2p1_Reg_;
    bool loaded_HLT_VBF_DoubleLooseChargedIsoPFTau20_Trk1_eta2p1_Reg_;
    bool HLT_VBF_DoubleMediumChargedIsoPFTau20_Trk1_eta2p1_Reg_;
    TBranch *b_HLT_VBF_DoubleMediumChargedIsoPFTau20_Trk1_eta2p1_Reg_;
    bool loaded_HLT_VBF_DoubleMediumChargedIsoPFTau20_Trk1_eta2p1_Reg_;
    bool HLT_VBF_DoubleTightChargedIsoPFTau20_Trk1_eta2p1_Reg_;
    TBranch *b_HLT_VBF_DoubleTightChargedIsoPFTau20_Trk1_eta2p1_Reg_;
    bool loaded_HLT_VBF_DoubleTightChargedIsoPFTau20_Trk1_eta2p1_Reg_;
    bool HLT_ZeroBias_;
    TBranch *b_HLT_ZeroBias_;
    bool loaded_HLT_ZeroBias_;
    bool HLT_ZeroBias_FirstBXAfterTrain_;
    TBranch *b_HLT_ZeroBias_FirstBXAfterTrain_;
    bool loaded_HLT_ZeroBias_FirstBXAfterTrain_;
    bool HLT_ZeroBias_FirstCollisionAfterAbortGap_;
    TBranch *b_HLT_ZeroBias_FirstCollisionAfterAbortGap_;
    bool loaded_HLT_ZeroBias_FirstCollisionAfterAbortGap_;
    bool HLT_ZeroBias_FirstCollisionInTrain_;
    TBranch *b_HLT_ZeroBias_FirstCollisionInTrain_;
    bool loaded_HLT_ZeroBias_FirstCollisionInTrain_;
    bool HLT_ZeroBias_IsolatedBunches_;
    TBranch *b_HLT_ZeroBias_IsolatedBunches_;
    bool loaded_HLT_ZeroBias_IsolatedBunches_;
    bool HLT_ZeroBias_LastCollisionInTrain_;
    TBranch *b_HLT_ZeroBias_LastCollisionInTrain_;
    bool loaded_HLT_ZeroBias_LastCollisionInTrain_;
    bool HLT_ZeroBias_part0_;
    TBranch *b_HLT_ZeroBias_part0_;
    bool loaded_HLT_ZeroBias_part0_;
    bool HLT_ZeroBias_part1_;
    TBranch *b_HLT_ZeroBias_part1_;
    bool loaded_HLT_ZeroBias_part1_;
    bool HLT_ZeroBias_part2_;
    TBranch *b_HLT_ZeroBias_part2_;
    bool loaded_HLT_ZeroBias_part2_;
    bool HLT_ZeroBias_part3_;
    TBranch *b_HLT_ZeroBias_part3_;
    bool loaded_HLT_ZeroBias_part3_;
    bool HLT_ZeroBias_part4_;
    TBranch *b_HLT_ZeroBias_part4_;
    bool loaded_HLT_ZeroBias_part4_;
    bool HLT_ZeroBias_part5_;
    TBranch *b_HLT_ZeroBias_part5_;
    bool loaded_HLT_ZeroBias_part5_;
    bool HLT_ZeroBias_part6_;
    TBranch *b_HLT_ZeroBias_part6_;
    bool loaded_HLT_ZeroBias_part6_;
    bool HLT_ZeroBias_part7_;
    TBranch *b_HLT_ZeroBias_part7_;
    bool loaded_HLT_ZeroBias_part7_;
    bool HLTriggerFinalPath_;
    TBranch *b_HLTriggerFinalPath_;
    bool loaded_HLTriggerFinalPath_;
    bool HLTriggerFirstPath_;
    TBranch *b_HLTriggerFirstPath_;
    bool loaded_HLTriggerFirstPath_;
    float IsoTrack_dxy_[21];
    vector<float> v_IsoTrack_dxy_;
    TBranch *b_IsoTrack_dxy_;
    bool loaded_IsoTrack_dxy_;
    float IsoTrack_dz_[21];
    vector<float> v_IsoTrack_dz_;
    TBranch *b_IsoTrack_dz_;
    bool loaded_IsoTrack_dz_;
    float IsoTrack_eta_[21];
    vector<float> v_IsoTrack_eta_;
    TBranch *b_IsoTrack_eta_;
    bool loaded_IsoTrack_eta_;
    bool IsoTrack_isHighPurityTrack_[21];
    vector<bool> v_IsoTrack_isHighPurityTrack_;
    TBranch *b_IsoTrack_isHighPurityTrack_;
    bool loaded_IsoTrack_isHighPurityTrack_;
    bool IsoTrack_isPFcand_[21];
    vector<bool> v_IsoTrack_isPFcand_;
    TBranch *b_IsoTrack_isPFcand_;
    bool loaded_IsoTrack_isPFcand_;
    float IsoTrack_miniPFRelIso_all_[21];
    vector<float> v_IsoTrack_miniPFRelIso_all_;
    TBranch *b_IsoTrack_miniPFRelIso_all_;
    bool loaded_IsoTrack_miniPFRelIso_all_;
    float IsoTrack_miniPFRelIso_chg_[21];
    vector<float> v_IsoTrack_miniPFRelIso_chg_;
    TBranch *b_IsoTrack_miniPFRelIso_chg_;
    bool loaded_IsoTrack_miniPFRelIso_chg_;
    int IsoTrack_pdgId_[21];
    vector<int> v_IsoTrack_pdgId_;
    TBranch *b_IsoTrack_pdgId_;
    bool loaded_IsoTrack_pdgId_;
    float IsoTrack_pfRelIso03_all_[21];
    vector<float> v_IsoTrack_pfRelIso03_all_;
    TBranch *b_IsoTrack_pfRelIso03_all_;
    bool loaded_IsoTrack_pfRelIso03_all_;
    float IsoTrack_pfRelIso03_chg_[21];
    vector<float> v_IsoTrack_pfRelIso03_chg_;
    TBranch *b_IsoTrack_pfRelIso03_chg_;
    bool loaded_IsoTrack_pfRelIso03_chg_;
    float IsoTrack_phi_[21];
    vector<float> v_IsoTrack_phi_;
    TBranch *b_IsoTrack_phi_;
    bool loaded_IsoTrack_phi_;
    float IsoTrack_pt_[21];
    vector<float> v_IsoTrack_pt_;
    TBranch *b_IsoTrack_pt_;
    bool loaded_IsoTrack_pt_;
    float Jet_area_[126];
    vector<float> v_Jet_area_;
    TBranch *b_Jet_area_;
    bool loaded_Jet_area_;
    float Jet_bReg_[126];
    vector<float> v_Jet_bReg_;
    TBranch *b_Jet_bReg_;
    bool loaded_Jet_bReg_;
    float Jet_btagCMVA_[126];
    vector<float> v_Jet_btagCMVA_;
    TBranch *b_Jet_btagCMVA_;
    bool loaded_Jet_btagCMVA_;
    float Jet_btagCSVV2_[126];
    vector<float> v_Jet_btagCSVV2_;
    TBranch *b_Jet_btagCSVV2_;
    bool loaded_Jet_btagCSVV2_;
    float Jet_btagDeepB_[126];
    vector<float> v_Jet_btagDeepB_;
    TBranch *b_Jet_btagDeepB_;
    bool loaded_Jet_btagDeepB_;
    float Jet_btagDeepC_[126];
    vector<float> v_Jet_btagDeepC_;
    TBranch *b_Jet_btagDeepC_;
    bool loaded_Jet_btagDeepC_;
    float Jet_btagDeepFlavB_[126];
    vector<float> v_Jet_btagDeepFlavB_;
    TBranch *b_Jet_btagDeepFlavB_;
    bool loaded_Jet_btagDeepFlavB_;
    float Jet_chEmEF_[126];
    vector<float> v_Jet_chEmEF_;
    TBranch *b_Jet_chEmEF_;
    bool loaded_Jet_chEmEF_;
    float Jet_chHEF_[126];
    vector<float> v_Jet_chHEF_;
    TBranch *b_Jet_chHEF_;
    bool loaded_Jet_chHEF_;
    UChar_t Jet_cleanmask_[126];
    vector<UChar_t> v_Jet_cleanmask_;
    TBranch *b_Jet_cleanmask_;
    bool loaded_Jet_cleanmask_;
    int Jet_electronIdx1_[126];
    vector<int> v_Jet_electronIdx1_;
    TBranch *b_Jet_electronIdx1_;
    bool loaded_Jet_electronIdx1_;
    int Jet_electronIdx2_[126];
    vector<int> v_Jet_electronIdx2_;
    TBranch *b_Jet_electronIdx2_;
    bool loaded_Jet_electronIdx2_;
    float Jet_eta_[126];
    vector<float> v_Jet_eta_;
    TBranch *b_Jet_eta_;
    bool loaded_Jet_eta_;
    int Jet_genJetIdx_[126];
    vector<int> v_Jet_genJetIdx_;
    TBranch *b_Jet_genJetIdx_;
    bool loaded_Jet_genJetIdx_;
    int Jet_hadronFlavour_[126];
    vector<int> v_Jet_hadronFlavour_;
    TBranch *b_Jet_hadronFlavour_;
    bool loaded_Jet_hadronFlavour_;
    int Jet_jetId_[126];
    vector<int> v_Jet_jetId_;
    TBranch *b_Jet_jetId_;
    bool loaded_Jet_jetId_;
    float Jet_mass_[126];
    vector<float> v_Jet_mass_;
    TBranch *b_Jet_mass_;
    bool loaded_Jet_mass_;
    int Jet_muonIdx1_[126];
    vector<int> v_Jet_muonIdx1_;
    TBranch *b_Jet_muonIdx1_;
    bool loaded_Jet_muonIdx1_;
    int Jet_muonIdx2_[126];
    vector<int> v_Jet_muonIdx2_;
    TBranch *b_Jet_muonIdx2_;
    bool loaded_Jet_muonIdx2_;
    int Jet_nConstituents_[126];
    vector<int> v_Jet_nConstituents_;
    TBranch *b_Jet_nConstituents_;
    bool loaded_Jet_nConstituents_;
    int Jet_nElectrons_[126];
    vector<int> v_Jet_nElectrons_;
    TBranch *b_Jet_nElectrons_;
    bool loaded_Jet_nElectrons_;
    int Jet_nMuons_[126];
    vector<int> v_Jet_nMuons_;
    TBranch *b_Jet_nMuons_;
    bool loaded_Jet_nMuons_;
    float Jet_neEmEF_[126];
    vector<float> v_Jet_neEmEF_;
    TBranch *b_Jet_neEmEF_;
    bool loaded_Jet_neEmEF_;
    float Jet_neHEF_[126];
    vector<float> v_Jet_neHEF_;
    TBranch *b_Jet_neHEF_;
    bool loaded_Jet_neHEF_;
    vector<LorentzVector> v_Jet_p4_;
    TBranch *b_Jet_p4_;
    bool loaded_Jet_p4_;
    int Jet_partonFlavour_[126];
    vector<int> v_Jet_partonFlavour_;
    TBranch *b_Jet_partonFlavour_;
    bool loaded_Jet_partonFlavour_;
    float Jet_phi_[126];
    vector<float> v_Jet_phi_;
    TBranch *b_Jet_phi_;
    bool loaded_Jet_phi_;
    float Jet_pt_[126];
    vector<float> v_Jet_pt_;
    TBranch *b_Jet_pt_;
    bool loaded_Jet_pt_;
    int Jet_puId_[126];
    vector<int> v_Jet_puId_;
    TBranch *b_Jet_puId_;
    bool loaded_Jet_puId_;
    float Jet_qgl_[126];
    vector<float> v_Jet_qgl_;
    TBranch *b_Jet_qgl_;
    bool loaded_Jet_qgl_;
    float Jet_rawFactor_[126];
    vector<float> v_Jet_rawFactor_;
    TBranch *b_Jet_rawFactor_;
    bool loaded_Jet_rawFactor_;
    bool L1simulation_step_;
    TBranch *b_L1simulation_step_;
    bool loaded_L1simulation_step_;
    float LHEPart_eta_[30];
    vector<float> v_LHEPart_eta_;
    TBranch *b_LHEPart_eta_;
    bool loaded_LHEPart_eta_;
    float LHEPart_mass_[30];
    vector<float> v_LHEPart_mass_;
    TBranch *b_LHEPart_mass_;
    bool loaded_LHEPart_mass_;
    vector<LorentzVector> v_LHEPart_p4_;
    TBranch *b_LHEPart_p4_;
    bool loaded_LHEPart_p4_;
    int LHEPart_pdgId_[30];
    vector<int> v_LHEPart_pdgId_;
    TBranch *b_LHEPart_pdgId_;
    bool loaded_LHEPart_pdgId_;
    float LHEPart_phi_[30];
    vector<float> v_LHEPart_phi_;
    TBranch *b_LHEPart_phi_;
    bool loaded_LHEPart_phi_;
    float LHEPart_pt_[30];
    vector<float> v_LHEPart_pt_;
    TBranch *b_LHEPart_pt_;
    bool loaded_LHEPart_pt_;
    float LHEPdfWeight_[102];
    vector<float> v_LHEPdfWeight_;
    TBranch *b_LHEPdfWeight_;
    bool loaded_LHEPdfWeight_;
    float LHEScaleWeight_[30];
    vector<float> v_LHEScaleWeight_;
    TBranch *b_LHEScaleWeight_;
    bool loaded_LHEScaleWeight_;
    float LHEWeight_originalXWGTUP_;
    TBranch *b_LHEWeight_originalXWGTUP_;
    bool loaded_LHEWeight_originalXWGTUP_;
    float LHE_HT_;
    TBranch *b_LHE_HT_;
    bool loaded_LHE_HT_;
    float LHE_HTIncoming_;
    TBranch *b_LHE_HTIncoming_;
    bool loaded_LHE_HTIncoming_;
    UChar_t LHE_Nb_;
    TBranch *b_LHE_Nb_;
    bool loaded_LHE_Nb_;
    UChar_t LHE_Nc_;
    TBranch *b_LHE_Nc_;
    bool loaded_LHE_Nc_;
    UChar_t LHE_Nglu_;
    TBranch *b_LHE_Nglu_;
    bool loaded_LHE_Nglu_;
    UChar_t LHE_Njets_;
    TBranch *b_LHE_Njets_;
    bool loaded_LHE_Njets_;
    UChar_t LHE_NpLO_;
    TBranch *b_LHE_NpLO_;
    bool loaded_LHE_NpLO_;
    UChar_t LHE_NpNLO_;
    TBranch *b_LHE_NpNLO_;
    bool loaded_LHE_NpNLO_;
    UChar_t LHE_Nuds_;
    TBranch *b_LHE_Nuds_;
    bool loaded_LHE_Nuds_;
    float LHE_Vpt_;
    TBranch *b_LHE_Vpt_;
    bool loaded_LHE_Vpt_;
    float MET_MetUnclustEnUpDeltaX_;
    TBranch *b_MET_MetUnclustEnUpDeltaX_;
    bool loaded_MET_MetUnclustEnUpDeltaX_;
    float MET_MetUnclustEnUpDeltaY_;
    TBranch *b_MET_MetUnclustEnUpDeltaY_;
    bool loaded_MET_MetUnclustEnUpDeltaY_;
    float MET_covXX_;
    TBranch *b_MET_covXX_;
    bool loaded_MET_covXX_;
    float MET_covXY_;
    TBranch *b_MET_covXY_;
    bool loaded_MET_covXY_;
    float MET_covYY_;
    TBranch *b_MET_covYY_;
    bool loaded_MET_covYY_;
    float MET_fiducialGenPhi_;
    TBranch *b_MET_fiducialGenPhi_;
    bool loaded_MET_fiducialGenPhi_;
    float MET_fiducialGenPt_;
    TBranch *b_MET_fiducialGenPt_;
    bool loaded_MET_fiducialGenPt_;
    float MET_phi_;
    TBranch *b_MET_phi_;
    bool loaded_MET_phi_;
    float MET_pt_;
    TBranch *b_MET_pt_;
    bool loaded_MET_pt_;
    float MET_significance_;
    TBranch *b_MET_significance_;
    bool loaded_MET_significance_;
    float MET_sumEt_;
    TBranch *b_MET_sumEt_;
    bool loaded_MET_sumEt_;
    int Muon_charge_[24];
    vector<int> v_Muon_charge_;
    TBranch *b_Muon_charge_;
    bool loaded_Muon_charge_;
    UChar_t Muon_cleanmask_[24];
    vector<UChar_t> v_Muon_cleanmask_;
    TBranch *b_Muon_cleanmask_;
    bool loaded_Muon_cleanmask_;
    float Muon_dxy_[24];
    vector<float> v_Muon_dxy_;
    TBranch *b_Muon_dxy_;
    bool loaded_Muon_dxy_;
    float Muon_dxyErr_[24];
    vector<float> v_Muon_dxyErr_;
    TBranch *b_Muon_dxyErr_;
    bool loaded_Muon_dxyErr_;
    float Muon_dz_[24];
    vector<float> v_Muon_dz_;
    TBranch *b_Muon_dz_;
    bool loaded_Muon_dz_;
    float Muon_dzErr_[24];
    vector<float> v_Muon_dzErr_;
    TBranch *b_Muon_dzErr_;
    bool loaded_Muon_dzErr_;
    float Muon_eta_[24];
    vector<float> v_Muon_eta_;
    TBranch *b_Muon_eta_;
    bool loaded_Muon_eta_;
    UChar_t Muon_genPartFlav_[24];
    vector<UChar_t> v_Muon_genPartFlav_;
    TBranch *b_Muon_genPartFlav_;
    bool loaded_Muon_genPartFlav_;
    int Muon_genPartIdx_[24];
    vector<int> v_Muon_genPartIdx_;
    TBranch *b_Muon_genPartIdx_;
    bool loaded_Muon_genPartIdx_;
    UChar_t Muon_highPtId_[24];
    vector<UChar_t> v_Muon_highPtId_;
    TBranch *b_Muon_highPtId_;
    bool loaded_Muon_highPtId_;
    float Muon_ip3d_[24];
    vector<float> v_Muon_ip3d_;
    TBranch *b_Muon_ip3d_;
    bool loaded_Muon_ip3d_;
    bool Muon_isPFcand_[24];
    vector<bool> v_Muon_isPFcand_;
    TBranch *b_Muon_isPFcand_;
    bool loaded_Muon_isPFcand_;
    int Muon_jetIdx_[24];
    vector<int> v_Muon_jetIdx_;
    TBranch *b_Muon_jetIdx_;
    bool loaded_Muon_jetIdx_;
    float Muon_mass_[24];
    vector<float> v_Muon_mass_;
    TBranch *b_Muon_mass_;
    bool loaded_Muon_mass_;
    bool Muon_mediumId_[24];
    vector<bool> v_Muon_mediumId_;
    TBranch *b_Muon_mediumId_;
    bool loaded_Muon_mediumId_;
    float Muon_miniPFRelIso_all_[24];
    vector<float> v_Muon_miniPFRelIso_all_;
    TBranch *b_Muon_miniPFRelIso_all_;
    bool loaded_Muon_miniPFRelIso_all_;
    float Muon_miniPFRelIso_chg_[24];
    vector<float> v_Muon_miniPFRelIso_chg_;
    TBranch *b_Muon_miniPFRelIso_chg_;
    bool loaded_Muon_miniPFRelIso_chg_;
    float Muon_mvaTTH_[24];
    vector<float> v_Muon_mvaTTH_;
    TBranch *b_Muon_mvaTTH_;
    bool loaded_Muon_mvaTTH_;
    int Muon_nStations_[24];
    vector<int> v_Muon_nStations_;
    TBranch *b_Muon_nStations_;
    bool loaded_Muon_nStations_;
    int Muon_nTrackerLayers_[24];
    vector<int> v_Muon_nTrackerLayers_;
    TBranch *b_Muon_nTrackerLayers_;
    bool loaded_Muon_nTrackerLayers_;
    vector<LorentzVector> v_Muon_p4_;
    TBranch *b_Muon_p4_;
    bool loaded_Muon_p4_;
    int Muon_pdgId_[24];
    vector<int> v_Muon_pdgId_;
    TBranch *b_Muon_pdgId_;
    bool loaded_Muon_pdgId_;
    float Muon_pfRelIso03_all_[24];
    vector<float> v_Muon_pfRelIso03_all_;
    TBranch *b_Muon_pfRelIso03_all_;
    bool loaded_Muon_pfRelIso03_all_;
    float Muon_pfRelIso03_chg_[24];
    vector<float> v_Muon_pfRelIso03_chg_;
    TBranch *b_Muon_pfRelIso03_chg_;
    bool loaded_Muon_pfRelIso03_chg_;
    float Muon_pfRelIso04_all_[24];
    vector<float> v_Muon_pfRelIso04_all_;
    TBranch *b_Muon_pfRelIso04_all_;
    bool loaded_Muon_pfRelIso04_all_;
    float Muon_phi_[24];
    vector<float> v_Muon_phi_;
    TBranch *b_Muon_phi_;
    bool loaded_Muon_phi_;
    float Muon_pt_[24];
    vector<float> v_Muon_pt_;
    TBranch *b_Muon_pt_;
    bool loaded_Muon_pt_;
    float Muon_ptErr_[24];
    vector<float> v_Muon_ptErr_;
    TBranch *b_Muon_ptErr_;
    bool loaded_Muon_ptErr_;
    float Muon_segmentComp_[24];
    vector<float> v_Muon_segmentComp_;
    TBranch *b_Muon_segmentComp_;
    bool loaded_Muon_segmentComp_;
    float Muon_sip3d_[24];
    vector<float> v_Muon_sip3d_;
    TBranch *b_Muon_sip3d_;
    bool loaded_Muon_sip3d_;
    bool Muon_softId_[24];
    vector<bool> v_Muon_softId_;
    TBranch *b_Muon_softId_;
    bool loaded_Muon_softId_;
    int Muon_tightCharge_[24];
    vector<int> v_Muon_tightCharge_;
    TBranch *b_Muon_tightCharge_;
    bool loaded_Muon_tightCharge_;
    bool Muon_tightId_[24];
    vector<bool> v_Muon_tightId_;
    TBranch *b_Muon_tightId_;
    bool loaded_Muon_tightId_;
    float OtherPV_z_[12];
    vector<float> v_OtherPV_z_;
    TBranch *b_OtherPV_z_;
    bool loaded_OtherPV_z_;
    float PV_chi2_;
    TBranch *b_PV_chi2_;
    bool loaded_PV_chi2_;
    float PV_ndof_;
    TBranch *b_PV_ndof_;
    bool loaded_PV_ndof_;
    int PV_npvs_;
    TBranch *b_PV_npvs_;
    bool loaded_PV_npvs_;
    int PV_npvsGood_;
    TBranch *b_PV_npvsGood_;
    bool loaded_PV_npvsGood_;
    float PV_score_;
    TBranch *b_PV_score_;
    bool loaded_PV_score_;
    float PV_x_;
    TBranch *b_PV_x_;
    bool loaded_PV_x_;
    float PV_y_;
    TBranch *b_PV_y_;
    bool loaded_PV_y_;
    float PV_z_;
    TBranch *b_PV_z_;
    bool loaded_PV_z_;
    int Photon_charge_[39];
    vector<int> v_Photon_charge_;
    TBranch *b_Photon_charge_;
    bool loaded_Photon_charge_;
    UChar_t Photon_cleanmask_[39];
    vector<UChar_t> v_Photon_cleanmask_;
    TBranch *b_Photon_cleanmask_;
    bool loaded_Photon_cleanmask_;
    int Photon_cutBasedBitmap_[39];
    vector<int> v_Photon_cutBasedBitmap_;
    TBranch *b_Photon_cutBasedBitmap_;
    bool loaded_Photon_cutBasedBitmap_;
    float Photon_eCorr_[39];
    vector<float> v_Photon_eCorr_;
    TBranch *b_Photon_eCorr_;
    bool loaded_Photon_eCorr_;
    int Photon_electronIdx_[39];
    vector<int> v_Photon_electronIdx_;
    TBranch *b_Photon_electronIdx_;
    bool loaded_Photon_electronIdx_;
    bool Photon_electronVeto_[39];
    vector<bool> v_Photon_electronVeto_;
    TBranch *b_Photon_electronVeto_;
    bool loaded_Photon_electronVeto_;
    float Photon_energyErr_[39];
    vector<float> v_Photon_energyErr_;
    TBranch *b_Photon_energyErr_;
    bool loaded_Photon_energyErr_;
    float Photon_eta_[39];
    vector<float> v_Photon_eta_;
    TBranch *b_Photon_eta_;
    bool loaded_Photon_eta_;
    UChar_t Photon_genPartFlav_[39];
    vector<UChar_t> v_Photon_genPartFlav_;
    TBranch *b_Photon_genPartFlav_;
    bool loaded_Photon_genPartFlav_;
    int Photon_genPartIdx_[39];
    vector<int> v_Photon_genPartIdx_;
    TBranch *b_Photon_genPartIdx_;
    bool loaded_Photon_genPartIdx_;
    float Photon_hoe_[39];
    vector<float> v_Photon_hoe_;
    TBranch *b_Photon_hoe_;
    bool loaded_Photon_hoe_;
    bool Photon_isScEtaEB_[39];
    vector<bool> v_Photon_isScEtaEB_;
    TBranch *b_Photon_isScEtaEB_;
    bool loaded_Photon_isScEtaEB_;
    bool Photon_isScEtaEE_[39];
    vector<bool> v_Photon_isScEtaEE_;
    TBranch *b_Photon_isScEtaEE_;
    bool loaded_Photon_isScEtaEE_;
    int Photon_jetIdx_[39];
    vector<int> v_Photon_jetIdx_;
    TBranch *b_Photon_jetIdx_;
    bool loaded_Photon_jetIdx_;
    float Photon_mass_[39];
    vector<float> v_Photon_mass_;
    TBranch *b_Photon_mass_;
    bool loaded_Photon_mass_;
    float Photon_mvaID_[39];
    vector<float> v_Photon_mvaID_;
    TBranch *b_Photon_mvaID_;
    bool loaded_Photon_mvaID_;
    bool Photon_mvaID_WP80_[39];
    vector<bool> v_Photon_mvaID_WP80_;
    TBranch *b_Photon_mvaID_WP80_;
    bool loaded_Photon_mvaID_WP80_;
    bool Photon_mvaID_WP90_[39];
    vector<bool> v_Photon_mvaID_WP90_;
    TBranch *b_Photon_mvaID_WP90_;
    bool loaded_Photon_mvaID_WP90_;
    vector<LorentzVector> v_Photon_p4_;
    TBranch *b_Photon_p4_;
    bool loaded_Photon_p4_;
    int Photon_pdgId_[39];
    vector<int> v_Photon_pdgId_;
    TBranch *b_Photon_pdgId_;
    bool loaded_Photon_pdgId_;
    float Photon_pfRelIso03_all_[39];
    vector<float> v_Photon_pfRelIso03_all_;
    TBranch *b_Photon_pfRelIso03_all_;
    bool loaded_Photon_pfRelIso03_all_;
    float Photon_pfRelIso03_chg_[39];
    vector<float> v_Photon_pfRelIso03_chg_;
    TBranch *b_Photon_pfRelIso03_chg_;
    bool loaded_Photon_pfRelIso03_chg_;
    float Photon_phi_[39];
    vector<float> v_Photon_phi_;
    TBranch *b_Photon_phi_;
    bool loaded_Photon_phi_;
    bool Photon_pixelSeed_[39];
    vector<bool> v_Photon_pixelSeed_;
    TBranch *b_Photon_pixelSeed_;
    bool loaded_Photon_pixelSeed_;
    float Photon_pt_[39];
    vector<float> v_Photon_pt_;
    TBranch *b_Photon_pt_;
    bool loaded_Photon_pt_;
    float Photon_r9_[39];
    vector<float> v_Photon_r9_;
    TBranch *b_Photon_r9_;
    bool loaded_Photon_r9_;
    float Photon_sieie_[39];
    vector<float> v_Photon_sieie_;
    TBranch *b_Photon_sieie_;
    bool loaded_Photon_sieie_;
    int Photon_vidNestedWPBitmap_[39];
    vector<int> v_Photon_vidNestedWPBitmap_;
    TBranch *b_Photon_vidNestedWPBitmap_;
    bool loaded_Photon_vidNestedWPBitmap_;
    int Pileup_nPU_;
    TBranch *b_Pileup_nPU_;
    bool loaded_Pileup_nPU_;
    float Pileup_nTrueInt_;
    TBranch *b_Pileup_nTrueInt_;
    bool loaded_Pileup_nTrueInt_;
    int Pileup_sumEOOT_;
    TBranch *b_Pileup_sumEOOT_;
    bool loaded_Pileup_sumEOOT_;
    int Pileup_sumLOOT_;
    TBranch *b_Pileup_sumLOOT_;
    bool loaded_Pileup_sumLOOT_;
    float PuppiMET_phi_;
    TBranch *b_PuppiMET_phi_;
    bool loaded_PuppiMET_phi_;
    float PuppiMET_pt_;
    TBranch *b_PuppiMET_pt_;
    bool loaded_PuppiMET_pt_;
    float PuppiMET_sumEt_;
    TBranch *b_PuppiMET_sumEt_;
    bool loaded_PuppiMET_sumEt_;
    float RawMET_phi_;
    TBranch *b_RawMET_phi_;
    bool loaded_RawMET_phi_;
    float RawMET_pt_;
    TBranch *b_RawMET_pt_;
    bool loaded_RawMET_pt_;
    float RawMET_sumEt_;
    TBranch *b_RawMET_sumEt_;
    bool loaded_RawMET_sumEt_;
    float SV_chi2_[60];
    vector<float> v_SV_chi2_;
    TBranch *b_SV_chi2_;
    bool loaded_SV_chi2_;
    float SV_dlen_[60];
    vector<float> v_SV_dlen_;
    TBranch *b_SV_dlen_;
    bool loaded_SV_dlen_;
    float SV_dlenSig_[60];
    vector<float> v_SV_dlenSig_;
    TBranch *b_SV_dlenSig_;
    bool loaded_SV_dlenSig_;
    float SV_eta_[60];
    vector<float> v_SV_eta_;
    TBranch *b_SV_eta_;
    bool loaded_SV_eta_;
    float SV_mass_[60];
    vector<float> v_SV_mass_;
    TBranch *b_SV_mass_;
    bool loaded_SV_mass_;
    float SV_ndof_[60];
    vector<float> v_SV_ndof_;
    TBranch *b_SV_ndof_;
    bool loaded_SV_ndof_;
    vector<LorentzVector> v_SV_p4_;
    TBranch *b_SV_p4_;
    bool loaded_SV_p4_;
    float SV_pAngle_[60];
    vector<float> v_SV_pAngle_;
    TBranch *b_SV_pAngle_;
    bool loaded_SV_pAngle_;
    float SV_phi_[60];
    vector<float> v_SV_phi_;
    TBranch *b_SV_phi_;
    bool loaded_SV_phi_;
    float SV_pt_[60];
    vector<float> v_SV_pt_;
    TBranch *b_SV_pt_;
    bool loaded_SV_pt_;
    float SV_x_[60];
    vector<float> v_SV_x_;
    TBranch *b_SV_x_;
    bool loaded_SV_x_;
    float SV_y_[60];
    vector<float> v_SV_y_;
    TBranch *b_SV_y_;
    bool loaded_SV_y_;
    float SV_z_[60];
    vector<float> v_SV_z_;
    TBranch *b_SV_z_;
    bool loaded_SV_z_;
    float SoftActivityJetHT_;
    TBranch *b_SoftActivityJetHT_;
    bool loaded_SoftActivityJetHT_;
    float SoftActivityJetHT10_;
    TBranch *b_SoftActivityJetHT10_;
    bool loaded_SoftActivityJetHT10_;
    float SoftActivityJetHT2_;
    TBranch *b_SoftActivityJetHT2_;
    bool loaded_SoftActivityJetHT2_;
    float SoftActivityJetHT5_;
    TBranch *b_SoftActivityJetHT5_;
    bool loaded_SoftActivityJetHT5_;
    int SoftActivityJetNjets10_;
    TBranch *b_SoftActivityJetNjets10_;
    bool loaded_SoftActivityJetNjets10_;
    int SoftActivityJetNjets2_;
    TBranch *b_SoftActivityJetNjets2_;
    bool loaded_SoftActivityJetNjets2_;
    int SoftActivityJetNjets5_;
    TBranch *b_SoftActivityJetNjets5_;
    bool loaded_SoftActivityJetNjets5_;
    float SoftActivityJet_eta_[21];
    vector<float> v_SoftActivityJet_eta_;
    TBranch *b_SoftActivityJet_eta_;
    bool loaded_SoftActivityJet_eta_;
    float SoftActivityJet_phi_[21];
    vector<float> v_SoftActivityJet_phi_;
    TBranch *b_SoftActivityJet_phi_;
    bool loaded_SoftActivityJet_phi_;
    float SoftActivityJet_pt_[21];
    vector<float> v_SoftActivityJet_pt_;
    TBranch *b_SoftActivityJet_pt_;
    bool loaded_SoftActivityJet_pt_;
    float SubGenJetAK8_eta_[51];
    vector<float> v_SubGenJetAK8_eta_;
    TBranch *b_SubGenJetAK8_eta_;
    bool loaded_SubGenJetAK8_eta_;
    float SubGenJetAK8_mass_[51];
    vector<float> v_SubGenJetAK8_mass_;
    TBranch *b_SubGenJetAK8_mass_;
    bool loaded_SubGenJetAK8_mass_;
    vector<LorentzVector> v_SubGenJetAK8_p4_;
    TBranch *b_SubGenJetAK8_p4_;
    bool loaded_SubGenJetAK8_p4_;
    float SubGenJetAK8_phi_[51];
    vector<float> v_SubGenJetAK8_phi_;
    TBranch *b_SubGenJetAK8_phi_;
    bool loaded_SubGenJetAK8_phi_;
    float SubGenJetAK8_pt_[51];
    vector<float> v_SubGenJetAK8_pt_;
    TBranch *b_SubGenJetAK8_pt_;
    bool loaded_SubGenJetAK8_pt_;
    float SubJet_btagCMVA_[39];
    vector<float> v_SubJet_btagCMVA_;
    TBranch *b_SubJet_btagCMVA_;
    bool loaded_SubJet_btagCMVA_;
    float SubJet_btagCSVV2_[39];
    vector<float> v_SubJet_btagCSVV2_;
    TBranch *b_SubJet_btagCSVV2_;
    bool loaded_SubJet_btagCSVV2_;
    float SubJet_btagDeepB_[39];
    vector<float> v_SubJet_btagDeepB_;
    TBranch *b_SubJet_btagDeepB_;
    bool loaded_SubJet_btagDeepB_;
    float SubJet_eta_[39];
    vector<float> v_SubJet_eta_;
    TBranch *b_SubJet_eta_;
    bool loaded_SubJet_eta_;
    float SubJet_mass_[39];
    vector<float> v_SubJet_mass_;
    TBranch *b_SubJet_mass_;
    bool loaded_SubJet_mass_;
    float SubJet_n2b1_[39];
    vector<float> v_SubJet_n2b1_;
    TBranch *b_SubJet_n2b1_;
    bool loaded_SubJet_n2b1_;
    float SubJet_n3b1_[39];
    vector<float> v_SubJet_n3b1_;
    TBranch *b_SubJet_n3b1_;
    bool loaded_SubJet_n3b1_;
    vector<LorentzVector> v_SubJet_p4_;
    TBranch *b_SubJet_p4_;
    bool loaded_SubJet_p4_;
    float SubJet_phi_[39];
    vector<float> v_SubJet_phi_;
    TBranch *b_SubJet_phi_;
    bool loaded_SubJet_phi_;
    float SubJet_pt_[39];
    vector<float> v_SubJet_pt_;
    TBranch *b_SubJet_pt_;
    bool loaded_SubJet_pt_;
    float SubJet_tau1_[39];
    vector<float> v_SubJet_tau1_;
    TBranch *b_SubJet_tau1_;
    bool loaded_SubJet_tau1_;
    float SubJet_tau2_[39];
    vector<float> v_SubJet_tau2_;
    TBranch *b_SubJet_tau2_;
    bool loaded_SubJet_tau2_;
    float SubJet_tau3_[39];
    vector<float> v_SubJet_tau3_;
    TBranch *b_SubJet_tau3_;
    bool loaded_SubJet_tau3_;
    float SubJet_tau4_[39];
    vector<float> v_SubJet_tau4_;
    TBranch *b_SubJet_tau4_;
    bool loaded_SubJet_tau4_;
    int Tau_charge_[24];
    vector<int> v_Tau_charge_;
    TBranch *b_Tau_charge_;
    bool loaded_Tau_charge_;
    float Tau_chargedIso_[24];
    vector<float> v_Tau_chargedIso_;
    TBranch *b_Tau_chargedIso_;
    bool loaded_Tau_chargedIso_;
    UChar_t Tau_cleanmask_[24];
    vector<UChar_t> v_Tau_cleanmask_;
    TBranch *b_Tau_cleanmask_;
    bool loaded_Tau_cleanmask_;
    int Tau_decayMode_[24];
    vector<int> v_Tau_decayMode_;
    TBranch *b_Tau_decayMode_;
    bool loaded_Tau_decayMode_;
    float Tau_dxy_[24];
    vector<float> v_Tau_dxy_;
    TBranch *b_Tau_dxy_;
    bool loaded_Tau_dxy_;
    float Tau_dz_[24];
    vector<float> v_Tau_dz_;
    TBranch *b_Tau_dz_;
    bool loaded_Tau_dz_;
    float Tau_eta_[24];
    vector<float> v_Tau_eta_;
    TBranch *b_Tau_eta_;
    bool loaded_Tau_eta_;
    UChar_t Tau_genPartFlav_[24];
    vector<UChar_t> v_Tau_genPartFlav_;
    TBranch *b_Tau_genPartFlav_;
    bool loaded_Tau_genPartFlav_;
    int Tau_genPartIdx_[24];
    vector<int> v_Tau_genPartIdx_;
    TBranch *b_Tau_genPartIdx_;
    bool loaded_Tau_genPartIdx_;
    UChar_t Tau_idAntiEle_[24];
    vector<UChar_t> v_Tau_idAntiEle_;
    TBranch *b_Tau_idAntiEle_;
    bool loaded_Tau_idAntiEle_;
    UChar_t Tau_idAntiMu_[24];
    vector<UChar_t> v_Tau_idAntiMu_;
    TBranch *b_Tau_idAntiMu_;
    bool loaded_Tau_idAntiMu_;
    bool Tau_idDecayMode_[24];
    vector<bool> v_Tau_idDecayMode_;
    TBranch *b_Tau_idDecayMode_;
    bool loaded_Tau_idDecayMode_;
    bool Tau_idDecayModeNewDMs_[24];
    vector<bool> v_Tau_idDecayModeNewDMs_;
    TBranch *b_Tau_idDecayModeNewDMs_;
    bool loaded_Tau_idDecayModeNewDMs_;
    UChar_t Tau_idMVAnewDM2017v2_[24];
    vector<UChar_t> v_Tau_idMVAnewDM2017v2_;
    TBranch *b_Tau_idMVAnewDM2017v2_;
    bool loaded_Tau_idMVAnewDM2017v2_;
    UChar_t Tau_idMVAoldDM_[24];
    vector<UChar_t> v_Tau_idMVAoldDM_;
    TBranch *b_Tau_idMVAoldDM_;
    bool loaded_Tau_idMVAoldDM_;
    UChar_t Tau_idMVAoldDM2017v1_[24];
    vector<UChar_t> v_Tau_idMVAoldDM2017v1_;
    TBranch *b_Tau_idMVAoldDM2017v1_;
    bool loaded_Tau_idMVAoldDM2017v1_;
    UChar_t Tau_idMVAoldDM2017v2_[24];
    vector<UChar_t> v_Tau_idMVAoldDM2017v2_;
    TBranch *b_Tau_idMVAoldDM2017v2_;
    bool loaded_Tau_idMVAoldDM2017v2_;
    UChar_t Tau_idMVAoldDMdR032017v2_[24];
    vector<UChar_t> v_Tau_idMVAoldDMdR032017v2_;
    TBranch *b_Tau_idMVAoldDMdR032017v2_;
    bool loaded_Tau_idMVAoldDMdR032017v2_;
    int Tau_jetIdx_[24];
    vector<int> v_Tau_jetIdx_;
    TBranch *b_Tau_jetIdx_;
    bool loaded_Tau_jetIdx_;
    float Tau_leadTkDeltaEta_[24];
    vector<float> v_Tau_leadTkDeltaEta_;
    TBranch *b_Tau_leadTkDeltaEta_;
    bool loaded_Tau_leadTkDeltaEta_;
    float Tau_leadTkDeltaPhi_[24];
    vector<float> v_Tau_leadTkDeltaPhi_;
    TBranch *b_Tau_leadTkDeltaPhi_;
    bool loaded_Tau_leadTkDeltaPhi_;
    float Tau_leadTkPtOverTauPt_[24];
    vector<float> v_Tau_leadTkPtOverTauPt_;
    TBranch *b_Tau_leadTkPtOverTauPt_;
    bool loaded_Tau_leadTkPtOverTauPt_;
    float Tau_mass_[24];
    vector<float> v_Tau_mass_;
    TBranch *b_Tau_mass_;
    bool loaded_Tau_mass_;
    float Tau_neutralIso_[24];
    vector<float> v_Tau_neutralIso_;
    TBranch *b_Tau_neutralIso_;
    bool loaded_Tau_neutralIso_;
    vector<LorentzVector> v_Tau_p4_;
    TBranch *b_Tau_p4_;
    bool loaded_Tau_p4_;
    float Tau_phi_[24];
    vector<float> v_Tau_phi_;
    TBranch *b_Tau_phi_;
    bool loaded_Tau_phi_;
    float Tau_photonsOutsideSignalCone_[24];
    vector<float> v_Tau_photonsOutsideSignalCone_;
    TBranch *b_Tau_photonsOutsideSignalCone_;
    bool loaded_Tau_photonsOutsideSignalCone_;
    float Tau_pt_[24];
    vector<float> v_Tau_pt_;
    TBranch *b_Tau_pt_;
    bool loaded_Tau_pt_;
    float Tau_puCorr_[24];
    vector<float> v_Tau_puCorr_;
    TBranch *b_Tau_puCorr_;
    bool loaded_Tau_puCorr_;
    float Tau_rawAntiEle_[24];
    vector<float> v_Tau_rawAntiEle_;
    TBranch *b_Tau_rawAntiEle_;
    bool loaded_Tau_rawAntiEle_;
    int Tau_rawAntiEleCat_[24];
    vector<int> v_Tau_rawAntiEleCat_;
    TBranch *b_Tau_rawAntiEleCat_;
    bool loaded_Tau_rawAntiEleCat_;
    float Tau_rawIso_[24];
    vector<float> v_Tau_rawIso_;
    TBranch *b_Tau_rawIso_;
    bool loaded_Tau_rawIso_;
    float Tau_rawIsodR03_[24];
    vector<float> v_Tau_rawIsodR03_;
    TBranch *b_Tau_rawIsodR03_;
    bool loaded_Tau_rawIsodR03_;
    float Tau_rawMVAnewDM2017v2_[24];
    vector<float> v_Tau_rawMVAnewDM2017v2_;
    TBranch *b_Tau_rawMVAnewDM2017v2_;
    bool loaded_Tau_rawMVAnewDM2017v2_;
    float Tau_rawMVAoldDM_[24];
    vector<float> v_Tau_rawMVAoldDM_;
    TBranch *b_Tau_rawMVAoldDM_;
    bool loaded_Tau_rawMVAoldDM_;
    float Tau_rawMVAoldDM2017v1_[24];
    vector<float> v_Tau_rawMVAoldDM2017v1_;
    TBranch *b_Tau_rawMVAoldDM2017v1_;
    bool loaded_Tau_rawMVAoldDM2017v1_;
    float Tau_rawMVAoldDM2017v2_[24];
    vector<float> v_Tau_rawMVAoldDM2017v2_;
    TBranch *b_Tau_rawMVAoldDM2017v2_;
    bool loaded_Tau_rawMVAoldDM2017v2_;
    float Tau_rawMVAoldDMdR032017v2_[24];
    vector<float> v_Tau_rawMVAoldDMdR032017v2_;
    TBranch *b_Tau_rawMVAoldDMdR032017v2_;
    bool loaded_Tau_rawMVAoldDMdR032017v2_;
    float TkMET_phi_;
    TBranch *b_TkMET_phi_;
    bool loaded_TkMET_phi_;
    float TkMET_pt_;
    TBranch *b_TkMET_pt_;
    bool loaded_TkMET_pt_;
    float TkMET_sumEt_;
    TBranch *b_TkMET_sumEt_;
    bool loaded_TkMET_sumEt_;
    float TrigObj_eta_[183];
    vector<float> v_TrigObj_eta_;
    TBranch *b_TrigObj_eta_;
    bool loaded_TrigObj_eta_;
    int TrigObj_filterBits_[183];
    vector<int> v_TrigObj_filterBits_;
    TBranch *b_TrigObj_filterBits_;
    bool loaded_TrigObj_filterBits_;
    int TrigObj_id_[183];
    vector<int> v_TrigObj_id_;
    TBranch *b_TrigObj_id_;
    bool loaded_TrigObj_id_;
    int TrigObj_l1charge_[183];
    vector<int> v_TrigObj_l1charge_;
    TBranch *b_TrigObj_l1charge_;
    bool loaded_TrigObj_l1charge_;
    int TrigObj_l1iso_[183];
    vector<int> v_TrigObj_l1iso_;
    TBranch *b_TrigObj_l1iso_;
    bool loaded_TrigObj_l1iso_;
    float TrigObj_l1pt_[183];
    vector<float> v_TrigObj_l1pt_;
    TBranch *b_TrigObj_l1pt_;
    bool loaded_TrigObj_l1pt_;
    float TrigObj_l1pt_2_[183];
    vector<float> v_TrigObj_l1pt_2_;
    TBranch *b_TrigObj_l1pt_2_;
    bool loaded_TrigObj_l1pt_2_;
    float TrigObj_l2pt_[183];
    vector<float> v_TrigObj_l2pt_;
    TBranch *b_TrigObj_l2pt_;
    bool loaded_TrigObj_l2pt_;
    float TrigObj_phi_[183];
    vector<float> v_TrigObj_phi_;
    TBranch *b_TrigObj_phi_;
    bool loaded_TrigObj_phi_;
    float TrigObj_pt_[183];
    vector<float> v_TrigObj_pt_;
    TBranch *b_TrigObj_pt_;
    bool loaded_TrigObj_pt_;
    ULong64_t event_;
    TBranch *b_event_;
    bool loaded_event_;
    float fixedGridRhoFastjetAll_;
    TBranch *b_fixedGridRhoFastjetAll_;
    bool loaded_fixedGridRhoFastjetAll_;
    float fixedGridRhoFastjetCentralCalo_;
    TBranch *b_fixedGridRhoFastjetCentralCalo_;
    bool loaded_fixedGridRhoFastjetCentralCalo_;
    float fixedGridRhoFastjetCentralNeutral_;
    TBranch *b_fixedGridRhoFastjetCentralNeutral_;
    bool loaded_fixedGridRhoFastjetCentralNeutral_;
    int genTtbarId_;
    TBranch *b_genTtbarId_;
    bool loaded_genTtbarId_;
    float genWeight_;
    TBranch *b_genWeight_;
    bool loaded_genWeight_;
    UInt_t luminosityBlock_;
    TBranch *b_luminosityBlock_;
    bool loaded_luminosityBlock_;
    UInt_t nElectron_;
    TBranch *b_nElectron_;
    bool loaded_nElectron_;
    UInt_t nFatJet_;
    TBranch *b_nFatJet_;
    bool loaded_nFatJet_;
    UInt_t nGenDressedLepton_;
    TBranch *b_nGenDressedLepton_;
    bool loaded_nGenDressedLepton_;
    UInt_t nGenJet_;
    TBranch *b_nGenJet_;
    bool loaded_nGenJet_;
    UInt_t nGenJetAK8_;
    TBranch *b_nGenJetAK8_;
    bool loaded_nGenJetAK8_;
    UInt_t nGenPart_;
    TBranch *b_nGenPart_;
    bool loaded_nGenPart_;
    UInt_t nGenVisTau_;
    TBranch *b_nGenVisTau_;
    bool loaded_nGenVisTau_;
    UInt_t nIsoTrack_;
    TBranch *b_nIsoTrack_;
    bool loaded_nIsoTrack_;
    UInt_t nJet_;
    TBranch *b_nJet_;
    bool loaded_nJet_;
    UInt_t nLHEPart_;
    TBranch *b_nLHEPart_;
    bool loaded_nLHEPart_;
    UInt_t nLHEPdfWeight_;
    TBranch *b_nLHEPdfWeight_;
    bool loaded_nLHEPdfWeight_;
    UInt_t nLHEScaleWeight_;
    TBranch *b_nLHEScaleWeight_;
    bool loaded_nLHEScaleWeight_;
    UInt_t nMuon_;
    TBranch *b_nMuon_;
    bool loaded_nMuon_;
    UInt_t nOtherPV_;
    TBranch *b_nOtherPV_;
    bool loaded_nOtherPV_;
    UInt_t nPhoton_;
    TBranch *b_nPhoton_;
    bool loaded_nPhoton_;
    UInt_t nSV_;
    TBranch *b_nSV_;
    bool loaded_nSV_;
    UInt_t nSoftActivityJet_;
    TBranch *b_nSoftActivityJet_;
    bool loaded_nSoftActivityJet_;
    UInt_t nSubGenJetAK8_;
    TBranch *b_nSubGenJetAK8_;
    bool loaded_nSubGenJetAK8_;
    UInt_t nSubJet_;
    TBranch *b_nSubJet_;
    bool loaded_nSubJet_;
    UInt_t nTau_;
    TBranch *b_nTau_;
    bool loaded_nTau_;
    UInt_t nTrigObj_;
    TBranch *b_nTrigObj_;
    bool loaded_nTrigObj_;
    UInt_t run_;
    TBranch *b_run_;
    bool loaded_run_;
public:
    void Init(TTree *tree);
    void GetEntry(unsigned int idx);
    const float &CaloMET_phi();
    const float &CaloMET_pt();
    const float &CaloMET_sumEt();
    const vector<int> &Electron_charge();
    const vector<UChar_t> &Electron_cleanmask();
    const vector<bool> &Electron_convVeto();
    const vector<int> &Electron_cutBased();
    const vector<bool> &Electron_cutBased_HEEP();
    const vector<float> &Electron_deltaEtaSC();
    const vector<float> &Electron_dr03EcalRecHitSumEt();
    const vector<float> &Electron_dr03HcalDepth1TowerSumEt();
    const vector<float> &Electron_dr03TkSumPt();
    const vector<float> &Electron_dxy();
    const vector<float> &Electron_dxyErr();
    const vector<float> &Electron_dz();
    const vector<float> &Electron_dzErr();
    const vector<float> &Electron_eCorr();
    const vector<float> &Electron_eInvMinusPInv();
    const vector<float> &Electron_energyErr();
    const vector<float> &Electron_eta();
    const vector<UChar_t> &Electron_genPartFlav();
    const vector<int> &Electron_genPartIdx();
    const vector<float> &Electron_hoe();
    const vector<float> &Electron_ip3d();
    const vector<bool> &Electron_isPFcand();
    const vector<int> &Electron_jetIdx();
    const vector<UChar_t> &Electron_lostHits();
    const vector<float> &Electron_mass();
    const vector<float> &Electron_miniPFRelIso_all();
    const vector<float> &Electron_miniPFRelIso_chg();
    const vector<float> &Electron_mvaFall17Iso();
    const vector<bool> &Electron_mvaFall17Iso_WP80();
    const vector<bool> &Electron_mvaFall17Iso_WP90();
    const vector<bool> &Electron_mvaFall17Iso_WPL();
    const vector<float> &Electron_mvaFall17noIso();
    const vector<bool> &Electron_mvaFall17noIso_WP80();
    const vector<bool> &Electron_mvaFall17noIso_WP90();
    const vector<bool> &Electron_mvaFall17noIso_WPL();
    const vector<float> &Electron_mvaTTH();
    const vector<LorentzVector> &Electron_p4();
    const vector<int> &Electron_pdgId();
    const vector<float> &Electron_pfRelIso03_all();
    const vector<float> &Electron_pfRelIso03_chg();
    const vector<float> &Electron_phi();
    const vector<int> &Electron_photonIdx();
    const vector<float> &Electron_pt();
    const vector<float> &Electron_r9();
    const vector<float> &Electron_sieie();
    const vector<float> &Electron_sip3d();
    const vector<int> &Electron_tightCharge();
    const vector<int> &Electron_vidNestedWPBitmap();
    const vector<float> &FatJet_area();
    const vector<float> &FatJet_btagCMVA();
    const vector<float> &FatJet_btagCSVV2();
    const vector<float> &FatJet_btagDeepB();
    const vector<float> &FatJet_btagHbb();
    const vector<float> &FatJet_eta();
    const vector<int> &FatJet_jetId();
    const vector<float> &FatJet_mass();
    const vector<float> &FatJet_msoftdrop();
    const vector<float> &FatJet_n2b1();
    const vector<float> &FatJet_n3b1();
    const vector<LorentzVector> &FatJet_p4();
    const vector<float> &FatJet_phi();
    const vector<float> &FatJet_pt();
    const vector<int> &FatJet_subJetIdx1();
    const vector<int> &FatJet_subJetIdx2();
    const vector<float> &FatJet_tau1();
    const vector<float> &FatJet_tau2();
    const vector<float> &FatJet_tau3();
    const vector<float> &FatJet_tau4();
    const bool &Flag_BadChargedCandidateFilter();
    const bool &Flag_BadChargedCandidateSummer16Filter();
    const bool &Flag_BadPFMuonFilter();
    const bool &Flag_BadPFMuonSummer16Filter();
    const bool &Flag_CSCTightHalo2015Filter();
    const bool &Flag_CSCTightHaloFilter();
    const bool &Flag_CSCTightHaloTrkMuUnvetoFilter();
    const bool &Flag_EcalDeadCellBoundaryEnergyFilter();
    const bool &Flag_EcalDeadCellTriggerPrimitiveFilter();
    const bool &Flag_HBHENoiseFilter();
    const bool &Flag_HBHENoiseIsoFilter();
    const bool &Flag_HcalStripHaloFilter();
    const bool &Flag_METFilters();
    const bool &Flag_chargedHadronTrackResolutionFilter();
    const bool &Flag_ecalBadCalibFilter();
    const bool &Flag_ecalLaserCorrFilter();
    const bool &Flag_eeBadScFilter();
    const bool &Flag_globalSuperTightHalo2016Filter();
    const bool &Flag_globalTightHalo2016Filter();
    const bool &Flag_goodVertices();
    const bool &Flag_hcalLaserEventFilter();
    const bool &Flag_muonBadTrackFilter();
    const bool &Flag_trkPOGFilters();
    const bool &Flag_trkPOG_logErrorTooManyClusters();
    const bool &Flag_trkPOG_manystripclus53X();
    const bool &Flag_trkPOG_toomanystripclus53X();
    const vector<float> &GenDressedLepton_eta();
    const vector<float> &GenDressedLepton_mass();
    const vector<LorentzVector> &GenDressedLepton_p4();
    const vector<int> &GenDressedLepton_pdgId();
    const vector<float> &GenDressedLepton_phi();
    const vector<float> &GenDressedLepton_pt();
    const vector<float> &GenJetAK8_eta();
    const vector<UChar_t> &GenJetAK8_hadronFlavour();
    const vector<float> &GenJetAK8_mass();
    const vector<LorentzVector> &GenJetAK8_p4();
    const vector<int> &GenJetAK8_partonFlavour();
    const vector<float> &GenJetAK8_phi();
    const vector<float> &GenJetAK8_pt();
    const vector<float> &GenJet_eta();
    const vector<UChar_t> &GenJet_hadronFlavour();
    const vector<float> &GenJet_mass();
    const vector<LorentzVector> &GenJet_p4();
    const vector<int> &GenJet_partonFlavour();
    const vector<float> &GenJet_phi();
    const vector<float> &GenJet_pt();
    const float &GenMET_phi();
    const float &GenMET_pt();
    const vector<float> &GenPart_eta();
    const vector<int> &GenPart_genPartIdxMother();
    const vector<float> &GenPart_mass();
    const vector<LorentzVector> &GenPart_p4();
    const vector<int> &GenPart_pdgId();
    const vector<float> &GenPart_phi();
    const vector<float> &GenPart_pt();
    const vector<int> &GenPart_status();
    const vector<int> &GenPart_statusFlags();
    const vector<int> &GenVisTau_charge();
    const vector<float> &GenVisTau_eta();
    const vector<int> &GenVisTau_genPartIdxMother();
    const vector<float> &GenVisTau_mass();
    const vector<LorentzVector> &GenVisTau_p4();
    const vector<float> &GenVisTau_phi();
    const vector<float> &GenVisTau_pt();
    const vector<int> &GenVisTau_status();
    const float &Generator_binvar();
    const int &Generator_id1();
    const int &Generator_id2();
    const float &Generator_scalePDF();
    const float &Generator_weight();
    const float &Generator_x1();
    const float &Generator_x2();
    const float &Generator_xpdf1();
    const float &Generator_xpdf2();
    const bool &HLT_AK4CaloJet100();
    const bool &HLT_AK4CaloJet120();
    const bool &HLT_AK4CaloJet30();
    const bool &HLT_AK4CaloJet40();
    const bool &HLT_AK4CaloJet50();
    const bool &HLT_AK4CaloJet80();
    const bool &HLT_AK4PFJet100();
    const bool &HLT_AK4PFJet120();
    const bool &HLT_AK4PFJet30();
    const bool &HLT_AK4PFJet50();
    const bool &HLT_AK4PFJet80();
    const bool &HLT_AK8PFHT750_TrimMass50();
    const bool &HLT_AK8PFHT800_TrimMass50();
    const bool &HLT_AK8PFHT850_TrimMass50();
    const bool &HLT_AK8PFHT900_TrimMass50();
    const bool &HLT_AK8PFJet140();
    const bool &HLT_AK8PFJet200();
    const bool &HLT_AK8PFJet260();
    const bool &HLT_AK8PFJet320();
    const bool &HLT_AK8PFJet330_PFAK8BTagCSV_p1();
    const bool &HLT_AK8PFJet330_PFAK8BTagCSV_p17();
    const bool &HLT_AK8PFJet360_TrimMass30();
    const bool &HLT_AK8PFJet380_TrimMass30();
    const bool &HLT_AK8PFJet40();
    const bool &HLT_AK8PFJet400();
    const bool &HLT_AK8PFJet400_TrimMass30();
    const bool &HLT_AK8PFJet420_TrimMass30();
    const bool &HLT_AK8PFJet450();
    const bool &HLT_AK8PFJet500();
    const bool &HLT_AK8PFJet550();
    const bool &HLT_AK8PFJet60();
    const bool &HLT_AK8PFJet80();
    const bool &HLT_AK8PFJetFwd140();
    const bool &HLT_AK8PFJetFwd200();
    const bool &HLT_AK8PFJetFwd260();
    const bool &HLT_AK8PFJetFwd320();
    const bool &HLT_AK8PFJetFwd40();
    const bool &HLT_AK8PFJetFwd400();
    const bool &HLT_AK8PFJetFwd450();
    const bool &HLT_AK8PFJetFwd500();
    const bool &HLT_AK8PFJetFwd60();
    const bool &HLT_AK8PFJetFwd80();
    const bool &HLT_BTagMu_AK4DiJet110_Mu5();
    const bool &HLT_BTagMu_AK4DiJet170_Mu5();
    const bool &HLT_BTagMu_AK4DiJet20_Mu5();
    const bool &HLT_BTagMu_AK4DiJet40_Mu5();
    const bool &HLT_BTagMu_AK4DiJet70_Mu5();
    const bool &HLT_BTagMu_AK4Jet300_Mu5();
    const bool &HLT_BTagMu_AK8DiJet170_Mu5();
    const bool &HLT_BTagMu_AK8Jet300_Mu5();
    const bool &HLT_CaloJet500_NoJetID();
    const bool &HLT_CaloJet550_NoJetID();
    const bool &HLT_CaloMET100_HBHECleaned();
    const bool &HLT_CaloMET100_NotCleaned();
    const bool &HLT_CaloMET110_NotCleaned();
    const bool &HLT_CaloMET250_HBHECleaned();
    const bool &HLT_CaloMET250_NotCleaned();
    const bool &HLT_CaloMET300_HBHECleaned();
    const bool &HLT_CaloMET350_HBHECleaned();
    const bool &HLT_CaloMET70_HBHECleaned();
    const bool &HLT_CaloMET80_HBHECleaned();
    const bool &HLT_CaloMET80_NotCleaned();
    const bool &HLT_CaloMET90_HBHECleaned();
    const bool &HLT_CaloMET90_NotCleaned();
    const bool &HLT_CaloMHT90();
    const bool &HLT_DiEle27_WPTightCaloOnly_L1DoubleEG();
    const bool &HLT_DiJet110_35_Mjj650_PFMET110();
    const bool &HLT_DiJet110_35_Mjj650_PFMET120();
    const bool &HLT_DiJet110_35_Mjj650_PFMET130();
    const bool &HLT_DiMu9_Ele9_CaloIdL_TrackIdL();
    const bool &HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ();
    const bool &HLT_DiPFJet15_FBEta3_NoCaloMatched();
    const bool &HLT_DiPFJet15_NoCaloMatched();
    const bool &HLT_DiPFJet25_FBEta3_NoCaloMatched();
    const bool &HLT_DiPFJet25_NoCaloMatched();
    const bool &HLT_DiPFJetAve100_HFJEC();
    const bool &HLT_DiPFJetAve140();
    const bool &HLT_DiPFJetAve15_HFJEC();
    const bool &HLT_DiPFJetAve160_HFJEC();
    const bool &HLT_DiPFJetAve200();
    const bool &HLT_DiPFJetAve220_HFJEC();
    const bool &HLT_DiPFJetAve25_HFJEC();
    const bool &HLT_DiPFJetAve260();
    const bool &HLT_DiPFJetAve300_HFJEC();
    const bool &HLT_DiPFJetAve320();
    const bool &HLT_DiPFJetAve35_HFJEC();
    const bool &HLT_DiPFJetAve40();
    const bool &HLT_DiPFJetAve400();
    const bool &HLT_DiPFJetAve500();
    const bool &HLT_DiPFJetAve60();
    const bool &HLT_DiPFJetAve60_HFJEC();
    const bool &HLT_DiPFJetAve80();
    const bool &HLT_DiPFJetAve80_HFJEC();
    const bool &HLT_DiSC30_18_EIso_AND_HE_Mass70();
    const bool &HLT_Dimuon0_Jpsi();
    const bool &HLT_Dimuon0_Jpsi3p5_Muon2();
    const bool &HLT_Dimuon0_Jpsi_L1_4R_0er1p5R();
    const bool &HLT_Dimuon0_Jpsi_L1_NoOS();
    const bool &HLT_Dimuon0_Jpsi_NoVertexing();
    const bool &HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R();
    const bool &HLT_Dimuon0_Jpsi_NoVertexing_NoOS();
    const bool &HLT_Dimuon0_LowMass();
    const bool &HLT_Dimuon0_LowMass_L1_0er1p5();
    const bool &HLT_Dimuon0_LowMass_L1_0er1p5R();
    const bool &HLT_Dimuon0_LowMass_L1_4();
    const bool &HLT_Dimuon0_LowMass_L1_4R();
    const bool &HLT_Dimuon0_LowMass_L1_TM530();
    const bool &HLT_Dimuon0_Upsilon_L1_4p5();
    const bool &HLT_Dimuon0_Upsilon_L1_4p5NoOS();
    const bool &HLT_Dimuon0_Upsilon_L1_4p5er2p0();
    const bool &HLT_Dimuon0_Upsilon_L1_4p5er2p0M();
    const bool &HLT_Dimuon0_Upsilon_L1_5();
    const bool &HLT_Dimuon0_Upsilon_L1_5M();
    const bool &HLT_Dimuon0_Upsilon_Muon_L1_TM0();
    const bool &HLT_Dimuon0_Upsilon_Muon_NoL1Mass();
    const bool &HLT_Dimuon0_Upsilon_NoVertexing();
    const bool &HLT_Dimuon10_PsiPrime_Barrel_Seagulls();
    const bool &HLT_Dimuon10_Upsilon_Barrel_Seagulls();
    const bool &HLT_Dimuon12_Upsilon_eta1p5();
    const bool &HLT_Dimuon14_Phi_Barrel_Seagulls();
    const bool &HLT_Dimuon18_PsiPrime();
    const bool &HLT_Dimuon18_PsiPrime_noCorrL1();
    const bool &HLT_Dimuon20_Jpsi_Barrel_Seagulls();
    const bool &HLT_Dimuon24_Phi_noCorrL1();
    const bool &HLT_Dimuon24_Upsilon_noCorrL1();
    const bool &HLT_Dimuon25_Jpsi();
    const bool &HLT_Dimuon25_Jpsi_noCorrL1();
    const bool &HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55();
    const bool &HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55();
    const bool &HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55();
    const bool &HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55();
    const bool &HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55();
    const bool &HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55();
    const bool &HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90();
    const bool &HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95();
    const bool &HLT_DoubleEle24_eta2p1_WPTight_Gsf();
    const bool &HLT_DoubleEle25_CaloIdL_MW();
    const bool &HLT_DoubleEle27_CaloIdL_MW();
    const bool &HLT_DoubleEle33_CaloIdL_MW();
    const bool &HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350();
    const bool &HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350();
    const bool &HLT_DoubleIsoMu20_eta2p1();
    const bool &HLT_DoubleIsoMu24_eta2p1();
    const bool &HLT_DoubleL2Mu50();
    const bool &HLT_DoubleLooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg();
    const bool &HLT_DoubleLooseChargedIsoPFTau35_Trk1_eta2p1_Reg();
    const bool &HLT_DoubleLooseChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg();
    const bool &HLT_DoubleLooseChargedIsoPFTau40_Trk1_eta2p1_Reg();
    const bool &HLT_DoubleMediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg();
    const bool &HLT_DoubleMediumChargedIsoPFTau35_Trk1_eta2p1_Reg();
    const bool &HLT_DoubleMediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg();
    const bool &HLT_DoubleMediumChargedIsoPFTau40_Trk1_eta2p1_Reg();
    const bool &HLT_DoubleMu20_7_Mass0to30_L1_DM4();
    const bool &HLT_DoubleMu20_7_Mass0to30_L1_DM4EG();
    const bool &HLT_DoubleMu20_7_Mass0to30_Photon23();
    const bool &HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi();
    const bool &HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi();
    const bool &HLT_DoubleMu3_DCA_PFMET50_PFMHT60();
    const bool &HLT_DoubleMu3_DZ_PFMET50_PFMHT60();
    const bool &HLT_DoubleMu3_DZ_PFMET70_PFMHT70();
    const bool &HLT_DoubleMu3_DZ_PFMET90_PFMHT90();
    const bool &HLT_DoubleMu3_Trk_Tau3mu();
    const bool &HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass();
    const bool &HLT_DoubleMu43NoFiltersNoVtx();
    const bool &HLT_DoubleMu48NoFiltersNoVtx();
    const bool &HLT_DoubleMu4_3_Bs();
    const bool &HLT_DoubleMu4_3_Jpsi_Displaced();
    const bool &HLT_DoubleMu4_JpsiTrkTrk_Displaced();
    const bool &HLT_DoubleMu4_JpsiTrk_Displaced();
    const bool &HLT_DoubleMu4_Jpsi_Displaced();
    const bool &HLT_DoubleMu4_Jpsi_NoVertexing();
    const bool &HLT_DoubleMu4_LowMassNonResonantTrk_Displaced();
    const bool &HLT_DoubleMu4_Mass8_DZ_PFHT350();
    const bool &HLT_DoubleMu4_PsiPrimeTrk_Displaced();
    const bool &HLT_DoubleMu8_Mass8_PFHT350();
    const bool &HLT_DoublePFJets100MaxDeta1p6_DoubleCaloBTagCSV_p33();
    const bool &HLT_DoublePFJets100_CaloBTagCSV_p33();
    const bool &HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagCSV_p33();
    const bool &HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagCSV_p33();
    const bool &HLT_DoublePFJets200_CaloBTagCSV_p33();
    const bool &HLT_DoublePFJets350_CaloBTagCSV_p33();
    const bool &HLT_DoublePFJets40_CaloBTagCSV_p33();
    const bool &HLT_DoublePhoton33_CaloIdL();
    const bool &HLT_DoublePhoton70();
    const bool &HLT_DoublePhoton85();
    const bool &HLT_DoubleTightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg();
    const bool &HLT_DoubleTightChargedIsoPFTau35_Trk1_eta2p1_Reg();
    const bool &HLT_DoubleTightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg();
    const bool &HLT_DoubleTightChargedIsoPFTau40_Trk1_eta2p1_Reg();
    const bool &HLT_ECALHT800();
    const bool &HLT_EcalCalibration();
    const bool &HLT_Ele115_CaloIdVT_GsfTrkIdT();
    const bool &HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30();
    const bool &HLT_Ele135_CaloIdVT_GsfTrkIdT();
    const bool &HLT_Ele145_CaloIdVT_GsfTrkIdT();
    const bool &HLT_Ele15_IsoVVVL_PFHT450();
    const bool &HLT_Ele15_IsoVVVL_PFHT450_CaloBTagCSV_4p5();
    const bool &HLT_Ele15_IsoVVVL_PFHT450_PFMET50();
    const bool &HLT_Ele15_IsoVVVL_PFHT600();
    const bool &HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL();
    const bool &HLT_Ele17_CaloIdM_TrackIdM_PFJet30();
    const bool &HLT_Ele200_CaloIdVT_GsfTrkIdT();
    const bool &HLT_Ele20_WPLoose_Gsf();
    const bool &HLT_Ele20_WPTight_Gsf();
    const bool &HLT_Ele20_eta2p1_WPLoose_Gsf();
    const bool &HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30();
    const bool &HLT_Ele23_CaloIdM_TrackIdM_PFJet30();
    const bool &HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL();
    const bool &HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ();
    const bool &HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_CrossL1();
    const bool &HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_TightID_CrossL1();
    const bool &HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_CrossL1();
    const bool &HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_TightID_CrossL1();
    const bool &HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_CrossL1();
    const bool &HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_TightID_CrossL1();
    const bool &HLT_Ele250_CaloIdVT_GsfTrkIdT();
    const bool &HLT_Ele27_Ele37_CaloIdL_MW();
    const bool &HLT_Ele27_WPTight_Gsf();
    const bool &HLT_Ele28_HighEta_SC20_Mass55();
    const bool &HLT_Ele28_eta2p1_WPTight_Gsf_HT150();
    const bool &HLT_Ele300_CaloIdVT_GsfTrkIdT();
    const bool &HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned();
    const bool &HLT_Ele32_WPTight_Gsf();
    const bool &HLT_Ele32_WPTight_Gsf_L1DoubleEG();
    const bool &HLT_Ele35_WPTight_Gsf();
    const bool &HLT_Ele35_WPTight_Gsf_L1EGMT();
    const bool &HLT_Ele38_WPTight_Gsf();
    const bool &HLT_Ele40_WPTight_Gsf();
    const bool &HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165();
    const bool &HLT_Ele50_IsoVVVL_PFHT450();
    const bool &HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30();
    const bool &HLT_Ele8_CaloIdM_TrackIdM_PFJet30();
    const bool &HLT_FullTrack_Multiplicity100();
    const bool &HLT_FullTrack_Multiplicity130();
    const bool &HLT_FullTrack_Multiplicity155();
    const bool &HLT_FullTrack_Multiplicity85();
    const bool &HLT_HISinglePhoton10_Eta3p1ForPPRef();
    const bool &HLT_HISinglePhoton20_Eta3p1ForPPRef();
    const bool &HLT_HISinglePhoton30_Eta3p1ForPPRef();
    const bool &HLT_HISinglePhoton40_Eta3p1ForPPRef();
    const bool &HLT_HISinglePhoton50_Eta3p1ForPPRef();
    const bool &HLT_HISinglePhoton60_Eta3p1ForPPRef();
    const bool &HLT_HT300_Beamspot();
    const bool &HLT_HT400_DisplacedDijet40_DisplacedTrack();
    const bool &HLT_HT425();
    const bool &HLT_HT430_DisplacedDijet40_DisplacedTrack();
    const bool &HLT_HT430_DisplacedDijet60_DisplacedTrack();
    const bool &HLT_HT430_DisplacedDijet80_DisplacedTrack();
    const bool &HLT_HT450_Beamspot();
    const bool &HLT_HT550_DisplacedDijet60_Inclusive();
    const bool &HLT_HT550_DisplacedDijet80_Inclusive();
    const bool &HLT_HT650_DisplacedDijet60_Inclusive();
    const bool &HLT_HT650_DisplacedDijet80_Inclusive();
    const bool &HLT_HT750_DisplacedDijet80_Inclusive();
    const bool &HLT_HcalCalibration();
    const bool &HLT_HcalIsolatedbunch();
    const bool &HLT_HcalNZS();
    const bool &HLT_HcalPhiSym();
    const bool &HLT_IsoMu20();
    const bool &HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_CrossL1();
    const bool &HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_TightID_CrossL1();
    const bool &HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_CrossL1();
    const bool &HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_TightID_CrossL1();
    const bool &HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_CrossL1();
    const bool &HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_TightID_CrossL1();
    const bool &HLT_IsoMu24();
    const bool &HLT_IsoMu24_eta2p1();
    const bool &HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_SingleL1();
    const bool &HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_TightID_SingleL1();
    const bool &HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1();
    const bool &HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1();
    const bool &HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_SingleL1();
    const bool &HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_TightID_SingleL1();
    const bool &HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1();
    const bool &HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1();
    const bool &HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1();
    const bool &HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1();
    const bool &HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr();
    const bool &HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_SingleL1();
    const bool &HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_TightID_SingleL1();
    const bool &HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1();
    const bool &HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1();
    const bool &HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1();
    const bool &HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1();
    const bool &HLT_IsoMu27();
    const bool &HLT_IsoMu27_LooseChargedIsoPFTau20_SingleL1();
    const bool &HLT_IsoMu27_MediumChargedIsoPFTau20_SingleL1();
    const bool &HLT_IsoMu27_TightChargedIsoPFTau20_SingleL1();
    const bool &HLT_IsoMu30();
    const bool &HLT_IsoTrackHB();
    const bool &HLT_IsoTrackHE();
    const bool &HLT_L1ETMHadSeeds();
    const bool &HLT_L1MinimumBiasHF0OR();
    const bool &HLT_L1MinimumBiasHF_OR();
    const bool &HLT_L1NotBptxOR();
    const bool &HLT_L1SingleMu18();
    const bool &HLT_L1SingleMu25();
    const bool &HLT_L1UnpairedBunchBptxMinus();
    const bool &HLT_L1UnpairedBunchBptxPlus();
    const bool &HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142();
    const bool &HLT_L1_DoubleJet30_Mass_Min400_Mu10();
    const bool &HLT_L2Mu10();
    const bool &HLT_L2Mu10_NoVertex_NoBPTX();
    const bool &HLT_L2Mu10_NoVertex_NoBPTX3BX();
    const bool &HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX();
    const bool &HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX();
    const bool &HLT_L2Mu50();
    const bool &HLT_MET105_IsoTrk50();
    const bool &HLT_MET120_IsoTrk50();
    const bool &HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1();
    const bool &HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr();
    const bool &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr();
    const bool &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100();
    const bool &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110();
    const bool &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120();
    const bool &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130();
    const bool &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90();
    const bool &HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight();
    const bool &HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight();
    const bool &HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight();
    const bool &HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight();
    const bool &HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60();
    const bool &HLT_Mu12_DoublePFJets100_CaloBTagCSV_p33();
    const bool &HLT_Mu12_DoublePFJets200_CaloBTagCSV_p33();
    const bool &HLT_Mu12_DoublePFJets350_CaloBTagCSV_p33();
    const bool &HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagCSV_p33();
    const bool &HLT_Mu12_DoublePFJets40_CaloBTagCSV_p33();
    const bool &HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagCSV_p33();
    const bool &HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagCSV_p33();
    const bool &HLT_Mu12_DoublePhoton20();
    const bool &HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL();
    const bool &HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ();
    const bool &HLT_Mu15_IsoVVVL_PFHT450();
    const bool &HLT_Mu15_IsoVVVL_PFHT450_CaloBTagCSV_4p5();
    const bool &HLT_Mu15_IsoVVVL_PFHT450_PFMET50();
    const bool &HLT_Mu15_IsoVVVL_PFHT600();
    const bool &HLT_Mu17();
    const bool &HLT_Mu17_Photon30_IsoCaloId();
    const bool &HLT_Mu17_TrkIsoVVL();
    const bool &HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL();
    const bool &HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ();
    const bool &HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8();
    const bool &HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8();
    const bool &HLT_Mu18_Mu9();
    const bool &HLT_Mu18_Mu9_DZ();
    const bool &HLT_Mu18_Mu9_SameSign();
    const bool &HLT_Mu18_Mu9_SameSign_DZ();
    const bool &HLT_Mu19();
    const bool &HLT_Mu19_TrkIsoVVL();
    const bool &HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL();
    const bool &HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ();
    const bool &HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8();
    const bool &HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8();
    const bool &HLT_Mu20();
    const bool &HLT_Mu20_Mu10();
    const bool &HLT_Mu20_Mu10_DZ();
    const bool &HLT_Mu20_Mu10_SameSign();
    const bool &HLT_Mu20_Mu10_SameSign_DZ();
    const bool &HLT_Mu20_TkMu0_Phi();
    const bool &HLT_Mu23_Mu12();
    const bool &HLT_Mu23_Mu12_DZ();
    const bool &HLT_Mu23_Mu12_SameSign();
    const bool &HLT_Mu23_Mu12_SameSign_DZ();
    const bool &HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL();
    const bool &HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ();
    const bool &HLT_Mu25_TkMu0_Onia();
    const bool &HLT_Mu25_TkMu0_Phi();
    const bool &HLT_Mu27();
    const bool &HLT_Mu27_Ele37_CaloIdL_MW();
    const bool &HLT_Mu30_TkMu0_Onia();
    const bool &HLT_Mu37_Ele27_CaloIdL_MW();
    const bool &HLT_Mu37_TkMu27();
    const bool &HLT_Mu3_PFJet40();
    const bool &HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL();
    const bool &HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL();
    const bool &HLT_Mu50();
    const bool &HLT_Mu50_IsoVVVL_PFHT450();
    const bool &HLT_Mu55();
    const bool &HLT_Mu7p5_L2Mu2_Jpsi();
    const bool &HLT_Mu7p5_L2Mu2_Upsilon();
    const bool &HLT_Mu7p5_Track2_Jpsi();
    const bool &HLT_Mu7p5_Track2_Upsilon();
    const bool &HLT_Mu7p5_Track3p5_Jpsi();
    const bool &HLT_Mu7p5_Track3p5_Upsilon();
    const bool &HLT_Mu7p5_Track7_Jpsi();
    const bool &HLT_Mu7p5_Track7_Upsilon();
    const bool &HLT_Mu8();
    const bool &HLT_Mu8_DiEle12_CaloIdL_TrackIdL();
    const bool &HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ();
    const bool &HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350();
    const bool &HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ();
    const bool &HLT_Mu8_TrkIsoVVL();
    const bool &HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60();
    const bool &HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL();
    const bool &HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ();
    const bool &HLT_OldMu100();
    const bool &HLT_PFHT1050();
    const bool &HLT_PFHT180();
    const bool &HLT_PFHT250();
    const bool &HLT_PFHT300PT30_QuadPFJet_75_60_45_40();
    const bool &HLT_PFHT300PT30_QuadPFJet_75_60_45_40_TriplePFBTagCSV_3p0();
    const bool &HLT_PFHT350();
    const bool &HLT_PFHT350MinPFJet15();
    const bool &HLT_PFHT370();
    const bool &HLT_PFHT380_SixPFJet32();
    const bool &HLT_PFHT380_SixPFJet32_DoublePFBTagCSV_2p2();
    const bool &HLT_PFHT380_SixPFJet32_DoublePFBTagDeepCSV_2p2();
    const bool &HLT_PFHT430();
    const bool &HLT_PFHT430_SixPFJet40();
    const bool &HLT_PFHT430_SixPFJet40_PFBTagCSV_1p5();
    const bool &HLT_PFHT500_PFMET100_PFMHT100_IDTight();
    const bool &HLT_PFHT500_PFMET110_PFMHT110_IDTight();
    const bool &HLT_PFHT510();
    const bool &HLT_PFHT590();
    const bool &HLT_PFHT680();
    const bool &HLT_PFHT700_PFMET85_PFMHT85_IDTight();
    const bool &HLT_PFHT700_PFMET95_PFMHT95_IDTight();
    const bool &HLT_PFHT780();
    const bool &HLT_PFHT800_PFMET75_PFMHT75_IDTight();
    const bool &HLT_PFHT800_PFMET85_PFMHT85_IDTight();
    const bool &HLT_PFHT890();
    const bool &HLT_PFJet140();
    const bool &HLT_PFJet200();
    const bool &HLT_PFJet260();
    const bool &HLT_PFJet320();
    const bool &HLT_PFJet40();
    const bool &HLT_PFJet400();
    const bool &HLT_PFJet450();
    const bool &HLT_PFJet500();
    const bool &HLT_PFJet550();
    const bool &HLT_PFJet60();
    const bool &HLT_PFJet80();
    const bool &HLT_PFJetFwd140();
    const bool &HLT_PFJetFwd200();
    const bool &HLT_PFJetFwd260();
    const bool &HLT_PFJetFwd320();
    const bool &HLT_PFJetFwd40();
    const bool &HLT_PFJetFwd400();
    const bool &HLT_PFJetFwd450();
    const bool &HLT_PFJetFwd500();
    const bool &HLT_PFJetFwd60();
    const bool &HLT_PFJetFwd80();
    const bool &HLT_PFMET100_PFMHT100_IDTight_CaloBTagCSV_3p1();
    const bool &HLT_PFMET100_PFMHT100_IDTight_PFHT60();
    const bool &HLT_PFMET110_PFMHT110_IDTight();
    const bool &HLT_PFMET110_PFMHT110_IDTight_CaloBTagCSV_3p1();
    const bool &HLT_PFMET120_PFMHT120_IDTight();
    const bool &HLT_PFMET120_PFMHT120_IDTight_CaloBTagCSV_3p1();
    const bool &HLT_PFMET120_PFMHT120_IDTight_PFHT60();
    const bool &HLT_PFMET130_PFMHT130_IDTight();
    const bool &HLT_PFMET130_PFMHT130_IDTight_CaloBTagCSV_3p1();
    const bool &HLT_PFMET140_PFMHT140_IDTight();
    const bool &HLT_PFMET140_PFMHT140_IDTight_CaloBTagCSV_3p1();
    const bool &HLT_PFMET200_HBHECleaned();
    const bool &HLT_PFMET200_HBHE_BeamHaloCleaned();
    const bool &HLT_PFMET200_NotCleaned();
    const bool &HLT_PFMET250_HBHECleaned();
    const bool &HLT_PFMET300_HBHECleaned();
    const bool &HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60();
    const bool &HLT_PFMETNoMu110_PFMHTNoMu110_IDTight();
    const bool &HLT_PFMETNoMu120_PFMHTNoMu120_IDTight();
    const bool &HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60();
    const bool &HLT_PFMETNoMu130_PFMHTNoMu130_IDTight();
    const bool &HLT_PFMETNoMu140_PFMHTNoMu140_IDTight();
    const bool &HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60();
    const bool &HLT_PFMETTypeOne110_PFMHT110_IDTight();
    const bool &HLT_PFMETTypeOne120_PFMHT120_IDTight();
    const bool &HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60();
    const bool &HLT_PFMETTypeOne130_PFMHT130_IDTight();
    const bool &HLT_PFMETTypeOne140_PFMHT140_IDTight();
    const bool &HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned();
    const bool &HLT_Photon120();
    const bool &HLT_Photon120_R9Id90_HE10_IsoM();
    const bool &HLT_Photon150();
    const bool &HLT_Photon165_R9Id90_HE10_IsoM();
    const bool &HLT_Photon175();
    const bool &HLT_Photon200();
    const bool &HLT_Photon20_HoverELoose();
    const bool &HLT_Photon25();
    const bool &HLT_Photon300_NoHE();
    const bool &HLT_Photon30_HoverELoose();
    const bool &HLT_Photon33();
    const bool &HLT_Photon40_HoverELoose();
    const bool &HLT_Photon50();
    const bool &HLT_Photon50_HoverELoose();
    const bool &HLT_Photon50_R9Id90_HE10_IsoM();
    const bool &HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50();
    const bool &HLT_Photon60_HoverELoose();
    const bool &HLT_Photon60_R9Id90_CaloIdL_IsoL();
    const bool &HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL();
    const bool &HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15();
    const bool &HLT_Photon75();
    const bool &HLT_Photon75_R9Id90_HE10_IsoM();
    const bool &HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3();
    const bool &HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3();
    const bool &HLT_Photon90();
    const bool &HLT_Photon90_CaloIdL_PFHT700();
    const bool &HLT_Photon90_R9Id90_HE10_IsoM();
    const bool &HLT_Physics();
    const bool &HLT_Physics_part0();
    const bool &HLT_Physics_part1();
    const bool &HLT_Physics_part2();
    const bool &HLT_Physics_part3();
    const bool &HLT_Physics_part4();
    const bool &HLT_Physics_part5();
    const bool &HLT_Physics_part6();
    const bool &HLT_Physics_part7();
    const bool &HLT_QuadPFJet103_88_75_15();
    const bool &HLT_QuadPFJet103_88_75_15_BTagCSV_p013_VBF2();
    const bool &HLT_QuadPFJet103_88_75_15_DoubleBTagCSV_p013_p08_VBF1();
    const bool &HLT_QuadPFJet105_88_76_15();
    const bool &HLT_QuadPFJet105_88_76_15_BTagCSV_p013_VBF2();
    const bool &HLT_QuadPFJet105_90_76_15_DoubleBTagCSV_p013_p08_VBF1();
    const bool &HLT_QuadPFJet111_90_80_15();
    const bool &HLT_QuadPFJet111_90_80_15_BTagCSV_p013_VBF2();
    const bool &HLT_QuadPFJet111_90_80_15_DoubleBTagCSV_p013_p08_VBF1();
    const bool &HLT_QuadPFJet98_83_71_15();
    const bool &HLT_QuadPFJet98_83_71_15_BTagCSV_p013_VBF2();
    const bool &HLT_QuadPFJet98_83_71_15_DoubleBTagCSV_p013_p08_VBF1();
    const bool &HLT_Random();
    const bool &HLT_Rsq0p35();
    const bool &HLT_Rsq0p40();
    const bool &HLT_RsqMR300_Rsq0p09_MR200();
    const bool &HLT_RsqMR300_Rsq0p09_MR200_4jet();
    const bool &HLT_RsqMR320_Rsq0p09_MR200();
    const bool &HLT_RsqMR320_Rsq0p09_MR200_4jet();
    const bool &HLT_SingleJet30_Mu12_SinglePFJet40();
    const bool &HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15();
    const bool &HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1();
    const bool &HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15();
    const bool &HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1();
    const bool &HLT_TkMu100();
    const bool &HLT_Trimuon5_3p5_2_Upsilon_Muon();
    const bool &HLT_TripleJet110_35_35_Mjj650_PFMET110();
    const bool &HLT_TripleJet110_35_35_Mjj650_PFMET120();
    const bool &HLT_TripleJet110_35_35_Mjj650_PFMET130();
    const bool &HLT_TripleMu_10_5_5_DZ();
    const bool &HLT_TripleMu_12_10_5();
    const bool &HLT_TripleMu_5_3_3_Mass3p8to60_DCA();
    const bool &HLT_TripleMu_5_3_3_Mass3p8to60_DZ();
    const bool &HLT_TriplePhoton_20_20_20_CaloIdLV2();
    const bool &HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL();
    const bool &HLT_TriplePhoton_30_30_10_CaloIdLV2();
    const bool &HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL();
    const bool &HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL();
    const bool &HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx();
    const bool &HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx();
    const bool &HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx();
    const bool &HLT_UncorrectedJetE30_NoBPTX();
    const bool &HLT_UncorrectedJetE30_NoBPTX3BX();
    const bool &HLT_UncorrectedJetE60_NoBPTX3BX();
    const bool &HLT_UncorrectedJetE70_NoBPTX3BX();
    const bool &HLT_VBF_DoubleLooseChargedIsoPFTau20_Trk1_eta2p1_Reg();
    const bool &HLT_VBF_DoubleMediumChargedIsoPFTau20_Trk1_eta2p1_Reg();
    const bool &HLT_VBF_DoubleTightChargedIsoPFTau20_Trk1_eta2p1_Reg();
    const bool &HLT_ZeroBias();
    const bool &HLT_ZeroBias_FirstBXAfterTrain();
    const bool &HLT_ZeroBias_FirstCollisionAfterAbortGap();
    const bool &HLT_ZeroBias_FirstCollisionInTrain();
    const bool &HLT_ZeroBias_IsolatedBunches();
    const bool &HLT_ZeroBias_LastCollisionInTrain();
    const bool &HLT_ZeroBias_part0();
    const bool &HLT_ZeroBias_part1();
    const bool &HLT_ZeroBias_part2();
    const bool &HLT_ZeroBias_part3();
    const bool &HLT_ZeroBias_part4();
    const bool &HLT_ZeroBias_part5();
    const bool &HLT_ZeroBias_part6();
    const bool &HLT_ZeroBias_part7();
    const bool &HLTriggerFinalPath();
    const bool &HLTriggerFirstPath();
    const vector<float> &IsoTrack_dxy();
    const vector<float> &IsoTrack_dz();
    const vector<float> &IsoTrack_eta();
    const vector<bool> &IsoTrack_isHighPurityTrack();
    const vector<bool> &IsoTrack_isPFcand();
    const vector<float> &IsoTrack_miniPFRelIso_all();
    const vector<float> &IsoTrack_miniPFRelIso_chg();
    const vector<int> &IsoTrack_pdgId();
    const vector<float> &IsoTrack_pfRelIso03_all();
    const vector<float> &IsoTrack_pfRelIso03_chg();
    const vector<float> &IsoTrack_phi();
    const vector<float> &IsoTrack_pt();
    const vector<float> &Jet_area();
    const vector<float> &Jet_bReg();
    const vector<float> &Jet_btagCMVA();
    const vector<float> &Jet_btagCSVV2();
    const vector<float> &Jet_btagDeepB();
    const vector<float> &Jet_btagDeepC();
    const vector<float> &Jet_btagDeepFlavB();
    const vector<float> &Jet_chEmEF();
    const vector<float> &Jet_chHEF();
    const vector<UChar_t> &Jet_cleanmask();
    const vector<int> &Jet_electronIdx1();
    const vector<int> &Jet_electronIdx2();
    const vector<float> &Jet_eta();
    const vector<int> &Jet_genJetIdx();
    const vector<int> &Jet_hadronFlavour();
    const vector<int> &Jet_jetId();
    const vector<float> &Jet_mass();
    const vector<int> &Jet_muonIdx1();
    const vector<int> &Jet_muonIdx2();
    const vector<int> &Jet_nConstituents();
    const vector<int> &Jet_nElectrons();
    const vector<int> &Jet_nMuons();
    const vector<float> &Jet_neEmEF();
    const vector<float> &Jet_neHEF();
    const vector<LorentzVector> &Jet_p4();
    const vector<int> &Jet_partonFlavour();
    const vector<float> &Jet_phi();
    const vector<float> &Jet_pt();
    const vector<int> &Jet_puId();
    const vector<float> &Jet_qgl();
    const vector<float> &Jet_rawFactor();
    const bool &L1simulation_step();
    const vector<float> &LHEPart_eta();
    const vector<float> &LHEPart_mass();
    const vector<LorentzVector> &LHEPart_p4();
    const vector<int> &LHEPart_pdgId();
    const vector<float> &LHEPart_phi();
    const vector<float> &LHEPart_pt();
    const vector<float> &LHEPdfWeight();
    const vector<float> &LHEScaleWeight();
    const float &LHEWeight_originalXWGTUP();
    const float &LHE_HT();
    const float &LHE_HTIncoming();
    const UChar_t &LHE_Nb();
    const UChar_t &LHE_Nc();
    const UChar_t &LHE_Nglu();
    const UChar_t &LHE_Njets();
    const UChar_t &LHE_NpLO();
    const UChar_t &LHE_NpNLO();
    const UChar_t &LHE_Nuds();
    const float &LHE_Vpt();
    const float &MET_MetUnclustEnUpDeltaX();
    const float &MET_MetUnclustEnUpDeltaY();
    const float &MET_covXX();
    const float &MET_covXY();
    const float &MET_covYY();
    const float &MET_fiducialGenPhi();
    const float &MET_fiducialGenPt();
    const float &MET_phi();
    const float &MET_pt();
    const float &MET_significance();
    const float &MET_sumEt();
    const vector<int> &Muon_charge();
    const vector<UChar_t> &Muon_cleanmask();
    const vector<float> &Muon_dxy();
    const vector<float> &Muon_dxyErr();
    const vector<float> &Muon_dz();
    const vector<float> &Muon_dzErr();
    const vector<float> &Muon_eta();
    const vector<UChar_t> &Muon_genPartFlav();
    const vector<int> &Muon_genPartIdx();
    const vector<UChar_t> &Muon_highPtId();
    const vector<float> &Muon_ip3d();
    const vector<bool> &Muon_isPFcand();
    const vector<int> &Muon_jetIdx();
    const vector<float> &Muon_mass();
    const vector<bool> &Muon_mediumId();
    const vector<float> &Muon_miniPFRelIso_all();
    const vector<float> &Muon_miniPFRelIso_chg();
    const vector<float> &Muon_mvaTTH();
    const vector<int> &Muon_nStations();
    const vector<int> &Muon_nTrackerLayers();
    const vector<LorentzVector> &Muon_p4();
    const vector<int> &Muon_pdgId();
    const vector<float> &Muon_pfRelIso03_all();
    const vector<float> &Muon_pfRelIso03_chg();
    const vector<float> &Muon_pfRelIso04_all();
    const vector<float> &Muon_phi();
    const vector<float> &Muon_pt();
    const vector<float> &Muon_ptErr();
    const vector<float> &Muon_segmentComp();
    const vector<float> &Muon_sip3d();
    const vector<bool> &Muon_softId();
    const vector<int> &Muon_tightCharge();
    const vector<bool> &Muon_tightId();
    const vector<float> &OtherPV_z();
    const float &PV_chi2();
    const float &PV_ndof();
    const int &PV_npvs();
    const int &PV_npvsGood();
    const float &PV_score();
    const float &PV_x();
    const float &PV_y();
    const float &PV_z();
    const vector<int> &Photon_charge();
    const vector<UChar_t> &Photon_cleanmask();
    const vector<int> &Photon_cutBasedBitmap();
    const vector<float> &Photon_eCorr();
    const vector<int> &Photon_electronIdx();
    const vector<bool> &Photon_electronVeto();
    const vector<float> &Photon_energyErr();
    const vector<float> &Photon_eta();
    const vector<UChar_t> &Photon_genPartFlav();
    const vector<int> &Photon_genPartIdx();
    const vector<float> &Photon_hoe();
    const vector<bool> &Photon_isScEtaEB();
    const vector<bool> &Photon_isScEtaEE();
    const vector<int> &Photon_jetIdx();
    const vector<float> &Photon_mass();
    const vector<float> &Photon_mvaID();
    const vector<bool> &Photon_mvaID_WP80();
    const vector<bool> &Photon_mvaID_WP90();
    const vector<LorentzVector> &Photon_p4();
    const vector<int> &Photon_pdgId();
    const vector<float> &Photon_pfRelIso03_all();
    const vector<float> &Photon_pfRelIso03_chg();
    const vector<float> &Photon_phi();
    const vector<bool> &Photon_pixelSeed();
    const vector<float> &Photon_pt();
    const vector<float> &Photon_r9();
    const vector<float> &Photon_sieie();
    const vector<int> &Photon_vidNestedWPBitmap();
    const int &Pileup_nPU();
    const float &Pileup_nTrueInt();
    const int &Pileup_sumEOOT();
    const int &Pileup_sumLOOT();
    const float &PuppiMET_phi();
    const float &PuppiMET_pt();
    const float &PuppiMET_sumEt();
    const float &RawMET_phi();
    const float &RawMET_pt();
    const float &RawMET_sumEt();
    const vector<float> &SV_chi2();
    const vector<float> &SV_dlen();
    const vector<float> &SV_dlenSig();
    const vector<float> &SV_eta();
    const vector<float> &SV_mass();
    const vector<float> &SV_ndof();
    const vector<LorentzVector> &SV_p4();
    const vector<float> &SV_pAngle();
    const vector<float> &SV_phi();
    const vector<float> &SV_pt();
    const vector<float> &SV_x();
    const vector<float> &SV_y();
    const vector<float> &SV_z();
    const float &SoftActivityJetHT();
    const float &SoftActivityJetHT10();
    const float &SoftActivityJetHT2();
    const float &SoftActivityJetHT5();
    const int &SoftActivityJetNjets10();
    const int &SoftActivityJetNjets2();
    const int &SoftActivityJetNjets5();
    const vector<float> &SoftActivityJet_eta();
    const vector<float> &SoftActivityJet_phi();
    const vector<float> &SoftActivityJet_pt();
    const vector<float> &SubGenJetAK8_eta();
    const vector<float> &SubGenJetAK8_mass();
    const vector<LorentzVector> &SubGenJetAK8_p4();
    const vector<float> &SubGenJetAK8_phi();
    const vector<float> &SubGenJetAK8_pt();
    const vector<float> &SubJet_btagCMVA();
    const vector<float> &SubJet_btagCSVV2();
    const vector<float> &SubJet_btagDeepB();
    const vector<float> &SubJet_eta();
    const vector<float> &SubJet_mass();
    const vector<float> &SubJet_n2b1();
    const vector<float> &SubJet_n3b1();
    const vector<LorentzVector> &SubJet_p4();
    const vector<float> &SubJet_phi();
    const vector<float> &SubJet_pt();
    const vector<float> &SubJet_tau1();
    const vector<float> &SubJet_tau2();
    const vector<float> &SubJet_tau3();
    const vector<float> &SubJet_tau4();
    const vector<int> &Tau_charge();
    const vector<float> &Tau_chargedIso();
    const vector<UChar_t> &Tau_cleanmask();
    const vector<int> &Tau_decayMode();
    const vector<float> &Tau_dxy();
    const vector<float> &Tau_dz();
    const vector<float> &Tau_eta();
    const vector<UChar_t> &Tau_genPartFlav();
    const vector<int> &Tau_genPartIdx();
    const vector<UChar_t> &Tau_idAntiEle();
    const vector<UChar_t> &Tau_idAntiMu();
    const vector<bool> &Tau_idDecayMode();
    const vector<bool> &Tau_idDecayModeNewDMs();
    const vector<UChar_t> &Tau_idMVAnewDM2017v2();
    const vector<UChar_t> &Tau_idMVAoldDM();
    const vector<UChar_t> &Tau_idMVAoldDM2017v1();
    const vector<UChar_t> &Tau_idMVAoldDM2017v2();
    const vector<UChar_t> &Tau_idMVAoldDMdR032017v2();
    const vector<int> &Tau_jetIdx();
    const vector<float> &Tau_leadTkDeltaEta();
    const vector<float> &Tau_leadTkDeltaPhi();
    const vector<float> &Tau_leadTkPtOverTauPt();
    const vector<float> &Tau_mass();
    const vector<float> &Tau_neutralIso();
    const vector<LorentzVector> &Tau_p4();
    const vector<float> &Tau_phi();
    const vector<float> &Tau_photonsOutsideSignalCone();
    const vector<float> &Tau_pt();
    const vector<float> &Tau_puCorr();
    const vector<float> &Tau_rawAntiEle();
    const vector<int> &Tau_rawAntiEleCat();
    const vector<float> &Tau_rawIso();
    const vector<float> &Tau_rawIsodR03();
    const vector<float> &Tau_rawMVAnewDM2017v2();
    const vector<float> &Tau_rawMVAoldDM();
    const vector<float> &Tau_rawMVAoldDM2017v1();
    const vector<float> &Tau_rawMVAoldDM2017v2();
    const vector<float> &Tau_rawMVAoldDMdR032017v2();
    const float &TkMET_phi();
    const float &TkMET_pt();
    const float &TkMET_sumEt();
    const vector<float> &TrigObj_eta();
    const vector<int> &TrigObj_filterBits();
    const vector<int> &TrigObj_id();
    const vector<int> &TrigObj_l1charge();
    const vector<int> &TrigObj_l1iso();
    const vector<float> &TrigObj_l1pt();
    const vector<float> &TrigObj_l1pt_2();
    const vector<float> &TrigObj_l2pt();
    const vector<float> &TrigObj_phi();
    const vector<float> &TrigObj_pt();
    const ULong64_t &event();
    const float &fixedGridRhoFastjetAll();
    const float &fixedGridRhoFastjetCentralCalo();
    const float &fixedGridRhoFastjetCentralNeutral();
    const int &genTtbarId();
    const float &genWeight();
    const UInt_t &luminosityBlock();
    const UInt_t &nElectron();
    const UInt_t &nFatJet();
    const UInt_t &nGenDressedLepton();
    const UInt_t &nGenJet();
    const UInt_t &nGenJetAK8();
    const UInt_t &nGenPart();
    const UInt_t &nGenVisTau();
    const UInt_t &nIsoTrack();
    const UInt_t &nJet();
    const UInt_t &nLHEPart();
    const UInt_t &nLHEPdfWeight();
    const UInt_t &nLHEScaleWeight();
    const UInt_t &nMuon();
    const UInt_t &nOtherPV();
    const UInt_t &nPhoton();
    const UInt_t &nSV();
    const UInt_t &nSoftActivityJet();
    const UInt_t &nSubGenJetAK8();
    const UInt_t &nSubJet();
    const UInt_t &nTau();
    const UInt_t &nTrigObj();
    const UInt_t &run();
};

#ifndef __CINT__
extern Nano nt;
#endif

namespace tas {
    const float &CaloMET_phi(); // phi
    const float &CaloMET_pt(); // pt
    const float &CaloMET_sumEt(); // scalar sum of Et
    const vector<int> &Electron_charge(); // electric charge
    const vector<UChar_t> &Electron_cleanmask(); // simple cleaning mask with priority to leptons
    const vector<bool> &Electron_convVeto(); // pass conversion veto
    const vector<int> &Electron_cutBased(); // cut-based ID (0:fail, 1:veto, 2:loose, 3:medium, 4:tight)
    const vector<bool> &Electron_cutBased_HEEP(); // cut-based HEEP ID
    const vector<float> &Electron_deltaEtaSC(); // delta eta (SC,ele) with sign
    const vector<float> &Electron_dr03EcalRecHitSumEt(); // Non-PF Ecal isolation within a delta R cone of 0.3 with electron pt > 35 GeV
    const vector<float> &Electron_dr03HcalDepth1TowerSumEt(); // Non-PF Hcal isolation within a delta R cone of 0.3 with electron pt > 35 GeV
    const vector<float> &Electron_dr03TkSumPt(); // Non-PF track isolation within a delta R cone of 0.3 with electron pt > 35 GeV
    const vector<float> &Electron_dxy(); // dxy (with sign) wrt first PV, in cm
    const vector<float> &Electron_dxyErr(); // dxy uncertainty, in cm
    const vector<float> &Electron_dz(); // dz (with sign) wrt first PV, in cm
    const vector<float> &Electron_dzErr(); // dz uncertainty, in cm
    const vector<float> &Electron_eCorr(); // ratio of the calibrated energy/miniaod energy
    const vector<float> &Electron_eInvMinusPInv(); // 1/E_SC - 1/p_trk
    const vector<float> &Electron_energyErr(); // energy error of the cluster-track combination
    const vector<float> &Electron_eta(); // eta
    const vector<UChar_t> &Electron_genPartFlav(); // Flavour of genParticle for MC matching to status==1 electrons or photons: 1 = prompt electron (including gamma*->mu mu), 15 = electron from prompt tau, 22 = prompt photon (likely conversion), 5 = electron from b, 4 = electron from c, 3 = electron from light or unknown, 0 = unmatched
    const vector<int> &Electron_genPartIdx(); // Index into genParticle list for MC matching to status==1 electrons or photons
    const vector<float> &Electron_hoe(); // H over E
    const vector<float> &Electron_ip3d(); // 3D impact parameter wrt first PV, in cm
    const vector<bool> &Electron_isPFcand(); // electron is PF candidate
    const vector<int> &Electron_jetIdx(); // index of the associated jet (-1 if none)
    const vector<UChar_t> &Electron_lostHits(); // number of missing inner hits
    const vector<float> &Electron_mass(); // mass
    const vector<float> &Electron_miniPFRelIso_all(); // mini PF relative isolation, total (with scaled rho*EA PU corrections)
    const vector<float> &Electron_miniPFRelIso_chg(); // mini PF relative isolation, charged component
    const vector<float> &Electron_mvaFall17Iso(); // MVA Iso ID score
    const vector<bool> &Electron_mvaFall17Iso_WP80(); // MVA Iso ID WP80
    const vector<bool> &Electron_mvaFall17Iso_WP90(); // MVA Iso ID WP90
    const vector<bool> &Electron_mvaFall17Iso_WPL(); // MVA Iso ID loose WP
    const vector<float> &Electron_mvaFall17noIso(); // MVA noIso ID score
    const vector<bool> &Electron_mvaFall17noIso_WP80(); // MVA noIso ID WP80
    const vector<bool> &Electron_mvaFall17noIso_WP90(); // MVA noIso ID WP90
    const vector<bool> &Electron_mvaFall17noIso_WPL(); // MVA noIso ID loose WP
    const vector<float> &Electron_mvaTTH(); // TTH MVA lepton ID score
    const vector<LorentzVector> &Electron_p4(); // from Electron_pt,eta,phi,mass
    const vector<int> &Electron_pdgId(); // PDG code assigned by the event reconstruction (not by MC truth)
    const vector<float> &Electron_pfRelIso03_all(); // PF relative isolation dR=0.3, total (with rho*EA PU corrections)
    const vector<float> &Electron_pfRelIso03_chg(); // PF relative isolation dR=0.3, charged component
    const vector<float> &Electron_phi(); // phi
    const vector<int> &Electron_photonIdx(); // index of the associated photon (-1 if none)
    const vector<float> &Electron_pt(); // p_{T}
    const vector<float> &Electron_r9(); // R9 of the supercluster, calculated with full 5x5 region
    const vector<float> &Electron_sieie(); // sigma_IetaIeta of the supercluster, calculated with full 5x5 region
    const vector<float> &Electron_sip3d(); // 3D impact parameter significance wrt first PV, in cm
    const vector<int> &Electron_tightCharge(); // Tight charge criteria (0:none, 1:isGsfScPixChargeConsistent, 2:isGsfCtfScPixChargeConsistent)
    const vector<int> &Electron_vidNestedWPBitmap(); // VID compressed bitmap (MinPtCut,GsfEleSCEtaMultiRangeCut,GsfEleDEtaInSeedCut,GsfEleDPhiInCut,GsfEleFull5x5SigmaIEtaIEtaCut,GsfEleHadronicOverEMEnergyScaledCut,GsfEleEInverseMinusPInverseCut,GsfEleEffAreaPFIsoCut,GsfEleConversionVetoCut,GsfEleMissingHitsCut), 3 bits per cut
    const vector<float> &FatJet_area(); // jet catchment area, for JECs
    const vector<float> &FatJet_btagCMVA(); // CMVA V2 btag discriminator
    const vector<float> &FatJet_btagCSVV2(); //  pfCombinedInclusiveSecondaryVertexV2 b-tag discriminator (aka CSVV2)
    const vector<float> &FatJet_btagDeepB(); // DeepCSV b+bb tag discriminator
    const vector<float> &FatJet_btagHbb(); // Higgs to BB tagger discriminator
    const vector<float> &FatJet_eta(); // eta
    const vector<int> &FatJet_jetId(); // Jet ID flags bit1 is loose (always false in 2017 since it does not exist), bit2 is tight, bit3 is tightLepVeto
    const vector<float> &FatJet_mass(); // mass
    const vector<float> &FatJet_msoftdrop(); // Corrected soft drop mass with PUPPI
    const vector<float> &FatJet_n2b1(); // N2 with beta=1
    const vector<float> &FatJet_n3b1(); // N3 with beta=1
    const vector<LorentzVector> &FatJet_p4(); // from FatJet_pt,eta,phi,mass
    const vector<float> &FatJet_phi(); // phi
    const vector<float> &FatJet_pt(); // pt
    const vector<int> &FatJet_subJetIdx1(); // index of first subjet
    const vector<int> &FatJet_subJetIdx2(); // index of second subjet
    const vector<float> &FatJet_tau1(); // Nsubjettiness (1 axis)
    const vector<float> &FatJet_tau2(); // Nsubjettiness (2 axis)
    const vector<float> &FatJet_tau3(); // Nsubjettiness (3 axis)
    const vector<float> &FatJet_tau4(); // Nsubjettiness (4 axis)
    const bool &Flag_BadChargedCandidateFilter(); // Trigger/flag bit
    const bool &Flag_BadChargedCandidateSummer16Filter(); // Trigger/flag bit
    const bool &Flag_BadPFMuonFilter(); // Trigger/flag bit
    const bool &Flag_BadPFMuonSummer16Filter(); // Trigger/flag bit
    const bool &Flag_CSCTightHalo2015Filter(); // Trigger/flag bit
    const bool &Flag_CSCTightHaloFilter(); // Trigger/flag bit
    const bool &Flag_CSCTightHaloTrkMuUnvetoFilter(); // Trigger/flag bit
    const bool &Flag_EcalDeadCellBoundaryEnergyFilter(); // Trigger/flag bit
    const bool &Flag_EcalDeadCellTriggerPrimitiveFilter(); // Trigger/flag bit
    const bool &Flag_HBHENoiseFilter(); // Trigger/flag bit
    const bool &Flag_HBHENoiseIsoFilter(); // Trigger/flag bit
    const bool &Flag_HcalStripHaloFilter(); // Trigger/flag bit
    const bool &Flag_METFilters(); // Trigger/flag bit
    const bool &Flag_chargedHadronTrackResolutionFilter(); // Trigger/flag bit
    const bool &Flag_ecalBadCalibFilter(); // Trigger/flag bit
    const bool &Flag_ecalLaserCorrFilter(); // Trigger/flag bit
    const bool &Flag_eeBadScFilter(); // Trigger/flag bit
    const bool &Flag_globalSuperTightHalo2016Filter(); // Trigger/flag bit
    const bool &Flag_globalTightHalo2016Filter(); // Trigger/flag bit
    const bool &Flag_goodVertices(); // Trigger/flag bit
    const bool &Flag_hcalLaserEventFilter(); // Trigger/flag bit
    const bool &Flag_muonBadTrackFilter(); // Trigger/flag bit
    const bool &Flag_trkPOGFilters(); // Trigger/flag bit
    const bool &Flag_trkPOG_logErrorTooManyClusters(); // Trigger/flag bit
    const bool &Flag_trkPOG_manystripclus53X(); // Trigger/flag bit
    const bool &Flag_trkPOG_toomanystripclus53X(); // Trigger/flag bit
    const vector<float> &GenDressedLepton_eta(); // eta
    const vector<float> &GenDressedLepton_mass(); // mass
    const vector<LorentzVector> &GenDressedLepton_p4(); // from GenDressedLepton_pt,eta,phi,mass
    const vector<int> &GenDressedLepton_pdgId(); // PDG id
    const vector<float> &GenDressedLepton_phi(); // phi
    const vector<float> &GenDressedLepton_pt(); // pt
    const vector<float> &GenJetAK8_eta(); // eta
    const vector<UChar_t> &GenJetAK8_hadronFlavour(); // flavour from hadron ghost clustering
    const vector<float> &GenJetAK8_mass(); // mass
    const vector<LorentzVector> &GenJetAK8_p4(); // from GenJetAK8_pt,eta,phi,mass
    const vector<int> &GenJetAK8_partonFlavour(); // flavour from parton matching
    const vector<float> &GenJetAK8_phi(); // phi
    const vector<float> &GenJetAK8_pt(); // pt
    const vector<float> &GenJet_eta(); // eta
    const vector<UChar_t> &GenJet_hadronFlavour(); // flavour from hadron ghost clustering
    const vector<float> &GenJet_mass(); // mass
    const vector<LorentzVector> &GenJet_p4(); // from GenJet_pt,eta,phi,mass
    const vector<int> &GenJet_partonFlavour(); // flavour from parton matching
    const vector<float> &GenJet_phi(); // phi
    const vector<float> &GenJet_pt(); // pt
    const float &GenMET_phi(); // phi
    const float &GenMET_pt(); // pt
    const vector<float> &GenPart_eta(); // eta
    const vector<int> &GenPart_genPartIdxMother(); // index of the mother particle
    const vector<float> &GenPart_mass(); // Mass stored for all particles with mass > 10 GeV and photons with mass > 1 GeV. For other particles you can lookup from PDGID
    const vector<LorentzVector> &GenPart_p4(); // from GenPart_pt,eta,phi,mass
    const vector<int> &GenPart_pdgId(); // PDG id
    const vector<float> &GenPart_phi(); // phi
    const vector<float> &GenPart_pt(); // pt
    const vector<int> &GenPart_status(); // Particle status. 1=stable
    const vector<int> &GenPart_statusFlags(); // gen status flags stored bitwise, bits are: 0 : isPrompt, 1 : isDecayedLeptonHadron, 2 : isTauDecayProduct, 3 : isPromptTauDecayProduct, 4 : isDirectTauDecayProduct, 5 : isDirectPromptTauDecayProduct, 6 : isDirectHadronDecayProduct, 7 : isHardProcess, 8 : fromHardProcess, 9 : isHardProcessTauDecayProduct, 10 : isDirectHardProcessTauDecayProduct, 11 : fromHardProcessBeforeFSR, 12 : isFirstCopy, 13 : isLastCopy, 14 : isLastCopyBeforeFSR, 
    const vector<int> &GenVisTau_charge(); // charge
    const vector<float> &GenVisTau_eta(); // eta
    const vector<int> &GenVisTau_genPartIdxMother(); // index of the mother particle
    const vector<float> &GenVisTau_mass(); // mass
    const vector<LorentzVector> &GenVisTau_p4(); // from GenVisTau_pt,eta,phi,mass
    const vector<float> &GenVisTau_phi(); // phi
    const vector<float> &GenVisTau_pt(); // pt
    const vector<int> &GenVisTau_status(); // Hadronic tau decay mode. 0=OneProng0PiZero, 1=OneProng1PiZero, 2=OneProng2PiZero, 10=ThreeProng0PiZero, 11=ThreeProng1PiZero, 15=Other
    const float &Generator_binvar(); // MC generation binning value
    const int &Generator_id1(); // id of first parton
    const int &Generator_id2(); // id of second parton
    const float &Generator_scalePDF(); // Q2 scale for PDF
    const float &Generator_weight(); // MC generator weight
    const float &Generator_x1(); // x1 fraction of proton momentum carried by the first parton
    const float &Generator_x2(); // x2 fraction of proton momentum carried by the second parton
    const float &Generator_xpdf1(); // x*pdf(x) for the first parton
    const float &Generator_xpdf2(); // x*pdf(x) for the second parton
    const bool &HLT_AK4CaloJet100(); // Trigger/flag bit
    const bool &HLT_AK4CaloJet120(); // Trigger/flag bit
    const bool &HLT_AK4CaloJet30(); // Trigger/flag bit
    const bool &HLT_AK4CaloJet40(); // Trigger/flag bit
    const bool &HLT_AK4CaloJet50(); // Trigger/flag bit
    const bool &HLT_AK4CaloJet80(); // Trigger/flag bit
    const bool &HLT_AK4PFJet100(); // Trigger/flag bit
    const bool &HLT_AK4PFJet120(); // Trigger/flag bit
    const bool &HLT_AK4PFJet30(); // Trigger/flag bit
    const bool &HLT_AK4PFJet50(); // Trigger/flag bit
    const bool &HLT_AK4PFJet80(); // Trigger/flag bit
    const bool &HLT_AK8PFHT750_TrimMass50(); // Trigger/flag bit
    const bool &HLT_AK8PFHT800_TrimMass50(); // Trigger/flag bit
    const bool &HLT_AK8PFHT850_TrimMass50(); // Trigger/flag bit
    const bool &HLT_AK8PFHT900_TrimMass50(); // Trigger/flag bit
    const bool &HLT_AK8PFJet140(); // Trigger/flag bit
    const bool &HLT_AK8PFJet200(); // Trigger/flag bit
    const bool &HLT_AK8PFJet260(); // Trigger/flag bit
    const bool &HLT_AK8PFJet320(); // Trigger/flag bit
    const bool &HLT_AK8PFJet330_PFAK8BTagCSV_p1(); // Trigger/flag bit
    const bool &HLT_AK8PFJet330_PFAK8BTagCSV_p17(); // Trigger/flag bit
    const bool &HLT_AK8PFJet360_TrimMass30(); // Trigger/flag bit
    const bool &HLT_AK8PFJet380_TrimMass30(); // Trigger/flag bit
    const bool &HLT_AK8PFJet40(); // Trigger/flag bit
    const bool &HLT_AK8PFJet400(); // Trigger/flag bit
    const bool &HLT_AK8PFJet400_TrimMass30(); // Trigger/flag bit
    const bool &HLT_AK8PFJet420_TrimMass30(); // Trigger/flag bit
    const bool &HLT_AK8PFJet450(); // Trigger/flag bit
    const bool &HLT_AK8PFJet500(); // Trigger/flag bit
    const bool &HLT_AK8PFJet550(); // Trigger/flag bit
    const bool &HLT_AK8PFJet60(); // Trigger/flag bit
    const bool &HLT_AK8PFJet80(); // Trigger/flag bit
    const bool &HLT_AK8PFJetFwd140(); // Trigger/flag bit
    const bool &HLT_AK8PFJetFwd200(); // Trigger/flag bit
    const bool &HLT_AK8PFJetFwd260(); // Trigger/flag bit
    const bool &HLT_AK8PFJetFwd320(); // Trigger/flag bit
    const bool &HLT_AK8PFJetFwd40(); // Trigger/flag bit
    const bool &HLT_AK8PFJetFwd400(); // Trigger/flag bit
    const bool &HLT_AK8PFJetFwd450(); // Trigger/flag bit
    const bool &HLT_AK8PFJetFwd500(); // Trigger/flag bit
    const bool &HLT_AK8PFJetFwd60(); // Trigger/flag bit
    const bool &HLT_AK8PFJetFwd80(); // Trigger/flag bit
    const bool &HLT_BTagMu_AK4DiJet110_Mu5(); // Trigger/flag bit
    const bool &HLT_BTagMu_AK4DiJet170_Mu5(); // Trigger/flag bit
    const bool &HLT_BTagMu_AK4DiJet20_Mu5(); // Trigger/flag bit
    const bool &HLT_BTagMu_AK4DiJet40_Mu5(); // Trigger/flag bit
    const bool &HLT_BTagMu_AK4DiJet70_Mu5(); // Trigger/flag bit
    const bool &HLT_BTagMu_AK4Jet300_Mu5(); // Trigger/flag bit
    const bool &HLT_BTagMu_AK8DiJet170_Mu5(); // Trigger/flag bit
    const bool &HLT_BTagMu_AK8Jet300_Mu5(); // Trigger/flag bit
    const bool &HLT_CaloJet500_NoJetID(); // Trigger/flag bit
    const bool &HLT_CaloJet550_NoJetID(); // Trigger/flag bit
    const bool &HLT_CaloMET100_HBHECleaned(); // Trigger/flag bit
    const bool &HLT_CaloMET100_NotCleaned(); // Trigger/flag bit
    const bool &HLT_CaloMET110_NotCleaned(); // Trigger/flag bit
    const bool &HLT_CaloMET250_HBHECleaned(); // Trigger/flag bit
    const bool &HLT_CaloMET250_NotCleaned(); // Trigger/flag bit
    const bool &HLT_CaloMET300_HBHECleaned(); // Trigger/flag bit
    const bool &HLT_CaloMET350_HBHECleaned(); // Trigger/flag bit
    const bool &HLT_CaloMET70_HBHECleaned(); // Trigger/flag bit
    const bool &HLT_CaloMET80_HBHECleaned(); // Trigger/flag bit
    const bool &HLT_CaloMET80_NotCleaned(); // Trigger/flag bit
    const bool &HLT_CaloMET90_HBHECleaned(); // Trigger/flag bit
    const bool &HLT_CaloMET90_NotCleaned(); // Trigger/flag bit
    const bool &HLT_CaloMHT90(); // Trigger/flag bit
    const bool &HLT_DiEle27_WPTightCaloOnly_L1DoubleEG(); // Trigger/flag bit
    const bool &HLT_DiJet110_35_Mjj650_PFMET110(); // Trigger/flag bit
    const bool &HLT_DiJet110_35_Mjj650_PFMET120(); // Trigger/flag bit
    const bool &HLT_DiJet110_35_Mjj650_PFMET130(); // Trigger/flag bit
    const bool &HLT_DiMu9_Ele9_CaloIdL_TrackIdL(); // Trigger/flag bit
    const bool &HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ(); // Trigger/flag bit
    const bool &HLT_DiPFJet15_FBEta3_NoCaloMatched(); // Trigger/flag bit
    const bool &HLT_DiPFJet15_NoCaloMatched(); // Trigger/flag bit
    const bool &HLT_DiPFJet25_FBEta3_NoCaloMatched(); // Trigger/flag bit
    const bool &HLT_DiPFJet25_NoCaloMatched(); // Trigger/flag bit
    const bool &HLT_DiPFJetAve100_HFJEC(); // Trigger/flag bit
    const bool &HLT_DiPFJetAve140(); // Trigger/flag bit
    const bool &HLT_DiPFJetAve15_HFJEC(); // Trigger/flag bit
    const bool &HLT_DiPFJetAve160_HFJEC(); // Trigger/flag bit
    const bool &HLT_DiPFJetAve200(); // Trigger/flag bit
    const bool &HLT_DiPFJetAve220_HFJEC(); // Trigger/flag bit
    const bool &HLT_DiPFJetAve25_HFJEC(); // Trigger/flag bit
    const bool &HLT_DiPFJetAve260(); // Trigger/flag bit
    const bool &HLT_DiPFJetAve300_HFJEC(); // Trigger/flag bit
    const bool &HLT_DiPFJetAve320(); // Trigger/flag bit
    const bool &HLT_DiPFJetAve35_HFJEC(); // Trigger/flag bit
    const bool &HLT_DiPFJetAve40(); // Trigger/flag bit
    const bool &HLT_DiPFJetAve400(); // Trigger/flag bit
    const bool &HLT_DiPFJetAve500(); // Trigger/flag bit
    const bool &HLT_DiPFJetAve60(); // Trigger/flag bit
    const bool &HLT_DiPFJetAve60_HFJEC(); // Trigger/flag bit
    const bool &HLT_DiPFJetAve80(); // Trigger/flag bit
    const bool &HLT_DiPFJetAve80_HFJEC(); // Trigger/flag bit
    const bool &HLT_DiSC30_18_EIso_AND_HE_Mass70(); // Trigger/flag bit
    const bool &HLT_Dimuon0_Jpsi(); // Trigger/flag bit
    const bool &HLT_Dimuon0_Jpsi3p5_Muon2(); // Trigger/flag bit
    const bool &HLT_Dimuon0_Jpsi_L1_4R_0er1p5R(); // Trigger/flag bit
    const bool &HLT_Dimuon0_Jpsi_L1_NoOS(); // Trigger/flag bit
    const bool &HLT_Dimuon0_Jpsi_NoVertexing(); // Trigger/flag bit
    const bool &HLT_Dimuon0_Jpsi_NoVertexing_L1_4R_0er1p5R(); // Trigger/flag bit
    const bool &HLT_Dimuon0_Jpsi_NoVertexing_NoOS(); // Trigger/flag bit
    const bool &HLT_Dimuon0_LowMass(); // Trigger/flag bit
    const bool &HLT_Dimuon0_LowMass_L1_0er1p5(); // Trigger/flag bit
    const bool &HLT_Dimuon0_LowMass_L1_0er1p5R(); // Trigger/flag bit
    const bool &HLT_Dimuon0_LowMass_L1_4(); // Trigger/flag bit
    const bool &HLT_Dimuon0_LowMass_L1_4R(); // Trigger/flag bit
    const bool &HLT_Dimuon0_LowMass_L1_TM530(); // Trigger/flag bit
    const bool &HLT_Dimuon0_Upsilon_L1_4p5(); // Trigger/flag bit
    const bool &HLT_Dimuon0_Upsilon_L1_4p5NoOS(); // Trigger/flag bit
    const bool &HLT_Dimuon0_Upsilon_L1_4p5er2p0(); // Trigger/flag bit
    const bool &HLT_Dimuon0_Upsilon_L1_4p5er2p0M(); // Trigger/flag bit
    const bool &HLT_Dimuon0_Upsilon_L1_5(); // Trigger/flag bit
    const bool &HLT_Dimuon0_Upsilon_L1_5M(); // Trigger/flag bit
    const bool &HLT_Dimuon0_Upsilon_Muon_L1_TM0(); // Trigger/flag bit
    const bool &HLT_Dimuon0_Upsilon_Muon_NoL1Mass(); // Trigger/flag bit
    const bool &HLT_Dimuon0_Upsilon_NoVertexing(); // Trigger/flag bit
    const bool &HLT_Dimuon10_PsiPrime_Barrel_Seagulls(); // Trigger/flag bit
    const bool &HLT_Dimuon10_Upsilon_Barrel_Seagulls(); // Trigger/flag bit
    const bool &HLT_Dimuon12_Upsilon_eta1p5(); // Trigger/flag bit
    const bool &HLT_Dimuon14_Phi_Barrel_Seagulls(); // Trigger/flag bit
    const bool &HLT_Dimuon18_PsiPrime(); // Trigger/flag bit
    const bool &HLT_Dimuon18_PsiPrime_noCorrL1(); // Trigger/flag bit
    const bool &HLT_Dimuon20_Jpsi_Barrel_Seagulls(); // Trigger/flag bit
    const bool &HLT_Dimuon24_Phi_noCorrL1(); // Trigger/flag bit
    const bool &HLT_Dimuon24_Upsilon_noCorrL1(); // Trigger/flag bit
    const bool &HLT_Dimuon25_Jpsi(); // Trigger/flag bit
    const bool &HLT_Dimuon25_Jpsi_noCorrL1(); // Trigger/flag bit
    const bool &HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55(); // Trigger/flag bit
    const bool &HLT_Diphoton30EB_18EB_R9Id_OR_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55(); // Trigger/flag bit
    const bool &HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55(); // Trigger/flag bit
    const bool &HLT_Diphoton30PV_18PV_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55(); // Trigger/flag bit
    const bool &HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_NoPixelVeto_Mass55(); // Trigger/flag bit
    const bool &HLT_Diphoton30_18_PVrealAND_R9Id_AND_IsoCaloId_AND_HE_R9Id_PixelVeto_Mass55(); // Trigger/flag bit
    const bool &HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass90(); // Trigger/flag bit
    const bool &HLT_Diphoton30_22_R9Id_OR_IsoCaloId_AND_HE_R9Id_Mass95(); // Trigger/flag bit
    const bool &HLT_DoubleEle24_eta2p1_WPTight_Gsf(); // Trigger/flag bit
    const bool &HLT_DoubleEle25_CaloIdL_MW(); // Trigger/flag bit
    const bool &HLT_DoubleEle27_CaloIdL_MW(); // Trigger/flag bit
    const bool &HLT_DoubleEle33_CaloIdL_MW(); // Trigger/flag bit
    const bool &HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_DZ_PFHT350(); // Trigger/flag bit
    const bool &HLT_DoubleEle8_CaloIdM_TrackIdM_Mass8_PFHT350(); // Trigger/flag bit
    const bool &HLT_DoubleIsoMu20_eta2p1(); // Trigger/flag bit
    const bool &HLT_DoubleIsoMu24_eta2p1(); // Trigger/flag bit
    const bool &HLT_DoubleL2Mu50(); // Trigger/flag bit
    const bool &HLT_DoubleLooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg(); // Trigger/flag bit
    const bool &HLT_DoubleLooseChargedIsoPFTau35_Trk1_eta2p1_Reg(); // Trigger/flag bit
    const bool &HLT_DoubleLooseChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg(); // Trigger/flag bit
    const bool &HLT_DoubleLooseChargedIsoPFTau40_Trk1_eta2p1_Reg(); // Trigger/flag bit
    const bool &HLT_DoubleMediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg(); // Trigger/flag bit
    const bool &HLT_DoubleMediumChargedIsoPFTau35_Trk1_eta2p1_Reg(); // Trigger/flag bit
    const bool &HLT_DoubleMediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg(); // Trigger/flag bit
    const bool &HLT_DoubleMediumChargedIsoPFTau40_Trk1_eta2p1_Reg(); // Trigger/flag bit
    const bool &HLT_DoubleMu20_7_Mass0to30_L1_DM4(); // Trigger/flag bit
    const bool &HLT_DoubleMu20_7_Mass0to30_L1_DM4EG(); // Trigger/flag bit
    const bool &HLT_DoubleMu20_7_Mass0to30_Photon23(); // Trigger/flag bit
    const bool &HLT_DoubleMu2_Jpsi_DoubleTkMu0_Phi(); // Trigger/flag bit
    const bool &HLT_DoubleMu2_Jpsi_DoubleTrk1_Phi(); // Trigger/flag bit
    const bool &HLT_DoubleMu3_DCA_PFMET50_PFMHT60(); // Trigger/flag bit
    const bool &HLT_DoubleMu3_DZ_PFMET50_PFMHT60(); // Trigger/flag bit
    const bool &HLT_DoubleMu3_DZ_PFMET70_PFMHT70(); // Trigger/flag bit
    const bool &HLT_DoubleMu3_DZ_PFMET90_PFMHT90(); // Trigger/flag bit
    const bool &HLT_DoubleMu3_Trk_Tau3mu(); // Trigger/flag bit
    const bool &HLT_DoubleMu3_Trk_Tau3mu_NoL1Mass(); // Trigger/flag bit
    const bool &HLT_DoubleMu43NoFiltersNoVtx(); // Trigger/flag bit
    const bool &HLT_DoubleMu48NoFiltersNoVtx(); // Trigger/flag bit
    const bool &HLT_DoubleMu4_3_Bs(); // Trigger/flag bit
    const bool &HLT_DoubleMu4_3_Jpsi_Displaced(); // Trigger/flag bit
    const bool &HLT_DoubleMu4_JpsiTrkTrk_Displaced(); // Trigger/flag bit
    const bool &HLT_DoubleMu4_JpsiTrk_Displaced(); // Trigger/flag bit
    const bool &HLT_DoubleMu4_Jpsi_Displaced(); // Trigger/flag bit
    const bool &HLT_DoubleMu4_Jpsi_NoVertexing(); // Trigger/flag bit
    const bool &HLT_DoubleMu4_LowMassNonResonantTrk_Displaced(); // Trigger/flag bit
    const bool &HLT_DoubleMu4_Mass8_DZ_PFHT350(); // Trigger/flag bit
    const bool &HLT_DoubleMu4_PsiPrimeTrk_Displaced(); // Trigger/flag bit
    const bool &HLT_DoubleMu8_Mass8_PFHT350(); // Trigger/flag bit
    const bool &HLT_DoublePFJets100MaxDeta1p6_DoubleCaloBTagCSV_p33(); // Trigger/flag bit
    const bool &HLT_DoublePFJets100_CaloBTagCSV_p33(); // Trigger/flag bit
    const bool &HLT_DoublePFJets116MaxDeta1p6_DoubleCaloBTagCSV_p33(); // Trigger/flag bit
    const bool &HLT_DoublePFJets128MaxDeta1p6_DoubleCaloBTagCSV_p33(); // Trigger/flag bit
    const bool &HLT_DoublePFJets200_CaloBTagCSV_p33(); // Trigger/flag bit
    const bool &HLT_DoublePFJets350_CaloBTagCSV_p33(); // Trigger/flag bit
    const bool &HLT_DoublePFJets40_CaloBTagCSV_p33(); // Trigger/flag bit
    const bool &HLT_DoublePhoton33_CaloIdL(); // Trigger/flag bit
    const bool &HLT_DoublePhoton70(); // Trigger/flag bit
    const bool &HLT_DoublePhoton85(); // Trigger/flag bit
    const bool &HLT_DoubleTightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg(); // Trigger/flag bit
    const bool &HLT_DoubleTightChargedIsoPFTau35_Trk1_eta2p1_Reg(); // Trigger/flag bit
    const bool &HLT_DoubleTightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg(); // Trigger/flag bit
    const bool &HLT_DoubleTightChargedIsoPFTau40_Trk1_eta2p1_Reg(); // Trigger/flag bit
    const bool &HLT_ECALHT800(); // Trigger/flag bit
    const bool &HLT_EcalCalibration(); // Trigger/flag bit
    const bool &HLT_Ele115_CaloIdVT_GsfTrkIdT(); // Trigger/flag bit
    const bool &HLT_Ele12_CaloIdL_TrackIdL_IsoVL_PFJet30(); // Trigger/flag bit
    const bool &HLT_Ele135_CaloIdVT_GsfTrkIdT(); // Trigger/flag bit
    const bool &HLT_Ele145_CaloIdVT_GsfTrkIdT(); // Trigger/flag bit
    const bool &HLT_Ele15_IsoVVVL_PFHT450(); // Trigger/flag bit
    const bool &HLT_Ele15_IsoVVVL_PFHT450_CaloBTagCSV_4p5(); // Trigger/flag bit
    const bool &HLT_Ele15_IsoVVVL_PFHT450_PFMET50(); // Trigger/flag bit
    const bool &HLT_Ele15_IsoVVVL_PFHT600(); // Trigger/flag bit
    const bool &HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL(); // Trigger/flag bit
    const bool &HLT_Ele17_CaloIdM_TrackIdM_PFJet30(); // Trigger/flag bit
    const bool &HLT_Ele200_CaloIdVT_GsfTrkIdT(); // Trigger/flag bit
    const bool &HLT_Ele20_WPLoose_Gsf(); // Trigger/flag bit
    const bool &HLT_Ele20_WPTight_Gsf(); // Trigger/flag bit
    const bool &HLT_Ele20_eta2p1_WPLoose_Gsf(); // Trigger/flag bit
    const bool &HLT_Ele23_CaloIdL_TrackIdL_IsoVL_PFJet30(); // Trigger/flag bit
    const bool &HLT_Ele23_CaloIdM_TrackIdM_PFJet30(); // Trigger/flag bit
    const bool &HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL(); // Trigger/flag bit
    const bool &HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ(); // Trigger/flag bit
    const bool &HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_CrossL1(); // Trigger/flag bit
    const bool &HLT_Ele24_eta2p1_WPTight_Gsf_LooseChargedIsoPFTau30_eta2p1_TightID_CrossL1(); // Trigger/flag bit
    const bool &HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_CrossL1(); // Trigger/flag bit
    const bool &HLT_Ele24_eta2p1_WPTight_Gsf_MediumChargedIsoPFTau30_eta2p1_TightID_CrossL1(); // Trigger/flag bit
    const bool &HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_CrossL1(); // Trigger/flag bit
    const bool &HLT_Ele24_eta2p1_WPTight_Gsf_TightChargedIsoPFTau30_eta2p1_TightID_CrossL1(); // Trigger/flag bit
    const bool &HLT_Ele250_CaloIdVT_GsfTrkIdT(); // Trigger/flag bit
    const bool &HLT_Ele27_Ele37_CaloIdL_MW(); // Trigger/flag bit
    const bool &HLT_Ele27_WPTight_Gsf(); // Trigger/flag bit
    const bool &HLT_Ele28_HighEta_SC20_Mass55(); // Trigger/flag bit
    const bool &HLT_Ele28_eta2p1_WPTight_Gsf_HT150(); // Trigger/flag bit
    const bool &HLT_Ele300_CaloIdVT_GsfTrkIdT(); // Trigger/flag bit
    const bool &HLT_Ele30_eta2p1_WPTight_Gsf_CentralPFJet35_EleCleaned(); // Trigger/flag bit
    const bool &HLT_Ele32_WPTight_Gsf(); // Trigger/flag bit
    const bool &HLT_Ele32_WPTight_Gsf_L1DoubleEG(); // Trigger/flag bit
    const bool &HLT_Ele35_WPTight_Gsf(); // Trigger/flag bit
    const bool &HLT_Ele35_WPTight_Gsf_L1EGMT(); // Trigger/flag bit
    const bool &HLT_Ele38_WPTight_Gsf(); // Trigger/flag bit
    const bool &HLT_Ele40_WPTight_Gsf(); // Trigger/flag bit
    const bool &HLT_Ele50_CaloIdVT_GsfTrkIdT_PFJet165(); // Trigger/flag bit
    const bool &HLT_Ele50_IsoVVVL_PFHT450(); // Trigger/flag bit
    const bool &HLT_Ele8_CaloIdL_TrackIdL_IsoVL_PFJet30(); // Trigger/flag bit
    const bool &HLT_Ele8_CaloIdM_TrackIdM_PFJet30(); // Trigger/flag bit
    const bool &HLT_FullTrack_Multiplicity100(); // Trigger/flag bit
    const bool &HLT_FullTrack_Multiplicity130(); // Trigger/flag bit
    const bool &HLT_FullTrack_Multiplicity155(); // Trigger/flag bit
    const bool &HLT_FullTrack_Multiplicity85(); // Trigger/flag bit
    const bool &HLT_HISinglePhoton10_Eta3p1ForPPRef(); // Trigger/flag bit
    const bool &HLT_HISinglePhoton20_Eta3p1ForPPRef(); // Trigger/flag bit
    const bool &HLT_HISinglePhoton30_Eta3p1ForPPRef(); // Trigger/flag bit
    const bool &HLT_HISinglePhoton40_Eta3p1ForPPRef(); // Trigger/flag bit
    const bool &HLT_HISinglePhoton50_Eta3p1ForPPRef(); // Trigger/flag bit
    const bool &HLT_HISinglePhoton60_Eta3p1ForPPRef(); // Trigger/flag bit
    const bool &HLT_HT300_Beamspot(); // Trigger/flag bit
    const bool &HLT_HT400_DisplacedDijet40_DisplacedTrack(); // Trigger/flag bit
    const bool &HLT_HT425(); // Trigger/flag bit
    const bool &HLT_HT430_DisplacedDijet40_DisplacedTrack(); // Trigger/flag bit
    const bool &HLT_HT430_DisplacedDijet60_DisplacedTrack(); // Trigger/flag bit
    const bool &HLT_HT430_DisplacedDijet80_DisplacedTrack(); // Trigger/flag bit
    const bool &HLT_HT450_Beamspot(); // Trigger/flag bit
    const bool &HLT_HT550_DisplacedDijet60_Inclusive(); // Trigger/flag bit
    const bool &HLT_HT550_DisplacedDijet80_Inclusive(); // Trigger/flag bit
    const bool &HLT_HT650_DisplacedDijet60_Inclusive(); // Trigger/flag bit
    const bool &HLT_HT650_DisplacedDijet80_Inclusive(); // Trigger/flag bit
    const bool &HLT_HT750_DisplacedDijet80_Inclusive(); // Trigger/flag bit
    const bool &HLT_HcalCalibration(); // Trigger/flag bit
    const bool &HLT_HcalIsolatedbunch(); // Trigger/flag bit
    const bool &HLT_HcalNZS(); // Trigger/flag bit
    const bool &HLT_HcalPhiSym(); // Trigger/flag bit
    const bool &HLT_IsoMu20(); // Trigger/flag bit
    const bool &HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_CrossL1(); // Trigger/flag bit
    const bool &HLT_IsoMu20_eta2p1_LooseChargedIsoPFTau27_eta2p1_TightID_CrossL1(); // Trigger/flag bit
    const bool &HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_CrossL1(); // Trigger/flag bit
    const bool &HLT_IsoMu20_eta2p1_MediumChargedIsoPFTau27_eta2p1_TightID_CrossL1(); // Trigger/flag bit
    const bool &HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_CrossL1(); // Trigger/flag bit
    const bool &HLT_IsoMu20_eta2p1_TightChargedIsoPFTau27_eta2p1_TightID_CrossL1(); // Trigger/flag bit
    const bool &HLT_IsoMu24(); // Trigger/flag bit
    const bool &HLT_IsoMu24_eta2p1(); // Trigger/flag bit
    const bool &HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_SingleL1(); // Trigger/flag bit
    const bool &HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau20_TightID_SingleL1(); // Trigger/flag bit
    const bool &HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1(); // Trigger/flag bit
    const bool &HLT_IsoMu24_eta2p1_LooseChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1(); // Trigger/flag bit
    const bool &HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_SingleL1(); // Trigger/flag bit
    const bool &HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau20_TightID_SingleL1(); // Trigger/flag bit
    const bool &HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1(); // Trigger/flag bit
    const bool &HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1(); // Trigger/flag bit
    const bool &HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1(); // Trigger/flag bit
    const bool &HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1(); // Trigger/flag bit
    const bool &HLT_IsoMu24_eta2p1_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr(); // Trigger/flag bit
    const bool &HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_SingleL1(); // Trigger/flag bit
    const bool &HLT_IsoMu24_eta2p1_TightChargedIsoPFTau20_TightID_SingleL1(); // Trigger/flag bit
    const bool &HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_TightID_eta2p1_Reg_CrossL1(); // Trigger/flag bit
    const bool &HLT_IsoMu24_eta2p1_TightChargedIsoPFTau35_Trk1_eta2p1_Reg_CrossL1(); // Trigger/flag bit
    const bool &HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_TightID_eta2p1_Reg_CrossL1(); // Trigger/flag bit
    const bool &HLT_IsoMu24_eta2p1_TightChargedIsoPFTau40_Trk1_eta2p1_Reg_CrossL1(); // Trigger/flag bit
    const bool &HLT_IsoMu27(); // Trigger/flag bit
    const bool &HLT_IsoMu27_LooseChargedIsoPFTau20_SingleL1(); // Trigger/flag bit
    const bool &HLT_IsoMu27_MediumChargedIsoPFTau20_SingleL1(); // Trigger/flag bit
    const bool &HLT_IsoMu27_TightChargedIsoPFTau20_SingleL1(); // Trigger/flag bit
    const bool &HLT_IsoMu30(); // Trigger/flag bit
    const bool &HLT_IsoTrackHB(); // Trigger/flag bit
    const bool &HLT_IsoTrackHE(); // Trigger/flag bit
    const bool &HLT_L1ETMHadSeeds(); // Trigger/flag bit
    const bool &HLT_L1MinimumBiasHF0OR(); // Trigger/flag bit
    const bool &HLT_L1MinimumBiasHF_OR(); // Trigger/flag bit
    const bool &HLT_L1NotBptxOR(); // Trigger/flag bit
    const bool &HLT_L1SingleMu18(); // Trigger/flag bit
    const bool &HLT_L1SingleMu25(); // Trigger/flag bit
    const bool &HLT_L1UnpairedBunchBptxMinus(); // Trigger/flag bit
    const bool &HLT_L1UnpairedBunchBptxPlus(); // Trigger/flag bit
    const bool &HLT_L1_CDC_SingleMu_3_er1p2_TOP120_DPHI2p618_3p142(); // Trigger/flag bit
    const bool &HLT_L1_DoubleJet30_Mass_Min400_Mu10(); // Trigger/flag bit
    const bool &HLT_L2Mu10(); // Trigger/flag bit
    const bool &HLT_L2Mu10_NoVertex_NoBPTX(); // Trigger/flag bit
    const bool &HLT_L2Mu10_NoVertex_NoBPTX3BX(); // Trigger/flag bit
    const bool &HLT_L2Mu40_NoVertex_3Sta_NoBPTX3BX(); // Trigger/flag bit
    const bool &HLT_L2Mu45_NoVertex_3Sta_NoBPTX3BX(); // Trigger/flag bit
    const bool &HLT_L2Mu50(); // Trigger/flag bit
    const bool &HLT_MET105_IsoTrk50(); // Trigger/flag bit
    const bool &HLT_MET120_IsoTrk50(); // Trigger/flag bit
    const bool &HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1(); // Trigger/flag bit
    const bool &HLT_MediumChargedIsoPFTau180HighPtRelaxedIso_Trk50_eta2p1_1pr(); // Trigger/flag bit
    const bool &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr(); // Trigger/flag bit
    const bool &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET100(); // Trigger/flag bit
    const bool &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET110(); // Trigger/flag bit
    const bool &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET120(); // Trigger/flag bit
    const bool &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET130(); // Trigger/flag bit
    const bool &HLT_MediumChargedIsoPFTau50_Trk30_eta2p1_1pr_MET90(); // Trigger/flag bit
    const bool &HLT_MonoCentralPFJet80_PFMETNoMu110_PFMHTNoMu110_IDTight(); // Trigger/flag bit
    const bool &HLT_MonoCentralPFJet80_PFMETNoMu120_PFMHTNoMu120_IDTight(); // Trigger/flag bit
    const bool &HLT_MonoCentralPFJet80_PFMETNoMu130_PFMHTNoMu130_IDTight(); // Trigger/flag bit
    const bool &HLT_MonoCentralPFJet80_PFMETNoMu140_PFMHTNoMu140_IDTight(); // Trigger/flag bit
    const bool &HLT_Mu10_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT350_PFMETNoMu60(); // Trigger/flag bit
    const bool &HLT_Mu12_DoublePFJets100_CaloBTagCSV_p33(); // Trigger/flag bit
    const bool &HLT_Mu12_DoublePFJets200_CaloBTagCSV_p33(); // Trigger/flag bit
    const bool &HLT_Mu12_DoublePFJets350_CaloBTagCSV_p33(); // Trigger/flag bit
    const bool &HLT_Mu12_DoublePFJets40MaxDeta1p6_DoubleCaloBTagCSV_p33(); // Trigger/flag bit
    const bool &HLT_Mu12_DoublePFJets40_CaloBTagCSV_p33(); // Trigger/flag bit
    const bool &HLT_Mu12_DoublePFJets54MaxDeta1p6_DoubleCaloBTagCSV_p33(); // Trigger/flag bit
    const bool &HLT_Mu12_DoublePFJets62MaxDeta1p6_DoubleCaloBTagCSV_p33(); // Trigger/flag bit
    const bool &HLT_Mu12_DoublePhoton20(); // Trigger/flag bit
    const bool &HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL(); // Trigger/flag bit
    const bool &HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ(); // Trigger/flag bit
    const bool &HLT_Mu15_IsoVVVL_PFHT450(); // Trigger/flag bit
    const bool &HLT_Mu15_IsoVVVL_PFHT450_CaloBTagCSV_4p5(); // Trigger/flag bit
    const bool &HLT_Mu15_IsoVVVL_PFHT450_PFMET50(); // Trigger/flag bit
    const bool &HLT_Mu15_IsoVVVL_PFHT600(); // Trigger/flag bit
    const bool &HLT_Mu17(); // Trigger/flag bit
    const bool &HLT_Mu17_Photon30_IsoCaloId(); // Trigger/flag bit
    const bool &HLT_Mu17_TrkIsoVVL(); // Trigger/flag bit
    const bool &HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL(); // Trigger/flag bit
    const bool &HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ(); // Trigger/flag bit
    const bool &HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8(); // Trigger/flag bit
    const bool &HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8(); // Trigger/flag bit
    const bool &HLT_Mu18_Mu9(); // Trigger/flag bit
    const bool &HLT_Mu18_Mu9_DZ(); // Trigger/flag bit
    const bool &HLT_Mu18_Mu9_SameSign(); // Trigger/flag bit
    const bool &HLT_Mu18_Mu9_SameSign_DZ(); // Trigger/flag bit
    const bool &HLT_Mu19(); // Trigger/flag bit
    const bool &HLT_Mu19_TrkIsoVVL(); // Trigger/flag bit
    const bool &HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL(); // Trigger/flag bit
    const bool &HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ(); // Trigger/flag bit
    const bool &HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass3p8(); // Trigger/flag bit
    const bool &HLT_Mu19_TrkIsoVVL_Mu9_TrkIsoVVL_DZ_Mass8(); // Trigger/flag bit
    const bool &HLT_Mu20(); // Trigger/flag bit
    const bool &HLT_Mu20_Mu10(); // Trigger/flag bit
    const bool &HLT_Mu20_Mu10_DZ(); // Trigger/flag bit
    const bool &HLT_Mu20_Mu10_SameSign(); // Trigger/flag bit
    const bool &HLT_Mu20_Mu10_SameSign_DZ(); // Trigger/flag bit
    const bool &HLT_Mu20_TkMu0_Phi(); // Trigger/flag bit
    const bool &HLT_Mu23_Mu12(); // Trigger/flag bit
    const bool &HLT_Mu23_Mu12_DZ(); // Trigger/flag bit
    const bool &HLT_Mu23_Mu12_SameSign(); // Trigger/flag bit
    const bool &HLT_Mu23_Mu12_SameSign_DZ(); // Trigger/flag bit
    const bool &HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL(); // Trigger/flag bit
    const bool &HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ(); // Trigger/flag bit
    const bool &HLT_Mu25_TkMu0_Onia(); // Trigger/flag bit
    const bool &HLT_Mu25_TkMu0_Phi(); // Trigger/flag bit
    const bool &HLT_Mu27(); // Trigger/flag bit
    const bool &HLT_Mu27_Ele37_CaloIdL_MW(); // Trigger/flag bit
    const bool &HLT_Mu30_TkMu0_Onia(); // Trigger/flag bit
    const bool &HLT_Mu37_Ele27_CaloIdL_MW(); // Trigger/flag bit
    const bool &HLT_Mu37_TkMu27(); // Trigger/flag bit
    const bool &HLT_Mu3_PFJet40(); // Trigger/flag bit
    const bool &HLT_Mu43NoFiltersNoVtx_Photon43_CaloIdL(); // Trigger/flag bit
    const bool &HLT_Mu48NoFiltersNoVtx_Photon48_CaloIdL(); // Trigger/flag bit
    const bool &HLT_Mu50(); // Trigger/flag bit
    const bool &HLT_Mu50_IsoVVVL_PFHT450(); // Trigger/flag bit
    const bool &HLT_Mu55(); // Trigger/flag bit
    const bool &HLT_Mu7p5_L2Mu2_Jpsi(); // Trigger/flag bit
    const bool &HLT_Mu7p5_L2Mu2_Upsilon(); // Trigger/flag bit
    const bool &HLT_Mu7p5_Track2_Jpsi(); // Trigger/flag bit
    const bool &HLT_Mu7p5_Track2_Upsilon(); // Trigger/flag bit
    const bool &HLT_Mu7p5_Track3p5_Jpsi(); // Trigger/flag bit
    const bool &HLT_Mu7p5_Track3p5_Upsilon(); // Trigger/flag bit
    const bool &HLT_Mu7p5_Track7_Jpsi(); // Trigger/flag bit
    const bool &HLT_Mu7p5_Track7_Upsilon(); // Trigger/flag bit
    const bool &HLT_Mu8(); // Trigger/flag bit
    const bool &HLT_Mu8_DiEle12_CaloIdL_TrackIdL(); // Trigger/flag bit
    const bool &HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ(); // Trigger/flag bit
    const bool &HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350(); // Trigger/flag bit
    const bool &HLT_Mu8_Ele8_CaloIdM_TrackIdM_Mass8_PFHT350_DZ(); // Trigger/flag bit
    const bool &HLT_Mu8_TrkIsoVVL(); // Trigger/flag bit
    const bool &HLT_Mu8_TrkIsoVVL_DiPFJet40_DEta3p5_MJJ750_HTT300_PFMETNoMu60(); // Trigger/flag bit
    const bool &HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL(); // Trigger/flag bit
    const bool &HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ(); // Trigger/flag bit
    const bool &HLT_OldMu100(); // Trigger/flag bit
    const bool &HLT_PFHT1050(); // Trigger/flag bit
    const bool &HLT_PFHT180(); // Trigger/flag bit
    const bool &HLT_PFHT250(); // Trigger/flag bit
    const bool &HLT_PFHT300PT30_QuadPFJet_75_60_45_40(); // Trigger/flag bit
    const bool &HLT_PFHT300PT30_QuadPFJet_75_60_45_40_TriplePFBTagCSV_3p0(); // Trigger/flag bit
    const bool &HLT_PFHT350(); // Trigger/flag bit
    const bool &HLT_PFHT350MinPFJet15(); // Trigger/flag bit
    const bool &HLT_PFHT370(); // Trigger/flag bit
    const bool &HLT_PFHT380_SixPFJet32(); // Trigger/flag bit
    const bool &HLT_PFHT380_SixPFJet32_DoublePFBTagCSV_2p2(); // Trigger/flag bit
    const bool &HLT_PFHT380_SixPFJet32_DoublePFBTagDeepCSV_2p2(); // Trigger/flag bit
    const bool &HLT_PFHT430(); // Trigger/flag bit
    const bool &HLT_PFHT430_SixPFJet40(); // Trigger/flag bit
    const bool &HLT_PFHT430_SixPFJet40_PFBTagCSV_1p5(); // Trigger/flag bit
    const bool &HLT_PFHT500_PFMET100_PFMHT100_IDTight(); // Trigger/flag bit
    const bool &HLT_PFHT500_PFMET110_PFMHT110_IDTight(); // Trigger/flag bit
    const bool &HLT_PFHT510(); // Trigger/flag bit
    const bool &HLT_PFHT590(); // Trigger/flag bit
    const bool &HLT_PFHT680(); // Trigger/flag bit
    const bool &HLT_PFHT700_PFMET85_PFMHT85_IDTight(); // Trigger/flag bit
    const bool &HLT_PFHT700_PFMET95_PFMHT95_IDTight(); // Trigger/flag bit
    const bool &HLT_PFHT780(); // Trigger/flag bit
    const bool &HLT_PFHT800_PFMET75_PFMHT75_IDTight(); // Trigger/flag bit
    const bool &HLT_PFHT800_PFMET85_PFMHT85_IDTight(); // Trigger/flag bit
    const bool &HLT_PFHT890(); // Trigger/flag bit
    const bool &HLT_PFJet140(); // Trigger/flag bit
    const bool &HLT_PFJet200(); // Trigger/flag bit
    const bool &HLT_PFJet260(); // Trigger/flag bit
    const bool &HLT_PFJet320(); // Trigger/flag bit
    const bool &HLT_PFJet40(); // Trigger/flag bit
    const bool &HLT_PFJet400(); // Trigger/flag bit
    const bool &HLT_PFJet450(); // Trigger/flag bit
    const bool &HLT_PFJet500(); // Trigger/flag bit
    const bool &HLT_PFJet550(); // Trigger/flag bit
    const bool &HLT_PFJet60(); // Trigger/flag bit
    const bool &HLT_PFJet80(); // Trigger/flag bit
    const bool &HLT_PFJetFwd140(); // Trigger/flag bit
    const bool &HLT_PFJetFwd200(); // Trigger/flag bit
    const bool &HLT_PFJetFwd260(); // Trigger/flag bit
    const bool &HLT_PFJetFwd320(); // Trigger/flag bit
    const bool &HLT_PFJetFwd40(); // Trigger/flag bit
    const bool &HLT_PFJetFwd400(); // Trigger/flag bit
    const bool &HLT_PFJetFwd450(); // Trigger/flag bit
    const bool &HLT_PFJetFwd500(); // Trigger/flag bit
    const bool &HLT_PFJetFwd60(); // Trigger/flag bit
    const bool &HLT_PFJetFwd80(); // Trigger/flag bit
    const bool &HLT_PFMET100_PFMHT100_IDTight_CaloBTagCSV_3p1(); // Trigger/flag bit
    const bool &HLT_PFMET100_PFMHT100_IDTight_PFHT60(); // Trigger/flag bit
    const bool &HLT_PFMET110_PFMHT110_IDTight(); // Trigger/flag bit
    const bool &HLT_PFMET110_PFMHT110_IDTight_CaloBTagCSV_3p1(); // Trigger/flag bit
    const bool &HLT_PFMET120_PFMHT120_IDTight(); // Trigger/flag bit
    const bool &HLT_PFMET120_PFMHT120_IDTight_CaloBTagCSV_3p1(); // Trigger/flag bit
    const bool &HLT_PFMET120_PFMHT120_IDTight_PFHT60(); // Trigger/flag bit
    const bool &HLT_PFMET130_PFMHT130_IDTight(); // Trigger/flag bit
    const bool &HLT_PFMET130_PFMHT130_IDTight_CaloBTagCSV_3p1(); // Trigger/flag bit
    const bool &HLT_PFMET140_PFMHT140_IDTight(); // Trigger/flag bit
    const bool &HLT_PFMET140_PFMHT140_IDTight_CaloBTagCSV_3p1(); // Trigger/flag bit
    const bool &HLT_PFMET200_HBHECleaned(); // Trigger/flag bit
    const bool &HLT_PFMET200_HBHE_BeamHaloCleaned(); // Trigger/flag bit
    const bool &HLT_PFMET200_NotCleaned(); // Trigger/flag bit
    const bool &HLT_PFMET250_HBHECleaned(); // Trigger/flag bit
    const bool &HLT_PFMET300_HBHECleaned(); // Trigger/flag bit
    const bool &HLT_PFMETNoMu100_PFMHTNoMu100_IDTight_PFHT60(); // Trigger/flag bit
    const bool &HLT_PFMETNoMu110_PFMHTNoMu110_IDTight(); // Trigger/flag bit
    const bool &HLT_PFMETNoMu120_PFMHTNoMu120_IDTight(); // Trigger/flag bit
    const bool &HLT_PFMETNoMu120_PFMHTNoMu120_IDTight_PFHT60(); // Trigger/flag bit
    const bool &HLT_PFMETNoMu130_PFMHTNoMu130_IDTight(); // Trigger/flag bit
    const bool &HLT_PFMETNoMu140_PFMHTNoMu140_IDTight(); // Trigger/flag bit
    const bool &HLT_PFMETTypeOne100_PFMHT100_IDTight_PFHT60(); // Trigger/flag bit
    const bool &HLT_PFMETTypeOne110_PFMHT110_IDTight(); // Trigger/flag bit
    const bool &HLT_PFMETTypeOne120_PFMHT120_IDTight(); // Trigger/flag bit
    const bool &HLT_PFMETTypeOne120_PFMHT120_IDTight_PFHT60(); // Trigger/flag bit
    const bool &HLT_PFMETTypeOne130_PFMHT130_IDTight(); // Trigger/flag bit
    const bool &HLT_PFMETTypeOne140_PFMHT140_IDTight(); // Trigger/flag bit
    const bool &HLT_PFMETTypeOne200_HBHE_BeamHaloCleaned(); // Trigger/flag bit
    const bool &HLT_Photon120(); // Trigger/flag bit
    const bool &HLT_Photon120_R9Id90_HE10_IsoM(); // Trigger/flag bit
    const bool &HLT_Photon150(); // Trigger/flag bit
    const bool &HLT_Photon165_R9Id90_HE10_IsoM(); // Trigger/flag bit
    const bool &HLT_Photon175(); // Trigger/flag bit
    const bool &HLT_Photon200(); // Trigger/flag bit
    const bool &HLT_Photon20_HoverELoose(); // Trigger/flag bit
    const bool &HLT_Photon25(); // Trigger/flag bit
    const bool &HLT_Photon300_NoHE(); // Trigger/flag bit
    const bool &HLT_Photon30_HoverELoose(); // Trigger/flag bit
    const bool &HLT_Photon33(); // Trigger/flag bit
    const bool &HLT_Photon40_HoverELoose(); // Trigger/flag bit
    const bool &HLT_Photon50(); // Trigger/flag bit
    const bool &HLT_Photon50_HoverELoose(); // Trigger/flag bit
    const bool &HLT_Photon50_R9Id90_HE10_IsoM(); // Trigger/flag bit
    const bool &HLT_Photon50_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3_PFMET50(); // Trigger/flag bit
    const bool &HLT_Photon60_HoverELoose(); // Trigger/flag bit
    const bool &HLT_Photon60_R9Id90_CaloIdL_IsoL(); // Trigger/flag bit
    const bool &HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL(); // Trigger/flag bit
    const bool &HLT_Photon60_R9Id90_CaloIdL_IsoL_DisplacedIdL_PFHT350MinPFJet15(); // Trigger/flag bit
    const bool &HLT_Photon75(); // Trigger/flag bit
    const bool &HLT_Photon75_R9Id90_HE10_IsoM(); // Trigger/flag bit
    const bool &HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ300DEta3(); // Trigger/flag bit
    const bool &HLT_Photon75_R9Id90_HE10_IsoM_EBOnly_PFJetsMJJ600DEta3(); // Trigger/flag bit
    const bool &HLT_Photon90(); // Trigger/flag bit
    const bool &HLT_Photon90_CaloIdL_PFHT700(); // Trigger/flag bit
    const bool &HLT_Photon90_R9Id90_HE10_IsoM(); // Trigger/flag bit
    const bool &HLT_Physics(); // Trigger/flag bit
    const bool &HLT_Physics_part0(); // Trigger/flag bit
    const bool &HLT_Physics_part1(); // Trigger/flag bit
    const bool &HLT_Physics_part2(); // Trigger/flag bit
    const bool &HLT_Physics_part3(); // Trigger/flag bit
    const bool &HLT_Physics_part4(); // Trigger/flag bit
    const bool &HLT_Physics_part5(); // Trigger/flag bit
    const bool &HLT_Physics_part6(); // Trigger/flag bit
    const bool &HLT_Physics_part7(); // Trigger/flag bit
    const bool &HLT_QuadPFJet103_88_75_15(); // Trigger/flag bit
    const bool &HLT_QuadPFJet103_88_75_15_BTagCSV_p013_VBF2(); // Trigger/flag bit
    const bool &HLT_QuadPFJet103_88_75_15_DoubleBTagCSV_p013_p08_VBF1(); // Trigger/flag bit
    const bool &HLT_QuadPFJet105_88_76_15(); // Trigger/flag bit
    const bool &HLT_QuadPFJet105_88_76_15_BTagCSV_p013_VBF2(); // Trigger/flag bit
    const bool &HLT_QuadPFJet105_90_76_15_DoubleBTagCSV_p013_p08_VBF1(); // Trigger/flag bit
    const bool &HLT_QuadPFJet111_90_80_15(); // Trigger/flag bit
    const bool &HLT_QuadPFJet111_90_80_15_BTagCSV_p013_VBF2(); // Trigger/flag bit
    const bool &HLT_QuadPFJet111_90_80_15_DoubleBTagCSV_p013_p08_VBF1(); // Trigger/flag bit
    const bool &HLT_QuadPFJet98_83_71_15(); // Trigger/flag bit
    const bool &HLT_QuadPFJet98_83_71_15_BTagCSV_p013_VBF2(); // Trigger/flag bit
    const bool &HLT_QuadPFJet98_83_71_15_DoubleBTagCSV_p013_p08_VBF1(); // Trigger/flag bit
    const bool &HLT_Random(); // Trigger/flag bit
    const bool &HLT_Rsq0p35(); // Trigger/flag bit
    const bool &HLT_Rsq0p40(); // Trigger/flag bit
    const bool &HLT_RsqMR300_Rsq0p09_MR200(); // Trigger/flag bit
    const bool &HLT_RsqMR300_Rsq0p09_MR200_4jet(); // Trigger/flag bit
    const bool &HLT_RsqMR320_Rsq0p09_MR200(); // Trigger/flag bit
    const bool &HLT_RsqMR320_Rsq0p09_MR200_4jet(); // Trigger/flag bit
    const bool &HLT_SingleJet30_Mu12_SinglePFJet40(); // Trigger/flag bit
    const bool &HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15(); // Trigger/flag bit
    const bool &HLT_Tau3Mu_Mu7_Mu1_TkMu1_IsoTau15_Charge1(); // Trigger/flag bit
    const bool &HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15(); // Trigger/flag bit
    const bool &HLT_Tau3Mu_Mu7_Mu1_TkMu1_Tau15_Charge1(); // Trigger/flag bit
    const bool &HLT_TkMu100(); // Trigger/flag bit
    const bool &HLT_Trimuon5_3p5_2_Upsilon_Muon(); // Trigger/flag bit
    const bool &HLT_TripleJet110_35_35_Mjj650_PFMET110(); // Trigger/flag bit
    const bool &HLT_TripleJet110_35_35_Mjj650_PFMET120(); // Trigger/flag bit
    const bool &HLT_TripleJet110_35_35_Mjj650_PFMET130(); // Trigger/flag bit
    const bool &HLT_TripleMu_10_5_5_DZ(); // Trigger/flag bit
    const bool &HLT_TripleMu_12_10_5(); // Trigger/flag bit
    const bool &HLT_TripleMu_5_3_3_Mass3p8to60_DCA(); // Trigger/flag bit
    const bool &HLT_TripleMu_5_3_3_Mass3p8to60_DZ(); // Trigger/flag bit
    const bool &HLT_TriplePhoton_20_20_20_CaloIdLV2(); // Trigger/flag bit
    const bool &HLT_TriplePhoton_20_20_20_CaloIdLV2_R9IdVL(); // Trigger/flag bit
    const bool &HLT_TriplePhoton_30_30_10_CaloIdLV2(); // Trigger/flag bit
    const bool &HLT_TriplePhoton_30_30_10_CaloIdLV2_R9IdVL(); // Trigger/flag bit
    const bool &HLT_TriplePhoton_35_35_5_CaloIdLV2_R9IdVL(); // Trigger/flag bit
    const bool &HLT_TrkMu12_DoubleTrkMu5NoFiltersNoVtx(); // Trigger/flag bit
    const bool &HLT_TrkMu16_DoubleTrkMu6NoFiltersNoVtx(); // Trigger/flag bit
    const bool &HLT_TrkMu17_DoubleTrkMu8NoFiltersNoVtx(); // Trigger/flag bit
    const bool &HLT_UncorrectedJetE30_NoBPTX(); // Trigger/flag bit
    const bool &HLT_UncorrectedJetE30_NoBPTX3BX(); // Trigger/flag bit
    const bool &HLT_UncorrectedJetE60_NoBPTX3BX(); // Trigger/flag bit
    const bool &HLT_UncorrectedJetE70_NoBPTX3BX(); // Trigger/flag bit
    const bool &HLT_VBF_DoubleLooseChargedIsoPFTau20_Trk1_eta2p1_Reg(); // Trigger/flag bit
    const bool &HLT_VBF_DoubleMediumChargedIsoPFTau20_Trk1_eta2p1_Reg(); // Trigger/flag bit
    const bool &HLT_VBF_DoubleTightChargedIsoPFTau20_Trk1_eta2p1_Reg(); // Trigger/flag bit
    const bool &HLT_ZeroBias(); // Trigger/flag bit
    const bool &HLT_ZeroBias_FirstBXAfterTrain(); // Trigger/flag bit
    const bool &HLT_ZeroBias_FirstCollisionAfterAbortGap(); // Trigger/flag bit
    const bool &HLT_ZeroBias_FirstCollisionInTrain(); // Trigger/flag bit
    const bool &HLT_ZeroBias_IsolatedBunches(); // Trigger/flag bit
    const bool &HLT_ZeroBias_LastCollisionInTrain(); // Trigger/flag bit
    const bool &HLT_ZeroBias_part0(); // Trigger/flag bit
    const bool &HLT_ZeroBias_part1(); // Trigger/flag bit
    const bool &HLT_ZeroBias_part2(); // Trigger/flag bit
    const bool &HLT_ZeroBias_part3(); // Trigger/flag bit
    const bool &HLT_ZeroBias_part4(); // Trigger/flag bit
    const bool &HLT_ZeroBias_part5(); // Trigger/flag bit
    const bool &HLT_ZeroBias_part6(); // Trigger/flag bit
    const bool &HLT_ZeroBias_part7(); // Trigger/flag bit
    const bool &HLTriggerFinalPath(); // Trigger/flag bit
    const bool &HLTriggerFirstPath(); // Trigger/flag bit
    const vector<float> &IsoTrack_dxy(); // dxy (with sign) wrt first PV, in cm
    const vector<float> &IsoTrack_dz(); // dz (with sign) wrt first PV, in cm
    const vector<float> &IsoTrack_eta(); // eta
    const vector<bool> &IsoTrack_isHighPurityTrack(); // track is high purity
    const vector<bool> &IsoTrack_isPFcand(); // if isolated track is a PF candidate
    const vector<float> &IsoTrack_miniPFRelIso_all(); // mini PF relative isolation, total (with scaled rho*EA PU corrections)
    const vector<float> &IsoTrack_miniPFRelIso_chg(); // mini PF relative isolation, charged component
    const vector<int> &IsoTrack_pdgId(); // PDG id of PF cand
    const vector<float> &IsoTrack_pfRelIso03_all(); // PF relative isolation dR=0.3, total (deltaBeta corrections)
    const vector<float> &IsoTrack_pfRelIso03_chg(); // PF relative isolation dR=0.3, charged component
    const vector<float> &IsoTrack_phi(); // phi
    const vector<float> &IsoTrack_pt(); // pt
    const vector<float> &Jet_area(); // jet catchment area, for JECs
    const vector<float> &Jet_bReg(); // pt corrected with b-jet regression
    const vector<float> &Jet_btagCMVA(); // CMVA V2 btag discriminator
    const vector<float> &Jet_btagCSVV2(); //  pfCombinedInclusiveSecondaryVertexV2 b-tag discriminator (aka CSVV2)
    const vector<float> &Jet_btagDeepB(); // DeepCSV b+bb tag discriminator
    const vector<float> &Jet_btagDeepC(); // DeepCSV charm btag discriminator
    const vector<float> &Jet_btagDeepFlavB(); // DeepFlavour b+bb tag discriminator
    const vector<float> &Jet_chEmEF(); // charged Electromagnetic Energy Fraction
    const vector<float> &Jet_chHEF(); // charged Hadron Energy Fraction
    const vector<UChar_t> &Jet_cleanmask(); // simple cleaning mask with priority to leptons
    const vector<int> &Jet_electronIdx1(); // index of first matching electron
    const vector<int> &Jet_electronIdx2(); // index of second matching electron
    const vector<float> &Jet_eta(); // eta
    const vector<int> &Jet_genJetIdx(); // index of matched gen jet
    const vector<int> &Jet_hadronFlavour(); // flavour from hadron ghost clustering
    const vector<int> &Jet_jetId(); // Jet ID flags bit1 is loose (always false in 2017 since it does not exist), bit2 is tight, bit3 is tightLepVeto
    const vector<float> &Jet_mass(); // mass
    const vector<int> &Jet_muonIdx1(); // index of first matching muon
    const vector<int> &Jet_muonIdx2(); // index of second matching muon
    const vector<int> &Jet_nConstituents(); // Number of particles in the jet
    const vector<int> &Jet_nElectrons(); // number of electrons in the jet
    const vector<int> &Jet_nMuons(); // number of muons in the jet
    const vector<float> &Jet_neEmEF(); // neutral Electromagnetic Energy Fraction
    const vector<float> &Jet_neHEF(); // neutral Hadron Energy Fraction
    const vector<LorentzVector> &Jet_p4(); // from Jet_pt,eta,phi,mass
    const vector<int> &Jet_partonFlavour(); // flavour from parton matching
    const vector<float> &Jet_phi(); // phi
    const vector<float> &Jet_pt(); // pt
    const vector<int> &Jet_puId(); // Pilup ID flags
    const vector<float> &Jet_qgl(); // Quark vs Gluon likelihood discriminator
    const vector<float> &Jet_rawFactor(); // 1 - Factor to get back to raw pT
    const bool &L1simulation_step(); // Trigger/flag bit
    const vector<float> &LHEPart_eta(); // Pseodorapidity of LHE particles
    const vector<float> &LHEPart_mass(); // Mass of LHE particles
    const vector<LorentzVector> &LHEPart_p4(); // from LHEPart_pt,eta,phi,mass
    const vector<int> &LHEPart_pdgId(); // PDG ID of LHE particles
    const vector<float> &LHEPart_phi(); // Phi of LHE particles
    const vector<float> &LHEPart_pt(); // Pt of LHE particles
    const vector<float> &LHEPdfWeight(); // LHE pdf variation weights (w_var / w_nominal) for LHA IDs 91400 - 91432
    const vector<float> &LHEScaleWeight(); // LHE scale variation weights (w_var / w_nominal); [0] is muR=0.50000E+00 muF=0.50000E+00 ; [1] is muR=0.50000E+00 muF=0.10000E+01 ; [2] is muR=0.50000E+00 muF=0.20000E+01 ; [3] is muR=0.10000E+01 muF=0.50000E+00 ; [4] is muR=0.10000E+01 muF=0.10000E+01 ; [5] is muR=0.10000E+01 muF=0.20000E+01 ; [6] is muR=0.20000E+01 muF=0.50000E+00 ; [7] is muR=0.20000E+01 muF=0.10000E+01 ; [8] is muR=0.20000E+01 muF=0.20000E+01 
    const float &LHEWeight_originalXWGTUP(); // Nominal event weight in the LHE file
    const float &LHE_HT(); // HT, scalar sum of parton pTs at LHE step
    const float &LHE_HTIncoming(); // HT, scalar sum of parton pTs at LHE step, restricted to partons
    const UChar_t &LHE_Nb(); // Number of b partons at LHE step
    const UChar_t &LHE_Nc(); // Number of c partons at LHE step
    const UChar_t &LHE_Nglu(); // Number of gluon partons at LHE step
    const UChar_t &LHE_Njets(); // Number of jets (partons) at LHE step
    const UChar_t &LHE_NpLO(); // number of partons at LO
    const UChar_t &LHE_NpNLO(); // number of partons at NLO
    const UChar_t &LHE_Nuds(); // Number of u,d,s partons at LHE step
    const float &LHE_Vpt(); // pT of the W or Z boson at LHE step
    const float &MET_MetUnclustEnUpDeltaX(); // Delta (METx_mod-METx) Unclustered Energy Up
    const float &MET_MetUnclustEnUpDeltaY(); // Delta (METy_mod-METy) Unclustered Energy Up
    const float &MET_covXX(); // xx element of met covariance matrix
    const float &MET_covXY(); // xy element of met covariance matrix
    const float &MET_covYY(); // yy element of met covariance matrix
    const float &MET_fiducialGenPhi(); // phi
    const float &MET_fiducialGenPt(); // pt
    const float &MET_phi(); // phi
    const float &MET_pt(); // pt
    const float &MET_significance(); // MET significance
    const float &MET_sumEt(); // scalar sum of Et
    const vector<int> &Muon_charge(); // electric charge
    const vector<UChar_t> &Muon_cleanmask(); // simple cleaning mask with priority to leptons
    const vector<float> &Muon_dxy(); // dxy (with sign) wrt first PV, in cm
    const vector<float> &Muon_dxyErr(); // dxy uncertainty, in cm
    const vector<float> &Muon_dz(); // dz (with sign) wrt first PV, in cm
    const vector<float> &Muon_dzErr(); // dz uncertainty, in cm
    const vector<float> &Muon_eta(); // eta
    const vector<UChar_t> &Muon_genPartFlav(); // Flavour of genParticle for MC matching to status==1 muons: 1 = prompt muon (including gamma*->mu mu), 15 = muon from prompt tau, 5 = muon from b, 4 = muon from c, 3 = muon from light or unknown, 0 = unmatched
    const vector<int> &Muon_genPartIdx(); // Index into genParticle list for MC matching to status==1 muons
    const vector<UChar_t> &Muon_highPtId(); // high-pT cut-based ID (1 = tracker high pT, 2 = global high pT, which includes tracker high pT)
    const vector<float> &Muon_ip3d(); // 3D impact parameter wrt first PV, in cm
    const vector<bool> &Muon_isPFcand(); // muon is PF candidate
    const vector<int> &Muon_jetIdx(); // index of the associated jet (-1 if none)
    const vector<float> &Muon_mass(); // mass
    const vector<bool> &Muon_mediumId(); // cut-based ID, medium WP
    const vector<float> &Muon_miniPFRelIso_all(); // mini PF relative isolation, total (with scaled rho*EA PU corrections)
    const vector<float> &Muon_miniPFRelIso_chg(); // mini PF relative isolation, charged component
    const vector<float> &Muon_mvaTTH(); // TTH MVA lepton ID score
    const vector<int> &Muon_nStations(); // number of matched stations with default arbitration (segment & track)
    const vector<int> &Muon_nTrackerLayers(); // number of layers in the tracker
    const vector<LorentzVector> &Muon_p4(); // from Muon_pt,eta,phi,mass
    const vector<int> &Muon_pdgId(); // PDG code assigned by the event reconstruction (not by MC truth)
    const vector<float> &Muon_pfRelIso03_all(); // PF relative isolation dR=0.3, total (deltaBeta corrections)
    const vector<float> &Muon_pfRelIso03_chg(); // PF relative isolation dR=0.3, charged component
    const vector<float> &Muon_pfRelIso04_all(); // PF relative isolation dR=0.4, total (deltaBeta corrections)
    const vector<float> &Muon_phi(); // phi
    const vector<float> &Muon_pt(); // pt
    const vector<float> &Muon_ptErr(); // ptError of the muon track
    const vector<float> &Muon_segmentComp(); // muon segment compatibility
    const vector<float> &Muon_sip3d(); // 3D impact parameter significance wrt first PV
    const vector<bool> &Muon_softId(); // soft cut-based ID
    const vector<int> &Muon_tightCharge(); // Tight charge criterion using pterr/pt of muonBestTrack (0:fail, 2:pass)
    const vector<bool> &Muon_tightId(); // cut-based ID, tight WP
    const vector<float> &OtherPV_z(); // Z position of other primary vertices, excluding the main PV
    const float &PV_chi2(); // main primary vertex reduced chi2
    const float &PV_ndof(); // main primary vertex number of degree of freedom
    const int &PV_npvs(); // total number of reconstructed primary vertices
    const int &PV_npvsGood(); // number of good reconstructed primary vertices. selection:!isFake && ndof > 4 && abs(z) <= 24 && position.Rho <= 2
    const float &PV_score(); // main primary vertex score, i.e. sum pt2 of clustered objects
    const float &PV_x(); // main primary vertex position x coordinate
    const float &PV_y(); // main primary vertex position y coordinate
    const float &PV_z(); // main primary vertex position z coordinate
    const vector<int> &Photon_charge(); // electric charge
    const vector<UChar_t> &Photon_cleanmask(); // simple cleaning mask with priority to leptons
    const vector<int> &Photon_cutBasedBitmap(); // cut-based ID bitmap, 2^(0:loose, 1:medium, 2:tight)
    const vector<float> &Photon_eCorr(); // ratio of the calibrated energy/miniaod energy
    const vector<int> &Photon_electronIdx(); // index of the associated electron (-1 if none)
    const vector<bool> &Photon_electronVeto(); // pass electron veto
    const vector<float> &Photon_energyErr(); // energy error of the cluster from regression
    const vector<float> &Photon_eta(); // eta
    const vector<UChar_t> &Photon_genPartFlav(); // Flavour of genParticle for MC matching to status==1 photons or electrons: 1 = prompt photon, 13 = prompt electron, 0 = unknown or unmatched
    const vector<int> &Photon_genPartIdx(); // Index into genParticle list for MC matching to status==1 photons or electrons
    const vector<float> &Photon_hoe(); // H over E
    const vector<bool> &Photon_isScEtaEB(); // is supercluster eta within barrel acceptance
    const vector<bool> &Photon_isScEtaEE(); // is supercluster eta within endcap acceptance
    const vector<int> &Photon_jetIdx(); // index of the associated jet (-1 if none)
    const vector<float> &Photon_mass(); // mass
    const vector<float> &Photon_mvaID(); // MVA ID score
    const vector<bool> &Photon_mvaID_WP80(); // MVA ID WP80
    const vector<bool> &Photon_mvaID_WP90(); // MVA ID WP90
    const vector<LorentzVector> &Photon_p4(); // from Photon_pt,eta,phi,mass
    const vector<int> &Photon_pdgId(); // PDG code assigned by the event reconstruction (not by MC truth)
    const vector<float> &Photon_pfRelIso03_all(); // PF relative isolation dR=0.3, total (with rho*EA PU corrections)
    const vector<float> &Photon_pfRelIso03_chg(); // PF relative isolation dR=0.3, charged component (with rho*EA PU corrections)
    const vector<float> &Photon_phi(); // phi
    const vector<bool> &Photon_pixelSeed(); // has pixel seed
    const vector<float> &Photon_pt(); // pt*userFloat('ecalEnergyPostCorr')/userFloat('ecalEnergyPreCorr')
    const vector<float> &Photon_r9(); // R9 of the supercluster, calculated with full 5x5 region
    const vector<float> &Photon_sieie(); // sigma_IetaIeta of the supercluster, calculated with full 5x5 region
    const vector<int> &Photon_vidNestedWPBitmap(); // VID compressed bitmap (MinPtCut,PhoSCEtaMultiRangeCut,PhoSingleTowerHadOverEmCut,PhoFull5x5SigmaIEtaIEtaCut,PhoAnyPFIsoWithEACut,PhoAnyPFIsoWithEAAndQuadScalingCut,PhoAnyPFIsoWithEACut), 1 bits per cut
    const int &Pileup_nPU(); // the number of pileup interactions that have been added to the event in the current bunch crossing
    const float &Pileup_nTrueInt(); // the true mean number of the poisson distribution for this event from which the number of interactions each bunch crossing has been sampled
    const int &Pileup_sumEOOT(); // number of early out of time pileup
    const int &Pileup_sumLOOT(); // number of late out of time pileup
    const float &PuppiMET_phi(); // phi
    const float &PuppiMET_pt(); // pt
    const float &PuppiMET_sumEt(); // scalar sum of Et
    const float &RawMET_phi(); // phi
    const float &RawMET_pt(); // pt
    const float &RawMET_sumEt(); // scalar sum of Et
    const vector<float> &SV_chi2(); // reduced chi2, i.e. chi/ndof
    const vector<float> &SV_dlen(); // decay length in cm
    const vector<float> &SV_dlenSig(); // decay length significance
    const vector<float> &SV_eta(); // eta
    const vector<float> &SV_mass(); // mass
    const vector<float> &SV_ndof(); // number of degrees of freedom
    const vector<LorentzVector> &SV_p4(); // from SV_pt,eta,phi,mass
    const vector<float> &SV_pAngle(); // pointing angle, i.e. acos(p_SV * (SV - PV)) 
    const vector<float> &SV_phi(); // phi
    const vector<float> &SV_pt(); // pt
    const vector<float> &SV_x(); // secondary vertex X position, in cm
    const vector<float> &SV_y(); // secondary vertex Y position, in cm
    const vector<float> &SV_z(); // secondary vertex Z position, in cm
    const float &SoftActivityJetHT(); // scalar sum of soft activity jet pt, pt>1
    const float &SoftActivityJetHT10(); // scalar sum of soft activity jet pt , pt >10
    const float &SoftActivityJetHT2(); // scalar sum of soft activity jet pt, pt >2
    const float &SoftActivityJetHT5(); // scalar sum of soft activity jet pt, pt>5
    const int &SoftActivityJetNjets10(); // number of soft activity jet pt, pt >2
    const int &SoftActivityJetNjets2(); // number of soft activity jet pt, pt >10
    const int &SoftActivityJetNjets5(); // number of soft activity jet pt, pt >5
    const vector<float> &SoftActivityJet_eta(); // eta
    const vector<float> &SoftActivityJet_phi(); // phi
    const vector<float> &SoftActivityJet_pt(); // pt
    const vector<float> &SubGenJetAK8_eta(); // eta
    const vector<float> &SubGenJetAK8_mass(); // mass
    const vector<LorentzVector> &SubGenJetAK8_p4(); // from SubGenJetAK8_pt,eta,phi,mass
    const vector<float> &SubGenJetAK8_phi(); // phi
    const vector<float> &SubGenJetAK8_pt(); // pt
    const vector<float> &SubJet_btagCMVA(); // CMVA V2 btag discriminator
    const vector<float> &SubJet_btagCSVV2(); //  pfCombinedInclusiveSecondaryVertexV2 b-tag discriminator (aka CSVV2)
    const vector<float> &SubJet_btagDeepB(); // DeepCSV b+bb tag discriminator
    const vector<float> &SubJet_eta(); // eta
    const vector<float> &SubJet_mass(); // mass
    const vector<float> &SubJet_n2b1(); // N2 with beta=1
    const vector<float> &SubJet_n3b1(); // N3 with beta=1
    const vector<LorentzVector> &SubJet_p4(); // from SubJet_pt,eta,phi,mass
    const vector<float> &SubJet_phi(); // phi
    const vector<float> &SubJet_pt(); // pt
    const vector<float> &SubJet_tau1(); // Nsubjettiness (1 axis)
    const vector<float> &SubJet_tau2(); // Nsubjettiness (2 axis)
    const vector<float> &SubJet_tau3(); // Nsubjettiness (3 axis)
    const vector<float> &SubJet_tau4(); // Nsubjettiness (4 axis)
    const vector<int> &Tau_charge(); // electric charge
    const vector<float> &Tau_chargedIso(); // charged isolation
    const vector<UChar_t> &Tau_cleanmask(); // simple cleaning mask with priority to leptons
    const vector<int> &Tau_decayMode(); // decayMode()
    const vector<float> &Tau_dxy(); // d_{xy} of lead track with respect to PV, in cm (with sign)
    const vector<float> &Tau_dz(); // d_{z} of lead track with respect to PV, in cm (with sign)
    const vector<float> &Tau_eta(); // eta
    const vector<UChar_t> &Tau_genPartFlav(); // Flavour of genParticle for MC matching to status==2 taus: 1 = prompt electron, 2 = prompt muon, 3 = tau->e decay, 4 = tau->mu decay, 5 = hadronic tau decay, 0 = unknown or unmatched
    const vector<int> &Tau_genPartIdx(); // Index into genParticle list for MC matching to status==2 taus
    const vector<UChar_t> &Tau_idAntiEle(); // Anti-electron MVA discriminator V6: bitmask 1 = VLoose, 2 = Loose, 4 = Medium, 8 = Tight, 16 = VTight
    const vector<UChar_t> &Tau_idAntiMu(); // Anti-muon discriminator V3: : bitmask 1 = Loose, 2 = Tight
    const vector<bool> &Tau_idDecayMode(); // tauID('decayModeFinding')
    const vector<bool> &Tau_idDecayModeNewDMs(); // tauID('decayModeFindingNewDMs')
    const vector<UChar_t> &Tau_idMVAnewDM2017v2(); // IsolationMVArun2v1DBnewDMwLT ID working point (2017v2): bitmask 1 = VVLoose, 2 = VLoose, 4 = Loose, 8 = Medium, 16 = Tight, 32 = VTight, 64 = VVTight
    const vector<UChar_t> &Tau_idMVAoldDM(); // IsolationMVArun2v1DBoldDMwLT ID working point (2015): bitmask 1 = VLoose, 2 = Loose, 4 = Medium, 8 = Tight, 16 = VTight, 32 = VVTight
    const vector<UChar_t> &Tau_idMVAoldDM2017v1(); // IsolationMVArun2v1DBoldDMwLT ID working point (2017v1): bitmask 1 = VVLoose, 2 = VLoose, 4 = Loose, 8 = Medium, 16 = Tight, 32 = VTight, 64 = VVTight
    const vector<UChar_t> &Tau_idMVAoldDM2017v2(); // IsolationMVArun2v1DBoldDMwLT ID working point (2017v2): bitmask 1 = VVLoose, 2 = VLoose, 4 = Loose, 8 = Medium, 16 = Tight, 32 = VTight, 64 = VVTight
    const vector<UChar_t> &Tau_idMVAoldDMdR032017v2(); // IsolationMVArun2v1DBoldDMdR0p3wLT ID working point (2017v2): bitmask 1 = VVLoose, 2 = VLoose, 4 = Loose, 8 = Medium, 16 = Tight, 32 = VTight, 64 = VVTight
    const vector<int> &Tau_jetIdx(); // index of the associated jet (-1 if none)
    const vector<float> &Tau_leadTkDeltaEta(); // eta of the leading track, minus tau eta
    const vector<float> &Tau_leadTkDeltaPhi(); // phi of the leading track, minus tau phi
    const vector<float> &Tau_leadTkPtOverTauPt(); // pt of the leading track divided by tau pt
    const vector<float> &Tau_mass(); // mass
    const vector<float> &Tau_neutralIso(); // neutral (photon) isolation
    const vector<LorentzVector> &Tau_p4(); // from Tau_pt,eta,phi,mass
    const vector<float> &Tau_phi(); // phi
    const vector<float> &Tau_photonsOutsideSignalCone(); // sum of photons outside signal cone
    const vector<float> &Tau_pt(); // pt
    const vector<float> &Tau_puCorr(); // pileup correction
    const vector<float> &Tau_rawAntiEle(); // Anti-electron MVA discriminator V6 raw output discriminator
    const vector<int> &Tau_rawAntiEleCat(); // Anti-electron MVA discriminator V6 category
    const vector<float> &Tau_rawIso(); // combined isolation (deltaBeta corrections)
    const vector<float> &Tau_rawIsodR03(); // combined isolation (deltaBeta corrections, dR=0.3)
    const vector<float> &Tau_rawMVAnewDM2017v2(); // byIsolationMVArun2v1DBnewDMwLT raw output discriminator (2017v2)
    const vector<float> &Tau_rawMVAoldDM(); // byIsolationMVArun2v1DBoldDMwLT raw output discriminator (2015)
    const vector<float> &Tau_rawMVAoldDM2017v1(); // byIsolationMVArun2v1DBoldDMwLT raw output discriminator (2017v1)
    const vector<float> &Tau_rawMVAoldDM2017v2(); // byIsolationMVArun2v1DBoldDMwLT raw output discriminator (2017v2)
    const vector<float> &Tau_rawMVAoldDMdR032017v2(); // byIsolationMVArun2v1DBdR03oldDMwLT raw output discriminator (2017v2)
    const float &TkMET_phi(); // phi
    const float &TkMET_pt(); // pt
    const float &TkMET_sumEt(); // scalar sum of Et
    const vector<float> &TrigObj_eta(); // eta
    const vector<int> &TrigObj_filterBits(); // extra bits of associated information: 1 = CaloIdL_TrackIdL_IsoVL, 2 = WPLoose, 4 = WPTight, 8 = OverlapFilter PFTau for Electron (PixelMatched e/gamma); 1 = TrkIsoVVL, 2 = Iso, 4 = OverlapFilter PFTau for Muon; 1 = LooseChargedIso, 2 = MediumChargedIso, 4 = TightChargedIso, 8 = TightID OOSC photons, 16 = L2p5 pixel iso, 32 = OverlapFilter IsoMu, 64 = OverlapFilter IsoEle, 128 = L1-HLT matched, 256 = Dz for Tau; 1 = VBF cross-cleaned from loose iso PFTau for Jet; 
    const vector<int> &TrigObj_id(); // ID of the object: 11 = Electron (PixelMatched e/gamma), 22 = Photon (PixelMatch-vetoed e/gamma), 13 = Muon, 15 = Tau, 1 = Jet, 2 = MET, 3 = HT, 4 = MHT
    const vector<int> &TrigObj_l1charge(); // charge of associated L1 seed
    const vector<int> &TrigObj_l1iso(); // iso of associated L1 seed
    const vector<float> &TrigObj_l1pt(); // pt of associated L1 seed
    const vector<float> &TrigObj_l1pt_2(); // pt of associated secondary L1 seed
    const vector<float> &TrigObj_l2pt(); // pt of associated 'L2' seed (i.e. HLT before tracking/PF)
    const vector<float> &TrigObj_phi(); // phi
    const vector<float> &TrigObj_pt(); // pt
    const ULong64_t &event(); // event/l
    const float &fixedGridRhoFastjetAll(); // rho from all PF Candidates, used e.g. for JECs
    const float &fixedGridRhoFastjetCentralCalo(); // rho from calo towers with |eta| < 2.5, used e.g. egamma PFCluster isolation
    const float &fixedGridRhoFastjetCentralNeutral(); // rho from neutral PF Candidates with |eta| < 2.5, used e.g. for rho corrections of some lepton isolations
    const int &genTtbarId(); // ttbar categorization
    const float &genWeight(); // generator weight
    const UInt_t &luminosityBlock(); // luminosityBlock/i
    const UInt_t &nElectron(); // slimmedElectrons after basic selection (pt > 5 )
    const UInt_t &nFatJet(); // slimmedJetsAK8, i.e. ak8 fat jets for boosted analysis
    const UInt_t &nGenDressedLepton(); // Dressed leptons from Rivet-based ParticleLevelProducer
    const UInt_t &nGenJet(); // slimmedGenJets, i.e. ak4 Jets made with visible genparticles
    const UInt_t &nGenJetAK8(); // slimmedGenJetsAK8SoftDropSubJets, i.e. subjets of ak8 Jets made with visible genparticles
    const UInt_t &nGenPart(); // interesting gen particles 
    const UInt_t &nGenVisTau(); // gen hadronic taus 
    const UInt_t &nIsoTrack(); // isolated tracks after basic selection (((pt>5 && (abs(pdgId) == 11 || abs(pdgId) == 13)) || pt > 10) && (abs(pdgId) < 15 || abs(eta) < 2.5) && abs(dxy) < 0.2 && abs(dz) < 0.1 && ((pfIsolationDR03().chargedHadronIso < 5 && pt < 25) || pfIsolationDR03().chargedHadronIso/pt < 0.2)) and lepton veto
    const UInt_t &nJet(); // slimmedJets, i.e. ak4 PFJets CHS with JECs applied, after basic selection (pt > 15)
    const UInt_t &nLHEPart(); // 
    const UInt_t &nLHEPdfWeight(); // 
    const UInt_t &nLHEScaleWeight(); // 
    const UInt_t &nMuon(); // slimmedMuons after basic selection (pt > 3 && track.isNonnull && isLooseMuon)
    const UInt_t &nOtherPV(); // 
    const UInt_t &nPhoton(); // slimmedPhotons after basic selection (pt > 5 )
    const UInt_t &nSV(); // 
    const UInt_t &nSoftActivityJet(); // jets clustered from charged candidates compatible with primary vertex (charge()!=0 && pvAssociationQuality()>=5 && vertexRef().key()==0)
    const UInt_t &nSubGenJetAK8(); // slimmedGenJetsAK8SoftDropSubJets, i.e. subjets of ak8 Jets made with visible genparticles
    const UInt_t &nSubJet(); // slimmedJetsAK8, i.e. ak8 fat jets for boosted analysis
    const UInt_t &nTau(); // slimmedTaus after basic selection (pt > 18 && tauID('decayModeFindingNewDMs') && (tauID('byLooseCombinedIsolationDeltaBetaCorr3Hits') || tauID('byVLooseIsolationMVArun2v1DBoldDMwLT2015') || tauID('byVLooseIsolationMVArun2v1DBnewDMwLT') || tauID('byVLooseIsolationMVArun2v1DBdR03oldDMwLT') || tauID('byVVLooseIsolationMVArun2v1DBoldDMwLT') || tauID('byVVLooseIsolationMVArun2v1DBoldDMwLT2017v2') || tauID('byVVLooseIsolationMVArun2v1DBnewDMwLT2017v2') || tauID('byVVLooseIsolationMVArun2v1DBdR03oldDMwLT2017v2')))
    const UInt_t &nTrigObj(); // 
    const UInt_t &run(); // run/i
    vector<float> GetVF(const string &name);
    int GetI(const string &name);
    float GetF(const string &name);
    vector<int> GetVI(const string &name);
    vector<LorentzVector> GetVLV(const string &name);
    bool GetB(const string &name);
    vector<bool> GetVB(const string &name);
}
#endif