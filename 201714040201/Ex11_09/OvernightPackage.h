//OvernightPackage.h
// Definition of OvernightPackage class.
#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include <string>
#include "Package.h"

class OvernightPackage:public Package
{
public:
    OvernightPackage(string ,string ,string ,string ,string ,double ,double ,double);
    double calculateCost();
private:
    double nightFee;
};
#endif
