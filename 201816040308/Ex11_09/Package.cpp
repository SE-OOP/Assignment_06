#include "Package.h"

Package::Package(string a,string b,string c,string d,string e,string f,double g,double h)
    :sender(a),recipient(b),address(c),city(d),state(e),postalcode(f),weight(g),price(h)
{

}

string Package::getsender()
{
    return sender;
}

string Package::getrecipient()
{
    return recipient;
}

string Package::getaddress()
{
    return address;
}

string Package::getcity()
{
    return city;
}

string Package::getstate()
{
    return state;
}

string Package::getpostalcode()
{
    return postalcode;
}

double Package::getweight()
{
    return weight;
}

void Package::setweight(double a)
{
    if(a>0)
        weight = a;
    else
        throw invalid_argument("weight must greater than 0.0");
}

double Package::getprice()
{
    return price;
}

void Package::setprice(double a)
{
    if(a>0)
        price = a;
    else
        throw invalid_argument("price must greater than 0.0");
}

double Package::calculateCost()
{
    return weight*price;
}
