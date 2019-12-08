#include<iostream>
#include<stdexcept>
#include"OverNightPackage.h"
#include<string>
using namespace std;



OverNightPackage::OverNightPackage(const string &sender,const string &recipient,const string &address,const string &city,const string &state,const string &number,double weight,double money,double fee)
:Package(sender,recipient,address,city,state,number,weight,money)
{
    setAdditionCost(fee);
}


void OverNightPackage::setAdditionCost(double n)
{
    if(n>0.0)
        Additioncost=n;
    else
        throw invalid_argument("Additioncost must be >0.0");
}

double OverNightPackage::calculateCost()
{
    double calculatecost;
    calculatecost=Package::getWeight()*(Package::getMoney()+getAdditionCost());
    return calculatecost;
}

 double OverNightPackage::getAdditionCost()
 {
     return Additioncost;
 }
