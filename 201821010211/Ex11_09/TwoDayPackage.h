#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED

#include<string.h>
using namespace std;

class TwoDayPackage:public Package
{
public:
    TwoDayPackage(const string &,const string &,const string &,const string &,const string &,const string &,double, double ,double);
    void setflatfee(double);
    double getflatfee();
    double calculateCost();
private:
    double flatfee;
};

#endif // TWODAYPACKAGE_H_INCLUDED
