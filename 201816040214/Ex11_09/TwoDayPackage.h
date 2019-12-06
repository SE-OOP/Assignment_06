#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED

#include<string>
#include"Package.h"
using namespace std;

class TwoDayPackage: public Package
{
public:
    /* Declare a constructor for TwoDayPackage */
    TwoDayPackage(const string &, const string &, const string &,
                   const string &, const string &, double, double, double = 0.0);
    /* Redeclare member function calculate, which will be redefined */
    double calculateCost();
    void print();
private:
    double serviceFee;//add data member serviceFee
};

#endif // TWODAYPACKAGE_H_INCLUDED
