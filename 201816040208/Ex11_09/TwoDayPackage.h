#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include "Package.h"

class TwoDayPackage : public Package
{
public:
    TwoDayPackage(string, string, string, string, string,
            string, string, string, string, string, double, double, double);

    double calculateCost();

private:
    double fee; //额外费用

};
#endif // TWODAYPACKAGE_H
