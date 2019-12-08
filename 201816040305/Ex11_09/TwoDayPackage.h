#include <iostream>
#ifndef PACKAGE_H
#define PACKAGE_H
#include "Package.h"
using namespace std;

class TwoDayPackage : public Package
{
public:
    TwoDayPackage(char , char , char , char , int , double , double , double);
    void setCost(double);
    double getCost();
    double CalculateCost();
private:
    double Cost ;
};
#endif
