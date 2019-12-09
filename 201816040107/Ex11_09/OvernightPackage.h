#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include"Package.h"
using namespace std;
class OvernightPackage:public Package
{
public:
    OvernightPackage(string,string,string,string,string,string,double,double,double);
    double calculateCost();//redefine of calculateCost;
    void setpremium(double);//set premium;
    double getpremium();//return premium;
    void print();
private:
    double premium;//premium;
};


#endif // OVERNIGHTPACKAGE_H_INCLUDED
