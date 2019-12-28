#ifndef TwoDayPackage_H
#define TwoDayPackage_H
#include "Package.h"
#include <iostream>
#include<string>
using namespace std;
class TwoDayPackage:public Package
{
public:
    TwoDayPackage(string sendname,string receivename,string address,string city,string county,string postalcode,double weight,double fee,double TwoDayFee);
    virtual double CalculateCost(double,double);
    double getTwoDayFee()
    {
        return TwoDayFee;
    }
private:
    double TwoDayFee;
};
#endif
