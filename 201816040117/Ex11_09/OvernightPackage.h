#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include<string>
#include"Package.h"
using namespace std;
class OvernightPackage:public Package
{
public:
    OvernightPackage(string,string,string,string,string,string,double,double,double);//constructor
    double calculateCost();//total cost
private:
    double nightcost;
};


#endif // OVERNIGHTPACKAGE_H_INCLUDED
