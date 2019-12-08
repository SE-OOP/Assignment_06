#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED



#endif // TWODAYPACKAGE_H_INCLUDED

#include "Package.h"

class TwoDayPackage:public Package
{
public:
    TwoDayPackage(const string ,const string ,const string ,const string ,const string ,const string ,
            const string ,const string ,const string ,const string ,const double ,const double ,const double );
    double calculateCost();
private:
    double fee;//平寄费
};
