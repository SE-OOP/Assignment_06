#include "OvernightPackage.h"

OvernightPackage::OvernightPackage(double a,const string &name,const string &address,const string &city,const string &state,
                 const string &zip,double weight, double costper )
                 :Package(name, address, city, state, zip, weight, costper)
{
    additioanlFee = a;
}

double OvernightPackage::calculateCost()
{
    return Package::calculateCost() + additioanlFee;
}
