#ifndef TWODAYPACKAGE_CPP_INCLUDED
#define TWODAYPACKAGE_CPP_INCLUDED

#include<string>
#include "Package.h"
using namespace std;

class TwoDayPackage : public Package
{
public:
    TwoDayPackage(string,string,string,string,string,string,string,string,string,string,double,double,double);
    double calculateCost();
private:
    double ChargeFee;
};

#endif // TWODAYPACKAGE_CPP_INCLUDED
