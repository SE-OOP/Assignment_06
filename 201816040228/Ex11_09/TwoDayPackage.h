//TwoDayPackage.cpp
// Member-function definitions for class Package.
#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include <string>
#include "Package.h"

class TwoDayPackage : public Package
{
public:
    TwoDayPackage(string , string, string, string, string, string , double = 0.0, double = 0.0, double = 0.0);

    void setPingJiFei( double);
    double getPingJiFei();

    double calculateCost() ;

private:
   double pingjifei; // data member that stores the balance
}; // end class Account

#endif
