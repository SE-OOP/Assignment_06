#ifndef TWODAYPackage_H
#define TWODAYPackage_H
#include <string>
#include "Package.h"
using namespace std ;
class TwoDayPackage :public Package
{
public:
    TwoDayPackage (const string &, const string &,const string &, const string &, const string &,const string &,double=0.0 ,double=0.0,double =0.0 ) ;
    void setcost (double ) ;//set花费
    double calculate_Cost ()  ;
    void print () ;
private:
    double twodaycost ;//加价
};
#endif // TwoDayfPackage_H
