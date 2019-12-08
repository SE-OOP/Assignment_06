#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED
#include <string>
#include "Package.h"
using namespace std;
class TwoDayPackage : public Package
{
public:
    TwoDayPackage(const string &,const string &,const string &,const string &,const string &,
            const string &,const string &,const string &,const string &,const string &,
            double , double , double);
    void setFee(double);
    double getFee();
    double calculateCost(double, double );
private:
    double fee;
};

#endif // TWODAYPACKAGE_H_INCLUDED
