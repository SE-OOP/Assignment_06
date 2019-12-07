#include <iostream>
#include "TwoDayPackage.h"
#include "Package.h"
using namespace std;
//define the constructor of the TwoDayPackage
TwoDayPackage::TwoDayPackage(const string &sName,const string &rName,const string &add,const string &c,const string &s,const string &Pcode,double w,double f,double nFee,double tdfee):Package(sName,rName,add,c,s,Pcode,w,f)
{
    twoDayFee = f;
}
double TwoDayPackage::calculateCost()  //define the function to calculateCoast of the twoDayPackage
{
    return Package::getWeight() * Package::getFee() + twoDayFee;
}
