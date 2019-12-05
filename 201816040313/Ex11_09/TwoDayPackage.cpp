#include <iostream>
#include "TwoDayPackage.h"
#include <stdexcept>
using namespace std;

TwoDayPackage::TwoDayPackage(const string &sfirst,const string &slast,const string &afirst,const string &alast,const string &saddress,const string &aaddress,const string &scity,
            const string &acity,const string &sstate,const string &astate,const string &scode,const string &acode,double pweight,double pcost,double tcost)
:Package(sfirst,slast,afirst,alast,saddress,aaddress,scity,acity,sstate,astate,scode,acode,pweight,pcost)
{
    setTwoDayCost(tcost);
}
void TwoDayPackage::setTwoDayCost(double tdc)
{
    if(tdc>0)
    {
        twoDayCost=tdc;
    }
    else
    {
        throw invalid_argument("twodaypackage must be > 0");
    }
}
double TwoDayPackage::getTwoDayCost()const
{
    return twoDayCost;
}
double TwoDayPackage::calculateCost()
{
    return getTwoDayCost()+Package::calculateCost();
}
void TwoDayPackage::printMessage()const
{
    Package::printMessage();
    cout<<"two day cost: "<<getTwoDayCost();
    cout<<endl;
}
