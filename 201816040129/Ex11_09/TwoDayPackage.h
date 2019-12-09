#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED

#include"Package.h"

class TwoDayPackage : public Package
{
public:
    TwoDayPackage(const string &,const string &,const string &,const string &,const string &,const string &,double=0,double=0,double=0);// constructor initializes balance
    double CalculateCost();//get the fee
private:
    double twodayfee;//the data of twodayfee
};

#endif // TWODAYPACKAGE_H_INCLUDED
