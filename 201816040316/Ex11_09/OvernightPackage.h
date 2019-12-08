#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include"Package.h"


class OvernightPackage
{
public:
    OvernightPackage(string, string, string, string, string ,string ,double, double, double);
    double CalculateCost();
    void printf();
    void setAddtionalCost(double);
private:
    double addtionalCost;
    double totalCost;

};

#endif // OVERNIGHTPACKAGE_H_INCLUDED
