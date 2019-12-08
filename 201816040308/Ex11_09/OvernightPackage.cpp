#include "OvernightPackage.h"

OvernightPackage::OvernightPackage(string a,string b,string c,string d,string e,string f,double g,double h,double i)
    :Package(a,b,c,d,e,f,g,h),overnightprice(i)
{

}

double OvernightPackage::calculateCost()
{
    setprice(getprice()+overnightprice);
    return Package::calculateCost();
}
