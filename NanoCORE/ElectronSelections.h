#ifndef ELECTRONSELECTIONS_H
#define ELECTRONSELECTIONS_H
#include "Nano.h"

bool electronID(int iel, IDLevel idlevel, int year);
float electronMVACut(float A, float B, float C, float pt);
bool passesElectronMVA(int iel, string id_name);
bool isTriggerSafe_noIso_v1(int iel);
bool isTriggerSafe_iso_v1(int iel);

#endif
