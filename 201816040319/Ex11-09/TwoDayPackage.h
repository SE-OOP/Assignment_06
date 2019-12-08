//Assigement -11-09
//TwodayPackage class
#ifndef TWODAYPACKAGE_H
#define tWODAYPACKAGE_H
#include <iostream>
#include <string>
#include "Package.h"
using namespace std;

class TwoDayPackage:public Package
{
public:
    TwoDayPackage(string,string,string,string,string,string,double=0.0,double=0.0,double=0.0);
    double calculateCost();//+平寄费
    void   setPingPrice(double);
    double getPingPrice();
    void   print();
private:
    double pingprice;
};
#endif // TWODAYPACKAGE_H
