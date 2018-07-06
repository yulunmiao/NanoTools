{
    // Can't get prefetching to work....
    // https://sft.its.cern.ch/jira/browse/ROOT-7637
    // ?


    // gEnv->SetValue("TFile.AsyncPrefetching",1);
    // gEnv->SetValue("TTreeCache.Prefill",1);

    gROOT->ProcessLine(".L ../NanoCORE/NANO_CORE.so");
    gROOT->ProcessLine(".L ScanChain.C+");
    TChain *ch = new TChain("Events");
    ch->Add("../508B6DBB-9742-E811-BA65-A4BF0112BCB0.root");
    // ch->Add("/hadoop/cms/store/user/namin/508B6DBB-9742-E811-BA65-A4BF0112BCB0.root");
    // ch->Add("localhost:///hadoop/cms/store/user/namin/508B6DBB-9742-E811-BA65-A4BF0112BCB0.root");

    ScanChain(ch);
}
