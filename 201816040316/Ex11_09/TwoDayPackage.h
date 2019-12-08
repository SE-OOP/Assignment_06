#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED
#include"Package.h"


class TwoDayPackage
{
public:
    TwoDayPackage(string, string, string, string, string,string, double, double, double);
    void setTwoPackage(double);
    void printf();
private:
    double TwoDayCost;
    double totalCost;

};

#endif // TWODAYPACKAGE_H_INCLUDED
