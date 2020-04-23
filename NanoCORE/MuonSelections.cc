#include "MuonSelections.h"
#include "IsolationTools.h"

using namespace tas;
bool muonIDVBS(unsigned int imu, string id_name){
    int id_level_t;
    if     (id_name == "2017_tight") id_level_t = 1;
    else if(id_name == "2017_loose") id_level_t = 2;
    else{
        cout<<"wrong input id name "<<endl;
        return 0;
    }


    switch(id_level_t){
        case(1):
            if(Muon_pt()[imu] < 10)                      return false;

            if(fabs(Muon_eta()[imu]) > 2.4)                    return false;
            if(fabs(Muon_dxy()[imu]) > 0.05)                   return false;
            if(fabs(Muon_dz()[imu]) > 0.1)                     return false;
            if(!Muon_looseId()[imu])                     return false;

            if(Muon_sip3d()[imu] >= 4)                   return false;
            if(!Muon_looseId()[imu])                     return false;
            if(Muon_ptErr()[imu] / Muon_pt()[imu] >= 0.2) return false;
            if(!Muon_mediumId()[imu])                    return false;
            if(!passMuonIso(0.11,0.74,6.8,imu))         return false;

            return true;
            break;

        case(2):
            if(Muon_pt()[imu] < 10)                      return false;
            if(fabs(Muon_eta()[imu]) > 2.4)                    return false;
            if(fabs(Muon_dxy()[imu]) > 0.05)                   return false;
            if(fabs(Muon_dz()[imu]) > 0.1)                     return false;
            if(Muon_sip3d()[imu] >= 4)                   return false;
            if(!Muon_looseId()[imu])                     return false;
            if(Muon_ptErr()[imu] / Muon_pt()[imu] >= 0.2) return false;
            if(!Muon_mediumId()[imu])                    return false;
            if(Muon_miniPFRelIso_all()[imu] > 0.40)       return false;
            return true;
            break;


    }
    cout<<"Error from MuonSelection: should not see this message!!!!!"<<endl;
    return 0;
}

bool passMuonIso(double cut_miniiso, double cut_ptratio, double cut_ptrel, int imu){
    double val_miniiso = Muon_miniPFRelIso_all()[imu];
    double val_ptratio = 1/(Muon_jetRelIso()[imu]+1);
    double val_ptrel = Muon_jetPtRelv2()[imu];
    return (val_miniiso < cut_miniiso && ((val_ptratio > cut_ptratio) || (val_ptrel > cut_ptrel)));
}                                                                                                           ~                   
