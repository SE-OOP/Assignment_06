#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include <iostream>
using namespace std;
#include"Package.h"
class OvernightPackage:public Package
{
public:
   OvernightPackage( const string &, const string &,const string &,const string &,const string &,const string &,
                  double = 0.0, double = 0.0 ,double=0.0);
   double calculateCost();
private:
    double price2;
};


#endif // OVERNIGHTPACKAGE_H_INCLUDED
