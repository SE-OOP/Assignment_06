#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED
#include "Package.h"

class TwoDayPackage:public Package
{
public:
    TwoDayPackage(const string& ,const string&  ,const string&  ,const string&  ,const string&  ,const string&  ,const string&  ,const string&  ,const string&  ,const string&  ,double ,double,double);
    double calculateCost();
private:
    double FlatMailFee;

};


#endif // TWODAYPACKAGE_H_INCLUDED
