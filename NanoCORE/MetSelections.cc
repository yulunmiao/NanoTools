#include <iostream>

#include "Math/VectorUtil.h"
#include "MetSelections.h"

using namespace tas;

bool passesMETfiltersMoriond17(bool isData){

    if (!Flag_globalTightHalo2016Filter()) return false;
    if (!Flag_HBHENoiseFilter()) return false;
    if (!Flag_HBHENoiseIsoFilter()) return false;
    if (!Flag_EcalDeadCellTriggerPrimitiveFilter()) return false;
    if (!Flag_eeBadScFilter()) return false;
    if (!Flag_goodVertices()) return false;
    if (!Flag_chargedHadronTrackResolutionFilter()) return false;
    if (!Flag_muonBadTrackFilter()) return false;

    if(isData) {
    }

    // otherwise, good
    return true;
}

