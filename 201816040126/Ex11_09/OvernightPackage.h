#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED

#include <iostream>
#include"Package.h"
#include"OvernightPackage.h"

using namespace std;

class OvernightPackage : public Package
{
public:
    OvernightPackage(
        const string &, const string &, const string &,
        const string &, const string &, const string &,
        double = 0.0, double = 0.0, double = 0.0 );
    void setAdditionalCost( double  );//function to set additional cost
    double getAdditionalCost();//function to get additional cost

    double calculateCost();//function to calculate cost

private:
    double AdditionalCost;
};

#endif // OVERNIGHTPACKAGE_H_INCLUDED
