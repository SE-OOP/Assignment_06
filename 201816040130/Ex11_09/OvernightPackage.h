#ifndef OvernightPackage_h
#define OvernightPackage_h
#include "Package.h"
using namespace std;
//define the class of OvernightPackage
class OvernightPackage : public Package
{

public:
    OvernightPackage(const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,double,double,double);
    double calculateCost();
private:
    double overnightFee;  //data member overnightFee
};
#endif // OvernightPackage_h
