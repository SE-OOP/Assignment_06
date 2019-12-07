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
    void setFlatFee(double);
    double getFlatFee();
    double calculateCost();
    void print();
private:
   double flatFee;

};
