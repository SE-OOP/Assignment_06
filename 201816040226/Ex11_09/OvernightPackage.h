#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED

#include "Package.h"
using namespace std;

class OvernightPackage:public Package
{
public:
   OvernightPackage(string ,string,string,string,string,double=0.0,double =0.0,double =0.0,double = 0.0);
    void setNightPackage(double);
    double getNightPackage();
   //Redeclare member function calculateInterest
   double CalculateCost();
   void print();
private:
   //Declare data member twoDayPackage
   double NightPackage;
}; // end class OvernightPackage


#endif // OVERNIGHTPACKAGE_H_INCLUDED
