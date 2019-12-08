#ifndef OVERNIGHTPACKAGE_CPP_INCLUDED
#define OVERNIGHTPACKAGE_CPP_INCLUDED

#include<string>
#include "Package.h"
using namespace std;

class OvernightPackage : public Package
{
public:
    OvernightPackage(string,string,string,string,string,string,string,string,string,string,double,double,double);
    double calculateCost();
private:
    double AdditionalCosts;
};

#endif // OVERNIGHTPACKAGE_CPP_INCLUDED
