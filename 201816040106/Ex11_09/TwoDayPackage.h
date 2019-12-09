#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include<string>
#include"Package.h"
using namespace std;
class TwoDayPackage:public Package
{
public:
    TwoDayPackage(string,string,string,string,string,string,double,double,double);
    double calculateCost();
private:
    double flatFee;
};
#endif
