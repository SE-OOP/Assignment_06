#include"Package.h"
#include"TwoDayPackage.h"
#include <string>

TwoDayPackage::TwoDayPackage(string s,string r,string a,string c,string st,string co,double w, double f,double b):Package(s,r,a,c,st,co,w,f)
{
    setBaseFee(b);
}

void TwoDayPackage::setBaseFee(double b)
{
    if(b>=0)
    baseFee=b;
}

double TwoDayPackage::calculateCost()
{
    return baseFee+getOunce()*getFpo();
}

double TwoDayPackage::getBaseFee()
{
    return baseFee;
}
