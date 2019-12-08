#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include "Package.h"
#include <string>

class OvernightPackage:Package
{
public:
    OvernightPackage(string,string,string,string,string,string,double,double,double);
    void setExtraFee(double);
    double calculateCost();
private:
    double extraFee;
};


#endif // OVERNIGHTPACKAGE_H_INCLUDED
