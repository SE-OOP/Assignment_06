#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include <iostream>
#include<string>
using namespace std;

class OvernightPackage:public Package
{
public:
    OvernightPackage(string,string,string,string,string,string,double,double,double);
    double calculate_Cost();
private:
    double OvernightFee;
};
#endif // OVERNIGHTPACKAGE_H_INCLUDED
