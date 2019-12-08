#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED

#include"Package.h"

#endif // TWODAYPACKAGE_H_INCLUDED
class TwoDayPackage : public Package
{
public:
    TwoDayPackage(string ,string, string,string,string,string,double=0.0,double=0.0,double=0.0);
    void setBaseFee(double);
    double getBaseFee();
    double calculateCost();
    void print();
private:
    double baseFee;
};
