#include <iostream>
#include <stdexcept>
#include"Package.h"
using namespace std;

Package::Package(string s,string r,string a,string c,string t,string n,double w,double f)
{
    setSender(s);
    setReceiver(r);
    setAddress(a);
    setCity(c);
    setState(t);
    setNumber(n);
    setWeight(w);
    setFee(f);
}
void Package::setSender(string s)
{
    sender=s;
}
string Package::getSender()
{
    return sender;
}
void Package::setReceiver(string r)
{
    receiver=r;
}
string Package::getReceiver()
{
    return receiver;
}
void Package::setAddress(string a)
{
    address=a;
}
string Package::getAddress()
{
    return address;
}
void Package::setCity(string c)
{
    city=c;
}
string Package::getCity()
{
    return city;
}
void Package::setState(string t)
{
    state=t;
}
string Package::getState()
{
    return state;
}
void Package::setNumber(string n)
{
    number=n;
}
string Package::getNumber()
{
    return number;
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
    fee=f;
}
double Package::getFee()
{
    return fee;
}
double Package::calculateCost()
{
    return getWeight()*getFee();
}
void Package::print()
{
    cout<<"Sender:"<<' '<<getSender()<<"\nReceiver:"<<' '<<getReceiver()<<"\nAddress:"<<' '<<getAddress()
    <<"\nCity:"<<' '<<getCity()<<"\nState:"<<' '<<getState()<<"\nNumber:"<<' '<<getNumber()<<"\nWeight:"
    <<' '<<getWeight()<<"\nFee:"<<' '<<getFee()<<"\nCost:"<<' '<<calculateCost()<<endl;
}
