#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED
#include<string>
#include"Package.h"
using namespace std;
class TwoDayPackage:public Package
{
public:
    TwoDayPackage(string,string,string,string,string,string,double,double,double);//constructor
    double calculateCost();//cover calculate cost
private:
    double postage;
};

#endif // TWODAYPACKAGE_H_INCLUDED
