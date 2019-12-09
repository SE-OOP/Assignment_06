#include <iostream>
#include <string>
#include "Package.h"
#include "OverNightPackage.h"
using namespace std;

OverNightPackage::OverNightPackage(const string &sN,const string &sA,const string &sC,const string &sS,
                 const string &sZC,const string &rN,const string &rA,const string &rC,
                 const string &rS,const string &rZC,double weight,double price,double charge)
                :Package(sN,sA,sC,sS,sZC,rN,rA,rC,rS,rZC,weight,price)
        {
            setExtraCharges(charge);
        }

void OverNightPackage::setExtraCharges(double charge)
{
    extraCharges = charge;
}
double OverNightPackage::getExtraCharges()
{
    return extraCharges;
}
double OverNightPackage::calculateCost(double weight, double price)
{
    return Package::getWeight() * (Package::getPrice() + extraCharges);
}
