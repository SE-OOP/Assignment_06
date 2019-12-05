//TwoDayPackage.h
#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED
#include <iostream>
#include <stdexcept>
#include "Package.h"
using namespace std;

class TwoDayPackage:public Package
{
public:
    TwoDayPackage(const string &, const string &, const string &, const string &, const string & ,
                  const string &, const string &, const string &, const string &, const string & ,
                  double=0.0,double=0.0,double=0.0);
    void setflatCharge(double);
    double getflatCharge();
    double calculateCost();
    void print();
private:
    double flatCharge;//平寄费
};

#endif // TWODAYPACKAGE_H_INCLUDED
