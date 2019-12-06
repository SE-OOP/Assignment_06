#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED
#include <iostream>
#include"Package.h"
#include"TwoDayPackage.h"

using namespace std;


class TwoDayPackage : public Package
{
public:
    TwoDayPackage(
        const string &, const string &, const string &,
        const string &, const string &, const string &,
        double = 0.0 , double = 0.0 , double = 0.0 );
    void setFlatCharge( double );//function to set flat charge
    double getFlatCharge();//function to get flat charge

    double calculateCost();//function to calculate cost
private:
    double FlatCharge;
};
#endif // TWODAYPACKAGE_H_INCLUDED
