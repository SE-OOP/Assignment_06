// Exercise 11.9 Solution:TwoDayPackage.h
#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include<iostream>
using namespace std;
#include"Package.h"
class TwoDayPackage : public Package
{
public:
    TwoDayPackage(const string &, const string &, const string &,const string &, const string &, const string &,const string &, const string &, const string &,const string &,
        double = 0.0, double = 0.0 ,double = 0.0);

    void setFlatFee(double);//set flatFee
    double getFlatFee();//return flatFee

    double calculateCost();//return calculateCost
    void print();//print TwoDayPackage object
private:
   double flatFee;

};


#endif // TWODAYPACKAGE_H
