// Member-function definitions for class TwoDayPackage
#include <iostream>
using namespace std;

#include "OvernightPackage.h" // TwoDayPackage class definition
OvernightPackage::OvernightPackage(string &con,string &ship,string &sit,string &pla,string &sta,double zip,double wei,double co,double over)
:Package(con,ship,sit,sta,pla,zip,wei,co)
{


}
void OvernightPackage::setOverfee(double over)
{
    overfee=over;
}
double OvernightPackage::getOverfee()
{
    return overfee;
}
double OvernightPackage::calculateCost()
{
    return Package::calculateCost()+overfee;
}
