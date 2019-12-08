#include<iostream>
#include<stdexcept>
#include"OvernightPackage.h"
using namespace std;
OvernightPackage::OvernightPackage(const string &sender,const string &receive,const string &address,const string &city,const string &state,const string& postcode,double weight,double price,double charge)
:Package(sender,receive,address,city,state,postcode,weight,price)
{
    Charge=charge;
}
double OvernightPackage::calculateCost()
{
    return Package::getWeight()*(Package::getPrice()+Charge);
}
