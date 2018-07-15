{
    // ROOT::EnableImplicitMT(8);

    // gEnv->SetValue("TFile.AsyncPrefetching",1);
    // gEnv->SetValue("TTreeCache.Prefill",1);
    // gEnv->SetValue("TFile.AsyncReading",1);
    // gEnv->SetValue("Cache.Directory","test3");
    // gEnv->SetValue("TTreeCache.Size",1);
    // gEnv->Print();

    gROOT->ProcessLine(".L ../NanoCORE/NANO_CORE.so");
    gROOT->ProcessLine(".L ScanChain.C+");
    TChain *ch = new TChain("Events");


    ch->Add("file:../../fourtop/1C547A30-EF42-E811-8F2D-0025905C42A8.root");
    ch->Add("file:../../fourtop/28D1122D-EF42-E811-BD72-E0071B7A9810.root");
    // ch->Add("../508B6DBB-9742-E811-BA65-A4BF0112BCB0.root");

    // ch->Add("/hadoop/cms/store/user/namin/508B6DBB-9742-E811-BA65-A4BF0112BCB0.root");
    // ch->Add("localhost:///hadoop/cms/store/user/namin/508B6DBB-9742-E811-BA65-A4BF0112BCB0.root");
    // ch->Add("root://cmsxrootd.fnal.gov///store/user/namin/508B6DBB-9742-E811-BA65-A4BF0112BCB0.root");

    ScanChain(ch);

}
