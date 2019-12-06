#include "OvernightPackage.h"



using namespace std;


OvernightPackage::OvernightPackage(string name1,string name2,string a,string b,string c,string d,double w,double f,double x)
                                   :Package( name1,name2, a, b, c, d, w,f)
{
    setNightfee(x);
}
void OvernightPackage::setNightfee(double x)
{
    nightfee=x;
}
double OvernightPackage::getNightfee()
{
    return nightfee;
}
double OvernightPackage::calculateCost()
{
    return Package::calculateCost()+nightfee;
}
