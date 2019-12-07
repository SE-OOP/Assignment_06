
#include "OvernightPackage.h"

double OvernightPackage::getAddfee() const {
    return addfee;
}

void OvernightPackage::setAddfee(double addfee) {
    if(addfee > 0)
    {
        OvernightPackage::addfee = addfee;
    }
    else
    {
        OvernightPackage::addfee = 0;
    }

}
//Constructor OvernightPackage
OvernightPackage::OvernightPackage() {

}

OvernightPackage::OvernightPackage(string a, string b, string c, string d, string e, int f, double g, double h, double l):Package(a,b,c,d,e,f,g,h)
{
    setAddfee(l);
}
//Rewrite Calculate function and add fee
double OvernightPackage::calculateCost() {
    return (getFee()+addfee)*getSPackageW();
}
