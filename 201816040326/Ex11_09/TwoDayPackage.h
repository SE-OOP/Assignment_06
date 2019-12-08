#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED
#include <iostream>
#include<string>
using namespace std;
class TwoDayPackage:public Package
{
public:
    TwoDayPackage(string,string,string,string,string,string,double,double,double);
    double calculate_Cost();
private:
    double flatShippingFee;
};

#endif // TWODAYPACKAGE_H_INCLUDED
