#include<iostream>
#include<stdexcept>
#include"Package.h"
#include"TwoDayPackage.h"
using namespace std;
TwoDayPackage::TwoDayPackage(const string &sender,const string &receive,const string &address,const string &city,const string &state,const string& postcode,double weight,double price,double fee)
:Package(sender,receive,address,city,state,postcode,weight,price)
{
    Fee=fee;
}
double TwoDayPackage::calculateCost()
{
    return Package::calculateCost()+Fee;
}
