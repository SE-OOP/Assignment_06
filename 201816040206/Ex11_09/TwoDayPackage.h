#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED
#include <string>
using namespace std;
#include "Package.h"

class TwoDayPackage:public Package
{
public:
    TwoDayPackage(const string &, const string &, const string &, const string &,
           const string &, const string &,const string &, const string &,
           const string &, const string &,double,double,double);
    double caculateCost();
    void setTwoDaysFee(double &);
    double getTwoDaysFee();
private:
    double TwoDayfee;

};
#endif
