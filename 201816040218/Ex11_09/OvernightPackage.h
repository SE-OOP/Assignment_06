#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED

#include "Package.h"
using namespace std;
class OvernightPackage:public Package
{
public:
    OvernightPackage(const string& ,const string&  ,const string&  ,const string&  ,const string&  ,const string&  ,const string&  ,const string&  ,const string&  ,const string&  ,double ,double,double);
    double calculateCost();
private:
    double OverNightFee;

};



#endif // OVERNIGHTPACKAGE_H_INCLUDED
