#include "Package.h"
#include "OvernightPackage.h"
#include <string>

OvernightPackage::OvernightPackage(string s,string r,string a,string c,string st,string co,double w, double f,double e):Package(s,r,a,c,st,co,w,f)
{
    setExtraFee(e);
}

void OvernightPackage::setExtraFee(double e)
{
    if (e>0)
    extraFee=e;
}

double OvernightPackage::calculateCost()
{
    setFpo(extraFee+getFpo());
    return getOunce()*getFpo();
}
