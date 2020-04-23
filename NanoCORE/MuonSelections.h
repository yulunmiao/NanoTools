#ifndef MUONSELECTIONS_H
#define MUONSELECTIONS_H
#include "Nano.h"

bool muonIDVBS(unsigned int imu, string id_name);
bool passMuonIso(double cut_miniiso, double cut_ptratio, double cut_ptrel, int imu);

#endif
