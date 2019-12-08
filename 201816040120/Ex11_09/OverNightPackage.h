#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include "Package.h"
#include <string>
class OverNightPackage :public Package
{
public:
    OverNightPackage(const string &,const string &,const string &,const string &,const string &,
            const string &,const string &,const string &,const string &,const string &,
            double , double , double);
            void setExtraCharges(double );
            double getExtraCharges();
            double calculateCost(double ,double );
private:
    double extraCharges;
};

#endif // OVERNIGHTPACKAGE_H_INCLUDED
