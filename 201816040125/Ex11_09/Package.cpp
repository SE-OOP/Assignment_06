#include<iostream>
#include<stdexcept>
#include"Package.h"
#include<string>
using namespace std;


Package::Package(const string &sender,const string &reipient,const string &address,const string &city,const string &state,const string &number,double weight,double money)
:Package(sender,recipient,address,city,state,number)
{
    setWeight(weight);
    setMoney(money);
}

void Package::setWeight(double n)
{
    if(n>0.0)
        weight=n;
    else
        throw invalid_argument("weight must be >0.0");
}

double Package::getWeight() const
{
   return weight;
}

void Package::setMoney(double m)
{
    if(m>0.0)
        money=m;
    else
        throw invalid_argument("Money must be >0.0");
}

double Package::getMoney()const
{
    return money;
}


double Package::calculateCost()
{
    //calculatecost=weight*money;
    return weight*money;
}

string Package::getSender()const
{
    return sender;
}

string Package::getRecipient()const
{
    return recipient;
}

string Package::getAddress()const
{
    return address;
}

string Package::getCity()const
{
    return city;
}

string Package::getState()const
{
    return state;
}

string Package::getNumber()const
{
    return number;
}
