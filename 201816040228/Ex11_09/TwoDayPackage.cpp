//TwoDayPackage.cpp
// Member-function definitions for class Package.
#include <iostream>
#include <stdexcept>
using namespace std;

#include <string>
#include "TwoDayPackage.h"
//创建TwoDayPackage的构造函数，重新加载函数
TwoDayPackage::TwoDayPackage(string sendername, string recipientname,
                 string aaddressees, string ccity,
                 string sstate, string ppostalcode,
                  double wweight, double ffee, double pingji)
    :Package( sendername,recipientname,aaddressees,ccity, sstate,ppostalcode, wweight, ffee )
{
    setPingJiFei( pingji);
}

void TwoDayPackage::setPingJiFei( double pingji)
{
    if(pingji>=0.0)
    {
        pingjifei=pingji;
    }
    else
        throw invalid_argument(" pingjifei must be >= 0.0 ");//判断
}
double TwoDayPackage::getPingJiFei()
{
   return pingjifei;
}

double TwoDayPackage::calculateCost()//加入额外收费后的费用
{
    return getPingJiFei()+Package::calculateCost();
}
