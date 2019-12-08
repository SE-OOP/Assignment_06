#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(string a,string b,string c,string d,string e,string f,double g,double h,double i)
    :Package(a,b,c,d,e,f,g,h),twodayprice(i)
{

}

double TwoDayPackage::calculateCost()
{
    return Package::calculateCost()+twodayprice;
}
