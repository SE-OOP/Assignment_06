#ifndef TOWDAYPACKAGE_H_INCLUDED
#define TOWDAYPACKAGE_H_INCLUDED

#include<string.h>
#include"Package.h"
using namespace std;

class TowDayPackage : public Package
{
public:
    //constructor function
    TowDayPackage(const string &,const string &,const string &,const string &,const string &,
            const string &,const string &,const string &,const string &,const string &,
            const double &,const double &,//the number member of Package
            const double &);//the private number member of TowDayPackage
    void setFee(double );//set function
    double getFee();//return Fee
    double calculateCost();//override function to calculate the fee
private:
    double Fee;//平寄费
};
#endif // TOWDAYPACKAGE_H_INCLUDED
