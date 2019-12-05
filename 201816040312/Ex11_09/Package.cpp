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
double Package::calculatecost()//calculate函数的实现
{
    cost=price*weight;
    return cost;
}
void Package::setsender(string sen)//寄件人的set和get函数
{
    sender=sen;
}
string Package::getsender()
{
    return sender;
}

void Package::setaddressee(string add1)//收件人的set和get函数
{
    addressee=add1;
}
string Package::getaddressee()
{
    return addressee;
}

void Package::setaddress(string add2)//地址的set和get函数
{
    address=add2;
}
string Package::getaddress()
{
    return address;
}

void Package::setcity(string city1)//收件人城市的set和get函数
{
    city=city1;
}
string Package::getcity()
{
    return city;
}

void Package::setcode(string cod)//收件人所在地址的邮寄编码的set和get函数
{
    code=cod;
}
string Package::getcode()
{
    return code;
}

void Package::setweight(double wei)//包裹重量的set和get函数
{
    if(wei>0)
        weight=wei;
    else
    {
        weight=0;
        cout<<"error weight";
    }
}
double Package::getweight()
{
    return weight;
}

void Package::setprice(double pri)//包裹单价的set和get函数
{
    if(pri>0)
        price=pri;
    else
    {
        price=0;
        cout<<"error price";
    }
}
double Package::getprice()
{
    return price;
}
