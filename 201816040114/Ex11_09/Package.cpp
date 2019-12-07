#include "Package.h"
#include <iostream>

using namespace std;

Package::Package(string ts,string rp,string ad,string pt,double w,double c)
: theSender(ts),recipient(rp),address(ad),postcode(pt),weight(w),cost(c)
{

}

string Package::gettheSender()
{
    return theSender;
}

string Package::getRecipient()
{
    return recipient;
}

string Package::getAddress()
{
    return address;
}

string Package::getPostcode()
{
    return postcode;
}

double Package::getWeight()
{
    return weight;
}

double Package::getCost()
{
    return cost;
}

double Package::calculateCost()
{
    return cost*weight;
}


void Package::print()
{
    cout<<"TheSender : "<<gettheSender()<<endl;
    cout<<"Recipient : "<<getRecipient()<<endl;
    cout<<"Address : "<<getAddress()<<endl;
    cout<<"Postcode : "<<getPostcode()<<endl;
    cout<<"Weight : "<<getWeight()<<endl;
    cout<<"Cost : "<<getCost()<<endl;
    cout<<"Total : "<<calculateCost()<<endl;
}

