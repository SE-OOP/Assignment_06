#include <iostream>
#include <stdexcept>
#include "OvernightPackage.h"
using namespace std;

OvernightPackage::OvernightPackage(const string &sfirst,const string &slast,const string &afirst,const string &alast,const string &saddress,const string &aaddress,const string &scity,
            const string &acity,const string &sstate,const string &astate,const string &scode,const string &acode,double pweight,double pcost,double ecost)
:Package(sfirst,slast,afirst,alast,saddress,aaddress,scity,acity,sstate,astate,scode,acode,pweight,pcost)
{
    setExtraCost(ecost);
}
void OvernightPackage::setExtraCost(double ec)
{
    if(ec>0)
    {
        extraCost=ec;
    }
    else
    {
        throw invalid_argument("extracost must be > 0");
    }
}
double OvernightPackage::getExtraCost()const
{
    return extraCost;
}
double OvernightPackage::calculateCost()
{
    return (Package::getPerUnitCost()+getExtraCost())*Package::getPackageWeight();
}
void OvernightPackage::printMessage()const
{
    Package::printMessage();
    cout<<"extra cost: "<<getExtraCost();
    cout<<endl;
}
