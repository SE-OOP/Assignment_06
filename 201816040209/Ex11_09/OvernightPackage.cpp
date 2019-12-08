#include <iostream>
#include "OvernightPackage.h"
using namespace std;

OvernightPackage::OvernightPackage(double ounce,double costperounce,double additionalfee)
{
Package(ounce,costperounce);
AdditionalFee = additionalfee>0?additionalfee:1;
}

OvernightPackage::~OvernightPackage()
{

}

double OvernightPackage::calculateCost()
{
    return  Package::calculateCost();
}
