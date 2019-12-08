#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED
#include <bits/stdc++.h>
#include "Package.h"
using namespace std;
class TwoDayPackage :public Package
{
public:
    TwoDayPackage( string,string,string,string,string,string,double,double,double );//constructor function
    double calculateCost();// function to calculate total cost
    void settwodayCost( double );//function to set two day cost
    double gettwodayCost();//function to get two day cost
private:
    double twodayCost;
};


#endif // TWODAYPACKAGE_H_INCLUDED
