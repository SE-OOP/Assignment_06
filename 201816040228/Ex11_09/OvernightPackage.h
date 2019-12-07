//Overnight.cpp
// Member-function definitions for class OvernightPackage.
#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include <string>
#include "Package.h"

class OvernightPackage : public Package
{
public:
    OvernightPackage(string, string, string, string, string, string , double = 0.0, double = 0.0, double = 0.0);

    void setExtraFee( double );
    double getExtraFee();

    double calculateCost();

private:
   double extrafee; // data member that stores the Package
}; // end class Package

#endif

