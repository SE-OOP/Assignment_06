#include <iostream>
#include <string>
using namespace std;

#include "Package.h"
#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(string first,string second,string dizhi,string chengshi,string zhou,int you,double zhong,double ang,double ad)
    :Package(first,second,dizhi,zhou,you,zhong,ang)
{
    add=ad;
}

double TwoDayPackage::calculatecost()
{
    double money;
    money=Package::calculatecost()+add;
    return  money;
}

void  TwoDayPackage::print()
{
    Package::print();
    cout<<"×Ü·ÑÓÃ"<<calculatecost()<<endl;
}
