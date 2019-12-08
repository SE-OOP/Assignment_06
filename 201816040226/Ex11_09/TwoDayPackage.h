#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED

#include "Package.h"
using namespace std;

class TwoDayPackage:public Package
{
public:
    TwoDayPackage(string ,string,string,string,string,double=0.0,double =0.0,double =0.0,double = 0.0);
    void setDayPackage(double);
    double getDayPackage();
   //Redeclare member function calculateInterest
   double calculateCost();
   void print();
private:
   //Declare data member twoDayPackage
   double DayPackage;
}; // end class TwoDayPackage


#endif // TWODAYPACKAGE_H_INCLUDED
