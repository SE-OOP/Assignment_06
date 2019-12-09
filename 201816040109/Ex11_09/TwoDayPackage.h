#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include "Package.h"
#include <string>
#include <iostream>
using namespace std;

class TwoDayPackage : public Package
{
public:
    TwoDayPackage(const string &, const string &, const string &, const string &,
                  const string &, const string &, double, double, double);
    double calculateCost();

private:
    double flatMailFee; //平寄费
};
#endif //TWODAYPACKAGE_H