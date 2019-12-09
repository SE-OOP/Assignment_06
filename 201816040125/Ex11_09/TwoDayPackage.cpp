#include<iostream>
#include<stdexcept>
#include"TwoDayPackage.h"
#include<string>
using namespace std;



   TwoDayPackage::TwoDayPackage(const string &sender,const string &reipient,const string &address,const string &city,const string &state,const string &number,double weight,double money,double fee) :Package(sender,recipient,address,city,state,number,weight,money)

{
    setFee(fee);
}


void TwoDayPackage::setFee(double n)
{
    if(n>0.0)
        fee=n;
    else
        throw invalid_argument("Fee must be >0.0");
}

double TwoDayPackage::calculateCost()const
{
    //calculatecost=Package::getWeight()*Package::getMoney()+getFee();
    return Package::getWeight()*Package::getMoney()+getFee();
}

double TwoDayPackage::getFee()const
{
    return fee;
}
