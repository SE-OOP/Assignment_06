#include <iostream>
using namespace std;

#include"TwoDayPackage.h"

using namespace std;

TwoDayPackage::TwoDayPackage(string sname,string scity,string sstate,string saddress,string szipcode,
                             string rname,string rcity,string rstate,string raddress,string rzipcode,
                     double kg,double money,double over)
                     :Package(sname,scity,sstate,saddress,szipcode,rname,rcity,rstate,raddress,rzipcode,
                              kg,money)
{
    setOverMoney(over);
}

void TwoDayPackage::setOverMoney(double over)
{
    if(over>0.0)
        OverMoney=over;
    else
        throw invalid_argument("OverMoney must be > 0.0");
}

double TwoDayPackage::getOverMoney()
{
    return OverMoney;
}

double TwoDayPackage::calculateCost()
{
    return Package::calculateCost()+OverMoney;
}

void TwoDayPackage::print()const
{
    Package::print();
    cout<<"The OverMoney is :"<<OverMoney;
}
