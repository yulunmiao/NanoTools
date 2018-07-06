#pragma GCC diagnostic ignored "-Wsign-compare"
#include "TFile.h"
#include "TH1F.h"
#include "TTree.h"
#include "TChain.h"
#include "TTreeCache.h"

#include "../NanoCORE/Nano.h"
#include "../NanoCORE/SSSelections.cc"
#include "../NanoCORE/MetSelections.cc"
#include "../NanoCORE/tqdm.h"

#include <iostream>
#include <iomanip>

#define SUM(vec) std::accumulate((vec).begin(), (vec).end(), 0);
#define SUM_GT(vec,num) std::accumulate((vec).begin(), (vec).end(), 0, [](float x,float y){return ((y > (num)) ? x+y : x); });
#define COUNT_GT(vec,num) std::count_if((vec).begin(), (vec).end(), [](float x) { return x > (num); });

#define H1(name,nbins,low,high) TH1F *h_##name = new TH1F(#name,#name,nbins,low,high);

// #define DEBUG

// https://github.com/vlraik/Competitive-programming-Cplusplus-Macros-and-Snippets/blob/master/MACROS.cpp
struct debugger { template<typename T> debugger& operator , (const T& v) { cerr<<v<<" "; return *this; } } dbg;
#ifdef DEBUG
    #define debug(args...) do {cerr << #args << ": "; dbg,args; cerr << endl;} while(0)
#else
    #define debug(args...)
#endif

using namespace std;
using namespace tas;

int ScanChain(TChain *ch) {

    TFile* f1 = new TFile("output.root", "RECREATE");
    H1(mll,30,0,200);
    H1(hyp_class,6,0.5,6.5);
    H1(filt,2,0,2);
    H1(met,50,0,300);
    H1(njets,15,0,15);
    H1(nbtags,8,0,8);
    H1(ht,50,0,1500);
    H1(ptratio,50,-1,1.5);
    H1(nleps,6,-0.5,5.5);

    int nEventsTotal = 0;
    int nEventsChain = ch->GetEntries();
    TFile *currentFile = 0;
    TObjArray *listOfFiles = ch->GetListOfFiles();
    TIter fileIter(listOfFiles);
    tqdm bar;


    while ( (currentFile = (TFile*)fileIter.Next()) ) {
        TFile *file = new TFile( currentFile->GetTitle() );
        TTree *tree = (TTree*)file->Get("Events");
        TString filename(currentFile->GetTitle());
        nt.Init(tree);

        // tree->SetCacheSize(30*1024*1024);
        // tree->SetCacheLearnEntries(100);

        for( unsigned int event = 0; event < tree->GetEntriesFast(); ++event) {
            nt.GetEntry(event);
            nEventsTotal++;
            bar.progress(nEventsTotal, nEventsChain);

            // Analysis code

            if (nElectron()+nMuon() < 2) continue;
            // int nele20 = SUM_GT(Electron_pt(),20);
            // int nmu20 = SUM_GT(Muon_pt(),20);
            // if (nele20+nmu20 < 2) continue;


            auto jetpts = Jet_pt();
            int njets = 0;
            float ht = 0;
            int nbtags = 0;
            vector<float> discs = Jet_btagDeepB();
            for (auto ijet = 0; ijet < jetpts.size(); ijet += 1) {
                float pt = jetpts[ijet];
                if (!(Jet_jetId()[ijet] & (1<<1))) continue;
                if (!(Jet_cleanmask()[ijet])) continue;
                if (fabs(Jet_eta()[ijet]) > 2.4) continue;
                if (pt > 25. && discs[ijet] > 0.4941) nbtags += 1;
                if (pt < 40) continue;
                ht += pt;
                njets++;
            }

            auto leps = getLeptons();
            auto result = getBestHyp(leps);
            int hyp_class = result.first;
            Hyp best_hyp = result.second;
            if (hyp_class < 0) continue;

            Lepton lep1 = best_hyp.first;
            Lepton lep2 = best_hyp.second;

            float mll = (lep1.p4()+lep2.p4()).M();

            if (lep1.pt() < 25 || lep2.pt() < 20) continue;

            float met = MET_pt();

            bool passfilt = passesMETfiltersMoriond17(false);

            debug(passfilt,nbtags,met,njets,nleps);

            h_mll->Fill(mll);
            h_hyp_class->Fill(hyp_class);
            h_filt->Fill(passfilt);
            h_nbtags->Fill(nbtags);
            h_met->Fill(met);
            h_njets->Fill(njets);
            h_ht->Fill(ht);
            h_nleps->Fill(leps.size());


        } // Event loop

        // tree->PrintCacheStats("cachedbranches");

        delete file;
    } // File loop
    bar.finish();

    std::cout <<  "Mean of h_njets: " << h_njets->GetMean() <<  std::endl;
    f1->Write();
    f1->Close();
    return 0;
}
