#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED

#include "Package.h"

class OvernightPackage : public Package
{
public:
    explicit OvernightPackage(string = "Li",string = "Zeng",string = "ZhenZou",string = "430521",double = 1.0,double = 1.0,double = 3.0);
    double calculateCost();
    double getOCost();
    void print();
private:
    double ocost;
};

#endif // OVERNIGHTPACKAGE_H_INCLUDED
