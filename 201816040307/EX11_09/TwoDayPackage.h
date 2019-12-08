#include "Package.h"

class TwoDayPackage:public Package
{
private:
    double flatFee;
public:
    TwoDayPackage(double,const string&,const string&,const string&,const string&,const string&,double=0.0,double= 0.0);
    double calculateCost();
};
