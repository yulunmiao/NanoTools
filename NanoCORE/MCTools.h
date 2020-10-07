#ifndef MCTOOLS_H
#define MCTOOLS_H

#include <vector>

#include "TFile.h"
#include "TTree.h"
#include "TString.h"
#include "TDatabasePDG.h"

#include "Nano.h"

using namespace std;
using namespace tas;

vector<int> GenPart_leptDaughters(int i);
vector<int> GenPart_daughters(int i);

class GenPart {
    public:
      int idx;
      int pdg_id;
      bool is_last;
      bool is_fromHard;
      vector<int> daughters;
      int mother_idx;
      int status;
      float pt;
      float eta;
      float phi;
      float mass;
      GenPart(int idx);
};

bool is_bad_copy(GenPart part);

vector<GenPart> get_GenParticles();

// Printing information
void dumpGenParticleInfos(std::vector<int> filter_pdgid=std::vector<int>());
int dumpDocLines();

//Parentage functions
bool isFromSUSY(int id, int idx);
bool isFromW(int id, int idx);
bool isFromZ(int id, int idx);
bool isFromTau(int id, int idx);
bool isFromB(int id, int idx);
bool isFromC(int id, int idx);
bool isFromLight(int id, int idx);
bool isFromLightFake(int id, int idx);
bool idIsCharm(int id);
bool idIsBeauty(int id);


// sourceId to match CERN/ETH
int getSourceId(int genpIdx);
bool useSourceId(int sourceId);
bool terminateSourceId(int motherId);
bool terminateMotherId(int motherId);

// top pt reweighting
float topPtWeight(float pt_top, float pt_tbar);
float topPtWeightCutoff(float pt_top, float pt_tbar);
// 2016 ISR recipe
int getNISRMatch ( const std::vector<LorentzVector>& clean_jets );
float getISRWeight ( int nisrMatch );
float getISRUncertainty ( int nisrMatch );
float getISRWeight ( int nisrMatch, int year );
float getISRUncertainty ( int nisrMatch, int year );
// Moriond 2017 ISR recipe for ewkino models
float getISRWeightEWkino ( float isr_pt );

#endif
