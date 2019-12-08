#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include<bits/stdc++.h>
#include"Package.h"

class OvernightPackage:public Package
{
public:
    OvernightPackage(const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,double ,double, double);
    double calculateCost();
    void setExtraFee(double);
    double getExtraFee();

private:
    double extraFee;
};


#endif // OVERNIGHTPACKAGE_H_INCLUDED
