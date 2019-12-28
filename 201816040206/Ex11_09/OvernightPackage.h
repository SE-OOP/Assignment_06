#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include <string>
using namespace std;
#include "Package.h"

class OvernightPackage:public Package
{
public:
    OvernightPackage(const string &, const string &, const string &, const string &,
           const string &, const string &,const string &, const string &,
           const string &, const string &,double, double,double);
    double caculateCost();
    void setExtraFee(double &);
    double getExtraFee();
private:
    double extrafee;
};
#endif
