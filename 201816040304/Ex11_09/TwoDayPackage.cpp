
#include <string>
#include"TwoDayPackage.h"


TwoDayPackage::TwoDayPackage(string a,string b,string c,string d,string e,string f,string g,string h,string i,string j,double k,double l,double fee)
:Package( a, b, c, d, e, f, g, h, i, j, k, l),ChargeFee(fee)
{

}

double TwoDayPackage::calculateCost()
{
    return getWeight()*getCostPerCup()+ChargeFee;
}
