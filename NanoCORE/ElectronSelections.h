#ifndef ELECTRONSELECTIONS_H
#define ELECTRONSELECTIONS_H
#include "Nano.h"

bool electronIDVBS(int elIdx, string id_name);
float electronMvacut(float A, float B, float C, float pt);
bool ifpassElectronMVAID(int iel, string id_name);
bool isTriggerSafenoIso_v3(int iel);
bool passElectronIso(double cut_miniiso, double cut_ptratio, double cut_ptrel, int iel);

#endif
