#include <iostream>
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

using namespace std;

OvernightPackage::OvernightPackage(
 const string &sendname, const string &receivename, const string &address,
    const string &city, const string &province, const string &postalcode,
    double quality, double price, double additionalcost )
    :Package( sendname, receivename, address, city, province, postalcode,quality, price)
    {
        setAdditionalCost( additionalcost );
    }

void OvernightPackage::setAdditionalCost( double additionalcost )
{
    if( additionalcost > 0 )
    AdditionalCost = additionalcost;
    else
        throw invalid_argument("additional cost should be > 0.0");
}
//function to set additional cost

double OvernightPackage::getAdditionalCost()
{
    return AdditionalCost;
}
//function to get additional cost

double OvernightPackage::calculateCost()
{
    return ( getPrice() + getAdditionalCost() ) * getQuality();
}//function to calculate cost
