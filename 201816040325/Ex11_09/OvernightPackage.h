#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED


#include "Package.h"

class OvernightPackage:public Package
{
public:
    OvernightPackage(const string ,const string ,const string ,const string ,const string ,const string ,
            const string ,const string ,const string ,const string ,const double ,const double ,const double );
    double calculateCost();
private:
    double fee;//平寄费
};
#endif // OVERNIGHTPACKAGE_H_INCLUDED
