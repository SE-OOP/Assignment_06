#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include "Package.h"

class OvernightPackage : public Package
{
public:
    OvernightPackage(double=0,double=0,double=0);
    ~OvernightPackage();
    double calculateCost();
private:
    double AdditionalFee;
};
#endif // OVERNIGHTPACKAGE_H_INCLUDED
