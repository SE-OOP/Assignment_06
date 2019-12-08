#include <iostream>
#ifndef PACKAGE_H
#define PACKAGE_H
#include "Package.h"
using namespace std;

class OvernightPackage : public Package
{
public:
    OvernightPackage(char , char , char , char , int , double , double , double);
    void setCostOvernight(double);
    double getCostOvernight();
    double CalculateCost();
private:
    double cost1;
};
#endif
