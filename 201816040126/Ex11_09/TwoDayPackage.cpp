#include <iostream>
#include "TwoDayPackage.h"

using namespace std;

TwoDayPackage::TwoDayPackage(
 const string &sendname, const string &receivename, const string &address,
    const string &city, const string &province, const string &postalcode,
    double quality, double price, double flatcharge)
    :Package( sendname, receivename, address, city, province, postalcode,quality, price)
    {
        setFlatCharge( flatcharge );
    }

void TwoDayPackage::setFlatCharge( double flatcharge )
{
    if( flatcharge > 0 )
    FlatCharge = flatcharge;
    else
        throw invalid_argument("flat charge should be > 0.0");
}

double TwoDayPackage::getFlatCharge()
{
    return FlatCharge;
}

double TwoDayPackage::calculateCost()
{
    return Package::calculateCost() + getFlatCharge();
}
