
#include "TwoDayPackage.h"

double TwoDayPackage::getFsfee() const {
    return Fsfee;
}

void TwoDayPackage::setFsfee(double fsfee) {
    if(fsfee>0)
    {
        Fsfee = fsfee;
    }
    else
    {
        Fsfee=0;
    }
}

TwoDayPackage::TwoDayPackage() {

}
//Initialization constructor
TwoDayPackage::TwoDayPackage(string a, string b, string c, string d, string e, int f, double g, double h, double l):Package(a,b,c,d,e,f,g,h)
{
    setFsfee(l);
}
//Rewrite Calculate function and add Flat shipping fee
double TwoDayPackage::calculateCost() {
    return Package::calculateCost()+Fsfee;
}
