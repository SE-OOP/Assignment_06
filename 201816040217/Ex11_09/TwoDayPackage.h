#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED
#include<bits/stdc++.h>
#include"Package.h"

class TwoDayPackage:public Package
{
public:
    TwoDayPackage(const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,double ,double, double);
    void setExtraFee(double);
    double getExtraFee();
    double calculateCost();
private:
    double extraFee;

};


#endif // TWODAYPACKAGE_H_INCLUDED
