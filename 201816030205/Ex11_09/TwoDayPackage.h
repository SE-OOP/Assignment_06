#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED

#include "Package.h"

class TwoDayPackage:Package
{
  public:
      TwoDayPackage(string,string,string,string,string,string,double,double,double);
      double calculateCost();
      void setBaseFee(double);
      double getBaseFee();
  private:
    double baseFee=0;

};




#endif // TWODAYPACKAGE_H_INCLUDED
