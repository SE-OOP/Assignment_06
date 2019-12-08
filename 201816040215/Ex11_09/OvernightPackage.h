#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED

#include "Package.h"

class OvernightPackage : public Package
{
public:
    void setextraFee();
    double getextraFee();
    double calculateCost();
private:
    double extraFee;
};

#endif // OVERNIGHTPACKAGE_H_INCLUDED
