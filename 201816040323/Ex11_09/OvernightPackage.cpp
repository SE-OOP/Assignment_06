#include <iostream>
#include <string>
#include "OvernightPackage.h"
using namespace std;

OvernightPackage::OvernightPackage(string sen,string acc,string add,string cit,string sta,string zip,double wei,double pri,double of)
:Package(sen,acc,add,cit,sta,zip,wei,pri)//Pass these variables to the base class constructor
{
    setevOFee(of);
}
double OvernightPackage::calculateCost()
{
    return Package::calculateCost()+evOFee*Package::getweight();//Call the calculateCost function of the base class plus the Weight times evOFee
}
void OvernightPackage::setevOFee(double of)
{
    evOFee=of;
}
double OvernightPackage::getevOFee()
{
    return evOFee;
}
