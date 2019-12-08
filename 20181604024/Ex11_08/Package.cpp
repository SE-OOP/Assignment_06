#include <iostream>
#include <string>

using namespace std;

#include "Package.h"


Package::Package(const string &sender,const string &receiver,const string &address,
const string &city,const string &province,const string &postcode,
double mass,double price):Sender(sender),Receiver(receiver),Address(address),City(city),Province(province),PostCode(postcode)
{
    setMass(mass);
    setPrice(price);
}

void Package::setMass(double mass)
{
    Mass = mass;
}

void Package::setPrice(double price)
{
    Price = price;
}

double Package::calculateCost()
{
    Price *= Mass;
    return Price;
}

double Package:: getMass_r()
{
    return Mass;
}

double Package:: getPrice_r()
{
    return Price;
}

void Package::print()
{
    cout<<"\nSender:"<<Sender<<"\nReceiver:"<<Receiver<<"\nAddress:"<<Address<<"\nCity:"<<City<<"\nProvince:"<<Province
    <<"\nPostCode:"<<PostCode<<"\nMass:"<<Mass<<"KG"<<"\nPrice:$"<<Price;
}
