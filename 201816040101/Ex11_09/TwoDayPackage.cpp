#include "TwoDayPackage.h"


using namespace std;


TwoDayPackage::TwoDayPackage(string name1,string name2,string a,string b,string c,string d,double w,double f,double x)
                                   :Package( name1, name2, a, b, c, d,w,f)
{
    setSecondfee(x);
}
void TwoDayPackage::setSecondfee(double x)
{
    secondfee=x;
}
double TwoDayPackage::getSecondfee()
{
    return secondfee;
}
double TwoDayPackage::calculateCost()
{
    return Package::calculateCost()+secondfee;
}
