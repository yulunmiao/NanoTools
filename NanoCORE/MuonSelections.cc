#include "MuonSelections.h"

using namespace tas;
using namespace std;

bool muonID(unsigned int imu, IDLevel idlevel, int year) {
    switch (year) {
        case (2016):
            return false;
            break;
        case (2017):
            switch (idlevel) {
                case(IDveto):
                    if (Muon_pt()[imu] < 5) return false;
                    if (Muon_miniPFRelIso_all()[imu] > 0.4) return false;
                    if (fabs(Muon_dxy()[imu]) > 0.05) return false;
                    if (fabs(Muon_dz()[imu]) > 0.1) return false;
                    if (fabs(Muon_eta()[imu]) > 2.4) return false;
                    // LooseMuonPOG -- only LoosePOG muons can even get stored in nanoaod
                    return true;
                    break;
                case(IDfakable):
                    if (Muon_pt()[imu] < 10)                      return false;
                    if (fabs(Muon_eta()[imu]) > 2.4)              return false;
                    if (fabs(Muon_dxy()[imu]) > 0.05)             return false;
                    if (fabs(Muon_dz()[imu]) > 0.1)               return false;
                    if (Muon_sip3d()[imu] >= 4)                   return false;
                    if (Muon_ptErr()[imu] / Muon_pt()[imu] < 0.2) return false;
                    return true;
                    break;
                case(IDtight):
                    if (Muon_pt()[imu] < 10)                      return false;
                    if (fabs(Muon_eta()[imu]) > 2.4)              return false;
                    if (fabs(Muon_dxy()[imu]) > 0.05)             return false;
                    if (fabs(Muon_dz()[imu]) > 0.1)               return false;
                    if (Muon_sip3d()[imu] >= 4)                   return false;
                    if (Muon_ptErr()[imu] / Muon_pt()[imu] < 0.2) return false;
                    return true;
                    break;
                default:
                    cout << "Invalid ID level" << endl;
                    return false;
                    break;
            }
        case (2018):
            return false;
            break;
    }
    cout<<"Error from MuonSelection: should not see this message!!!!!"<<endl;
    return 0;
}
