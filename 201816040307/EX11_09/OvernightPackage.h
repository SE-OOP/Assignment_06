#include "Package.h"

class OvernightPackage:public Package
{
private:
    double additioanlFee;
public:
    OvernightPackage(double,const string&,const string&,const string&,const string&,const string&,double=0.0,double= 0.0);
    double calculateCost();
};
