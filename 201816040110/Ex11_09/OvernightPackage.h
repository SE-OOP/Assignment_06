#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED
#include <string>
#include "Package.h"
class OvernightPackage : public Package
{
public:
    OvernightPackage(const string &,const string &,const string &,const string &,const string &,const string &,double = 0.0,double = 0.0,double = 0.0);
    void setfee(double);
    double CalculateCost();
    void printf();
private:
    double fee1;
};


#endif // TWODAYPACKAGE_H_INCLUDED
