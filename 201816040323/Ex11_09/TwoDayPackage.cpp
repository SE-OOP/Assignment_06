#include <iostream>
#include <string>
#include "TwoDayPackage.h"
using namespace std;

TwoDayPackage::TwoDayPackage(string sen,string acc,string add,string cit,string sta,string zip,double wei,double pri,double tdf)
:Package(sen,acc,add,cit,sta,zip,wei,pri)//Pass these variables to the base class constructor
{
    setTDFee(tdf);
}
double TwoDayPackage::calculateCost()
{
    return Package::calculateCost()+TDFee;//Call the calculateCost function of the base class plus the flat fee
}
void TwoDayPackage::setTDFee(double tdf)
{
    TDFee=tdf;
}
double TwoDayPackage::getTDFee()
{
    return TDFee;
}
