#include <iostream>
#include <stdexcept>
#include"TwoDayPackage.h"

using namespace std;

TwoDayPackage::TwoDayPackage(
string s,string r,string a,string c,string t,string n,double w,double f,double b)
:Package( s, r, a, c, t, n, w, f)
{
   setBaseFee(b);
}
void TwoDayPackage::setBaseFee(double b)
{
    baseFee=b;
}
double TwoDayPackage::getBaseFee()
{
    return baseFee;
}
double TwoDayPackage::calculateCost()
{
    return getBaseFee()+Package::calculateCost();
}
void TwoDayPackage::print()
{
    Package::print();
    cout<<"TwoDayCost"<<calculateCost()<<endl;
}
