#include <iostream>
#include <string>

using namespace std;

#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(const string &sender,const string &receiver,const string &address,
const string &city,const string &province,const string &postcode,
double mass,double price,double twodayprice) : Package(sender,receiver,address,city,province,postcode,mass,price)
{
    setTwoDayPrice(twodayprice);
}

void TwoDayPackage::setTwoDayPrice(double twodayprice)
{
    twoDayPrice = twodayprice;
    totalPrice = getMass_r() * (twoDayPrice + getPrice_r());
}

void TwoDayPackage::print()
{
    Package::print();
    cout<<"\nAddition fee due to the delay of two days:"<<twoDayPrice;
    cout<<"\nTotal price is:"<<totalPrice;
    cout<<endl;
}
