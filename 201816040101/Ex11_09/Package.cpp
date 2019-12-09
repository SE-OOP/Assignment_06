#include "Package.h"
#include <string>
#include <iostream>

using namespace std;

Package::Package(string name1,string name2, string a,string b, string c ,string d,double w,double f)
{
    settoName(name1);
    setfromName(name2);
    setCity(a);
    setAddress(b);
    setState(c);
    setCode(d);
    setWeight(w);
    setFee(f);
}
void Package::settoName(string a)
{
    toname=a;
}
string Package::gettoName()
{
    return toname;
}
void Package::setfromName(string a)
{
    fromname=a;
}
string Package::getfromName()
{
    return fromname;
}
void Package::setCity(string b)
{
    city=b;
}
string Package::getCity()
{
    return city;
}
void Package::setAddress(string c)
{
    address=c;
}
string Package::getAdress()
{
    return address;
}
void Package::setState(string a)
{
    state=a;
}
string Package::getState()
{
    return state;
}
void Package::setCode(string a)
{
    code=a;
}
string Package::getCode()
{
    return code;
}
void Package::setWeight(double w)
{
    weight=w;
}
double Package::getWeight()
{
    return weight;
}
void Package::setFee(double f)
{
    if(fee>=0)
         fee=f;
    else
    {
        fee=0;
        cout<<"the fee is wrong !"<<endl;
    }
}
double Package::getFee()
{
    return fee;
}

double Package::calculateCost()
{
    return weight*fee;
}
