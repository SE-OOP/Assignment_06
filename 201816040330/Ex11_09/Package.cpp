#include "Package.h"//Package class definition
#include <iostream>
#include <string>//C++ standard string class

using namespace std;

Package::Package(const string &sender,const string &addressee,const string &addr,const string &ci,const string &state,const string &postal,double weight,double fee)
{
    sendername=sender;
    addresseename=addressee;
    address=addr;
    city=ci;
    statement=state;
    postalcode=postal;
    setWeight(weight);
    setFee(fee);
}//end Package constructor

void Package::setWeight(double weigth)
{
    if(weight>0.0)
        weight=weight;
}//end function setWeight

double Package::getWeight()
{
    return weight;
}//end function getWeight

void Package::setFee(double fee)
{
    if(fee>0.0)
        fee=fee;
}//end function setFee

double Package::getFee()
{
    return fee;
}//end function getFee

double Package::calculateCost(double wei,double fe)
{
    return wei*fe;
}//end function calculateCost
