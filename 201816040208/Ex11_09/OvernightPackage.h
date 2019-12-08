#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include"Package.h"

class OvernightPackage : public Package
{
public:
    OvernightPackage(string, string, string, string, string,
            string, string, string, string, string, double, double, double);
    double calculateCost();

private:
    double fee; //额外费用

};
#endif // OVERNIGHTPACKAGE_H
