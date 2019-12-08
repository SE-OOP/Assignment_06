#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED

#include "Package.h"

class TwoDayPackage : public Package
{
public:
    TwoDayPackage( const string &, string &,string &,string &,string &,
             double = 0.0, double = 0.0 double = 0.0)
    void settwodayFee();
    double gettwodayFee();
    double cacluateCost();
private:
    double twodayFee;
};

#endif // TWODAYPACKAGE_H_INCLUDED
