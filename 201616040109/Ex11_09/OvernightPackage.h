// Exercise 11.9 Solution:OvernightPackage.h

#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include<iostream>
using namespace std;

#include"Package.h"
class OvernightPackage : public Package
{
public:
    OvernightPackage(const string &, const string &, const string &,const string &, const string &, const string &,const string &, const string &, const string &,const string &,
        double = 0.0, double = 0.0 ,double = 0.0);

    void setAdditionalFee(double);//set additionalFee
    double getAdditionalFee();//return additionalFee

    double calculateCost();//return calculateCost
    void print();//print OvernightPackage object
private:
    double additionalFee;
};


#endif // OVERNIGHTPACKAGE_H
