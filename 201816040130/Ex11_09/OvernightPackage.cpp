#include <iostream>
#include "OvernightPackage.h"
#include "Package.h"
using namespace std;
//define the constructor of OvernightPackage
OvernightPackage::OvernightPackage(const string &sName,const string &rName,const string &add,const string &c,const string &s,const string &Pcode,double w,double f,double nFee):Package(sName,rName,add,c,s,Pcode,w,f)
{
    overnightFee = nFee;
}
double OvernightPackage::calculateCost()  //define the function to calculateCost of OvernightPackage
{
    return Package::getWeight() * Package::getFee() + overnightFee * Package::getWeight();
}
