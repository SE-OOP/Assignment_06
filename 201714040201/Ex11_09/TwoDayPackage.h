//TwoDayPackage.h
// Definition of TwoDayPackage class.
#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include <string>
#include "Package.h"

class TwoDayPackage:public Package
{
public:
    TwoDayPackage(string ,string ,string ,string ,string ,double ,double ,double);
    double calculateCost();
private:
    double please;
};
#endif
