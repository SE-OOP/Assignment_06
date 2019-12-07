#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED

#include "Package.h"

class TwoDayPackage : public Package
{
public:
    explicit TwoDayPackage(string = "Li",string = "Zeng",string = "ZhenZou",string = "430521",double = 1.0,double = 1.0,double = 1.0);
    double calculateCost();
    void print();
private:
    double tcost;
};



#endif // TWODAYPACKAGE_H_INCLUDED
