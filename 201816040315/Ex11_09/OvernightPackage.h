//OverNight Package.h
//definition of class OverNightPackage
#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include "Package.h"
#include <iostream>
using namespace std;

class OverNightPackage : public Package
{
public:
    OverNightPackage(const string &,const string &,const string &, const string &,const string &,
                     const string &,double, double,double);
    double calculateCost()const;
private:
    double nightfee;//data member for overnight package
};//end class

#endif // OVERNIGHTPACKAGE_H
