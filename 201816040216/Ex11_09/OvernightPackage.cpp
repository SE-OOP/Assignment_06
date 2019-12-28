#include <iostream>
using namespace std;

#include"OvernightPackage.h"

using namespace std;

OvernightPackage::OvernightPackage(string sname,string scity,string sstate,string saddress,string szipcode,string rname,string rcity,string rstate,
                                   string raddress,string rzipcode,double kg,double money,double extra)
                     :Package(sname,scity,sstate,saddress,szipcode,rname,rcity,rstate,raddress,rzipcode,
                              kg,money)
{
    setExtraMoney(extra);
}

void OvernightPackage::setExtraMoney(double extra)
{
    if(extra>0.0)
        ExtraMoney=extra;
    else
        throw invalid_argument("ExtraMoney must be > 0.0");
}

double OvernightPackage::getExtraMoney()
{
    return ExtraMoney;
}

double OvernightPackage::calculateCost()
{
    return Package::calculateCost()+ExtraMoney;
}

void OvernightPackage::print()const
{
    Package::print();
    cout<<"The ExtraMoney is :"<<ExtraMoney;
}
