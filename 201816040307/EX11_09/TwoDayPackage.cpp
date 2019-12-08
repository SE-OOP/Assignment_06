#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(double a,const string &name,const string &address,const string &city,const string &state,
                 const string &zip,double weight, double costper )
                 :Package(name, address, city, state, zip, weight, costper)
{
    flatFee = a;
}

double TwoDayPackage::calculateCost()
{
    return Package::calculateCost() + flatFee;
}
