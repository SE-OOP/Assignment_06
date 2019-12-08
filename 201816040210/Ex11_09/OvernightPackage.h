#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include <bits/stdc++.h>
#include "Package.h"
class OvernightPackage :public Package
{
public:
    OvernightPackage( string,string,string,string,string,string,double,double,double );//constructor function
    double calculateCost();//function to calculate total cost
    void setextralCost( double );//function to set extral cost
    double getextralCost();//function to get extral cost
private:
    double extralCost;
};


#endif // OVERNIGHTPACKAGE_H_INCLUDED
