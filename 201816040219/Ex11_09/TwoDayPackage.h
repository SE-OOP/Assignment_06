#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include <string>
#include "Package.h"

class TwoDayPackage :public Package
{
public:

   TwoDayPackage(string,string,string,string,string,int,double,double,double);

   double calculatecost();
   void print();

private:
  double add;
};

#endif


