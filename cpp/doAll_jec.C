{

    gROOT->ProcessLine(".L ../NanoCORE/NANO_CORE.so");
    gROOT->ProcessLine(".L ScanChain_jec.C+");
    TChain *ch = new TChain("Events");

    // /store/mc/RunIIAutumn18NanoAODv6/TTJets_TuneCP5_13TeV-madgraphMLM-pythia8/NANOAODSIM/Nano25Oct2019_102X_upgrade2018_realistic_v20-v1/250000/125E796A-72B4-4641-99A6-ED0D639AFC1D.root
    // ch->Add("root://redirector.t2.ucsd.edu///store/user/namin/nanoaod/TTJets_TuneCP5_13TeV-madgraphMLM-pythia8__RunIIAutumn18NanoAODv5-Nano1June2019_102X_upgrade2018_realistic_v19-v1/8E0C8306-DC0D-0548-BA7C-D0698140DF28.root");
    ch->Add("root://cmsxrootd.fnal.gov//store/mc/RunIIFall17NanoAODv6/TTJets_SingleLeptFromTbar_TuneCP5_13TeV-madgraphMLM-pythia8/NANOAODSIM/PU2017_12Apr2018_Nano25Oct2019_102X_mc2017_realistic_v7-v1/260000/E5F07826-B7B2-0C48-850C-63F68B5C9B99.root");

    ScanChain(ch, 5000);

}
