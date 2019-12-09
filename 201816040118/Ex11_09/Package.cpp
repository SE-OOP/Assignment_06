#include<iostream>
#include<stdexcept>
#include"Package.h"
using namespace std;
Package::Package(const string &sender,const string &receive,const string &address,const string &city,const string &state,const string& postcode,double weight,double price)
{
    Sender=sender;
    Receiver=receive;
    Address=address;
    City=city;
    State=state;
    Postcode=postcode;
    setWeight(weight);
    setPrice(price);
}
double Package::calculateCost()
{
    return Weight*Price;
}
void Package::setWeight(double weight)
{
    if(weight<=0)
    {
        Weight=0;
    }
    else
        Weight=weight;
}
void Package::setPrice(double price)
{
    if(price<=0)
    {
        Price=0;
    }
    else
        Price=price;
}
double Package::getWeight()const
{
    return Weight;
}
double Package::getPrice()const
{
    return Price;
}
void Package::printf()const
{
    cout<<Sender<<endl;
    cout<<Receiver<<endl;
    cout<<Address<<endl;
    cout<<City<<endl;
    cout<<State<<endl;
    cout<<Postcode<<endl;
    cout<<Weight<<endl;
    cout<<Price<<endl;
}
