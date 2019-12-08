#include <iostream>

using namespace std;
#include"OvernightPackage.h"

OvernightPackage::OvernightPackage(string s,string r,string sta,string cit,
                             int pos,double w,double c,double e):
                                 Package::Package(s,r,sta,cit,pos,w,c)
    {
        eFee = e;
    }

double OvernightPackage::getEFee()
{
    return eFee;
}

double OvernightPackage::calculateCost()
{
    return (Package::getCost()+eFee)*Package::getWeight();
}
