#ifndef ISOLATIONTOOLS_H
#define ISOLATIONTOOLS_H
#include "Nano.h"

bool passesLeptonIso(unsigned int idx, int id, double mini_iso_cut, double pt_ratio_cut, double pt_rel_cut);

#endif
