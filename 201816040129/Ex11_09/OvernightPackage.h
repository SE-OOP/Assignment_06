#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED

#include"Package.h"

class OvernightPackage:public Package
{
public:
    OvernightPackage(const string &,const string &,const string &,const string &,const string &,const string &,double=0,double=0,double=0);// constructor initializes balance
    double CalculateCost();//get the fee
private:
    double overnightfee;//the data of overnightfee
    double weight1;//the data of weight
};


#endif // OVERNIGHTPACKAGE_H_INCLUDED
