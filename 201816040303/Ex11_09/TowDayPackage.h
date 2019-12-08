#ifndef TOWDAYPACKAGE_H_INCLUDED
#define TOWDAYPACKAGE_H_INCLUDED
#include"Package.h"

class TowDayPackage:public Package
{
public:
    TowDayPackage(string,string,string,string,int,double,double,double);
    double getFaltFee();
    double calculateCost();
private:
    double faltFee;
};

#endif // TOWDAYPACKAGE_H_INCLUDED
