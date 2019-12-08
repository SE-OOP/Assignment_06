#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include"TwoDayPackage.h"
using namespace std;

TwoDayPackage::TwoDayPackage(const string &sender,const string &receiver,const string &address, const string &city,const string &state,const string &postalcode, double ounce,double cost,double twodaycost) : Package(sender,receiver,address,city,state,postalcode,ounce,cost)
{
    setTwoDayCost(twodaycost);
}

void TwoDayPackage::setTwoDayCost(double twodaycost)
{
    twoDayCost = twodaycost;
    totalCost = getOunce() * (twoDayCost + getCost());
}

void TwoDayPackage::print()
{
    Package::print();
    cout<<"\nAdditionCost:"<<twoDayCost<<"\nTotalCost:"<<totalCost<<endl;
}
