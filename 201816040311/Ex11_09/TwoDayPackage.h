#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED

#include "Package.h"

class TwoDayPackage:public Package
{
private:
    double Fsfee;//date member Fsfee
public:
    //Constructor TwoDayPackage
    TwoDayPackage();
    TwoDayPackage(string,string,string,string,string,int, double, double, double);
    double getFsfee() const;//get fsfee
    double calculateCost();//Rewrite Calculate function
    void setFsfee(double);//set fsfee
};

#endif // TWODAYPACKAGE_H_INCLUDED
