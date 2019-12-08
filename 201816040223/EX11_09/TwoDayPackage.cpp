// Member-function definitions for class TwoDayPackage
#include <iostream>
using namespace std;

#include "TwoDayPackage.h" // TwoDayPackage class definition
TwoDayPackage::TwoDayPackage(string &con,string &ship,string &sit,string &pla,string &sta,double zip,double wei,double co,double two)
:Package(con,ship,sit,sta,pla,zip,wei,co)
{


}
void TwoDayPackage::setTwofee(double two)
{
    twofee=two;
}
double TwoDayPackage::getTwofee()
{
    return twofee;
}
double TwoDayPackage::calculateCost()
{
    return Package::calculateCost()+twofee;
}
