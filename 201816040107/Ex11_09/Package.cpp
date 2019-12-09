#include <iostream>
#include <iomanip>
#include "Package.h"
using namespace std;

Package::Package(string a,string b1,string b2,string b3,string b4,string b5,double w,double c)
{
    setsender(a);
    setaddressee(b1);
    setaddress(b2);
    setcity(b3);
    setstate(b4);
    setcode(b5);
    setweight(w);
    setcost(c);
}
void Package::setsender(string a)
{
    sender=a;
}
string Package::getsender()
{
    return sender;
}
void Package::setaddressee(string b)
{
    addressee=b;
}
string Package::getaddressee()
{
    return addressee;
}
void Package::setaddress(string b)
{
    address=b;
}
string Package::getaddress()
{
    return address;
}
void Package::setcity(string b)
{
    city=b;
}
string Package::getcity()
{
    return city;
}
void Package::setstate(string b)
{
    state=b;
}
string Package::getstate()
{
    return state;
}
void Package::setcode(string b)
{
    code=b;
}
string Package::getcode()
{
    return code;
}
void Package::setweight(double w)
{
    if(w>0)
    {
        weight=w;
    }
    else
        throw invalid_argument("weight is invalid");
}
double Package::getweight()
{
    return weight;
}
void Package::setcost(double c)
{
    if(c>0)
    {
        cost=c;
    }
    else
        throw invalid_argument("cost is invalid");
}
double Package::getcost()
{
    return cost;
}
double Package::calculateCost()
{
    return weight*cost;
}
void Package::print()
{
    cout<<"sender:"<<getsender()<<" "<<"addressee:"<<getaddressee()<<" "<<"address:"<<getaddress()<<endl;
    cout<<"city:"<<getcity()<<" "<<"state:"<<getstate()<<" "<<"code:"<<getcode()<<endl;
}
