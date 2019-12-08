//OvernightPackage.cpp
// Member-function definitions for class Package.
#include <iostream>
#include <stdexcept>
using namespace std;

#include <string>
#include "OvernightPackage.h"
//创建OvernightPackage的构造函数，重新加载函数
OvernightPackage::OvernightPackage(string sendername, string recipientname,
                 string aaddressees, string ccity,
                 string sstate, string ppostalcode,
                  double wweight, double ffee, double eextrafee)
    :Package( sendername,recipientname,aaddressees,ccity, sstate,ppostalcode, wweight, ffee )
{
    setExtraFee( eextrafee);
}

void OvernightPackage::setExtraFee(double eextrafee)
{
    if(eextrafee>=0.0)
    {
        extrafee=eextrafee;
    }
    else
        throw invalid_argument(" extrafee must be >= 0.0 ");
}
double OvernightPackage::getExtraFee()
{
   return extrafee;
}

double OvernightPackage::calculateCost()//额外加入每盎司后的费用
{
    return (Package::getFee()+getExtraFee())*Package::getWeight();
}

