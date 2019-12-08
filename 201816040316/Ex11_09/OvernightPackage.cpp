#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include"OvernightPackage.h"
using namespace std;

OvernightPackage::OvernightPackageconst(string&sender,const string&receiver,const string&address, const string&city, const string&state,const string&postalcode,double ounce, double cost, double addtionalcost):Package(sender, receiver, address, city, state, postalcode, ounce, cost)
{
 setAddtionalCost(addtionalcost);
}
double OvernightPackage::CalculateCost()
{
    totalCost = getOunce()*(addtionalCost + getCost());
    return totalCost;
}


void OverNightPackage::print()
{
    Package::print();
    cout<<"\nAdditionalCost:"<<additionalCost;
    cout<<"\nTotalCost:"<<OverNightPackage::calculateCost();
    cout<<endl;
}

void OverNightPackage::setAdditionalCost(double additionalcost)
{
    additionalCost = additionalcost;
}
