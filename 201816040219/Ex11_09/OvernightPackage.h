#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
using namespace std;
#include <string>
#include "OvernightPackage.h"

class OvernightPackage :public Package
{
public:
    OvernightPackage(string,string,string,string,string,int,double,double,double);

   double calculatecost();
   void print();

private:
    double lv;

};

#endif


