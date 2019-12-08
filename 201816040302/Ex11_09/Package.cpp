#include <iostream>
#include <ostream>
#include"Package.h"//Package类
using namespace std;
//Package的构造函数
Package::Package(const string &sen,const string &add1,const string &add2,const string &city1,const string &cod,double wei,double pri)
{
   setsender(sen);
   setaddressee(add1);
   setaddress(add2);
   setcity(city1);
   setcode(cod);
   setweight(wei);
   setprice(pri);
   cost=0;
}
void Package::setPackageWeight(double pw)
{
    if(pw>0)
    {
        packageWeight=pw;
    }
    else
    {
        throw invalid_argument("packageweight must be > 0");
    }
}
double Package::getPackageWeight()const
{
    return packageWeight;
}
void Package::setPerUnitCost(double puc)
{
    if(puc>0)
    {
        perUnitCost=puc;
    }
    else
    {
        throw invalid_argument("perUnitCost must be > 0");
    }
}
void Package::setaddresseeFirstName(const string &a)
{
    addresseeFirstName=a;
}
string Package::getaddresseeFirstName()const
{
    return addresseeFirstName;
}
void Package::setsenderLastName(const string &s)
{
    senderLastName=s;
}
string Package::getsenderLastName()const
{
    return senderLastName;
}
void Package::setaddresseeLastName(const string &a)
{
    addresseeLastName=a;
}
string Package::getaddresseeLastName()const
{
    return addresseeLastName;
}
void Package::setsenderAddress(const string &s)
{
    senderAddress=s;
}
string Package::getsenderAddress()cons
{
    return senderAddress;
}
void Package::setaddresseeAddress(const string &a)
{
    addresseeAddress=a;
}
string Package::getaddresseeAddress()const
{
    return addresseeAddress;
}
void Package::setsenderCity(const string &s)
{
    senderCity=s;
}
string Package::getsenderCity()const
{
    return senderCity;
}
void Package::setaddresseeCity(const string &a)
{
    addresseeCity=a;
}
string Package::getaddresseeCity()const
{
    return addresseeCity;
}
void Package::setsenderState(const string &s)
{
    senderState=s;
}
double Package::calculateCost() const   //direct calculate by weight*unitPrice
{
    return getWeight()*getUnitPrice();
}
