#ifndef MUONSELECTIONS_H
#define MUONSELECTIONS_H
#include "Nano.h"

namespace SS {
    bool muonID(unsigned int idx, IDLevel id_level, int year);
    bool muon2016ID(unsigned int idx, IDLevel id_level);
    bool muon2017ID(unsigned int idx, IDLevel id_level);
    bool muon2018ID(unsigned int idx, IDLevel id_level);
}

#endif
