#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include"Package.h"

class OvernightPackage:public Package
{
public:
    OvernightPackage(string,string,string,string,int,double,double,double);
    double getEFee();
    double calculateCost();
private:
    double eFee;
};

#endif // OVERNIGHTPACKAGE_H_INCLUDE
