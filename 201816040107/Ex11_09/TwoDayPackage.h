#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED
#include "Package.h"
using namespace std;
class TwoDayPackage:public Package
{
public:
    TwoDayPackage(string,string,string,string,string,string,double,double,double);
    void calculateCost();//redefine of calculateCost;
    void setflatcharge(double);//set flat charge;
    double getflatcharge();//return flat charge;
    void print();
private:
    double flatcharge;//flat charge;
};


#endif // TWODAYPACKAGE_H_INCLUDED
