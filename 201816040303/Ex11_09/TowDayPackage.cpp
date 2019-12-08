#include <iostream>

using namespace std;

#include"TowDayPackage.h"
#include"Package.h"

TowDayPackage::TowDayPackage(string s,string r,string sta,string cit,
                             int pos,double w,double c,double f):
                                 Package::Package(s,r,sta,cit,pos,w,c)
    {
        faltFee = f;
    }

double TowDayPackage::getFaltFee()
{
    return faltFee;
}

double TowDayPackage::calculateCost()
{
    return Package::calculateCost()+faltFee;
}
