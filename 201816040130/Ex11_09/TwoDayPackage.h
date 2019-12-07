#ifndef TwoDayPackage_h
#define TwoDayPackage_h
#include "Package.h"
#include <string>
//define the class of the TwoDayPackage
class TwoDayPackage : public Package
{
public:
    TwoDayPackage(const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,double,double,double);
    double calculateCost();
private:
    double twoDayFee;  //data member twoDayFee
};
#endif // TwoDayPackage_h
