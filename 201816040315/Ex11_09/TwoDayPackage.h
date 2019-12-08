//TwoDayPackage.h
//class TwoDayPackage definition
#ifndef TWODAYPACKAGE_H
#define TWODATPACKAGE_H
#include <iostream>
#include "Package.h"
using namespace std;

class TwoDayPackage : public Package
{
public:
    TwoDayPackage(const string &,const string &,const string &, const string &,const string &,
                     const string &,double, double,double);

    double calculateCost()const;//calculate cost
private:
    double twoDayfee;//data member for TwoDayPackage
};
#endif // TWODAYPACKAGE_H
