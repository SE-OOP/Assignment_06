#ifndef OvernightPackage_H
#define OvernightPackage_H
#include"Package.h"
#include<iostream>
#include<string>
using namespace std;
class OvernightPackage:public Package
{
public :
    OvernightPackage(string sendname,string receivename,string address,string city,string county,string postalcode,double weight,double fee,double overnightfee);
    virtual double CalculateCost(double,double);
    double getOverNightFee()
    {
        return OverNightFee;
    }
private:
    double OverNightFee;
};
#endif
