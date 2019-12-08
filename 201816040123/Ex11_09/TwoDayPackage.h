#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED
#include "Package.h"
class TwoDayPackage:public Package
{
public:
    TwoDayPackage(const string &, const string &, const string &, const string &,
             const string &, int=0, double=0, double=0,double=0 );
    void setPjf( double );
    double getPjf()const;
    double calculateCost()const;
    void display()const;
private:
    double pjf;//平寄费
};

#endif // TWODAYPACKAGE_H_INCLUDED
