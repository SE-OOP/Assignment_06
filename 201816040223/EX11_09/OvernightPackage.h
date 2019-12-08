// Definition of TwoDayPackage class.
#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include"Package.h"
/* Write a directive to include the Package header file */
using namespace std;
class OvernightPackage: public Package/* Write a line to have class OvernightPackage inherit publicly from Package */
{
public:
OvernightPackage(string &,string &,string &,string &,string &,double=0.0,double=0.0,double=0.0,double=0.0);
     /* Declare constructor for TwoDayPackage */
    void setOverfee(double);
    double getOverfee();
    double calculateCost();
private:
   double overfee;/* Declare data member overfee */


}; // end class OvernightPackage
#endif
