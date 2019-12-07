#include "TwoDayPackage.h"
#include <iostream>

using namespace std;

TwoDayPackage::TwoDayPackage(string ts,string rp,string ad,string pt,double w,double c,double t)
: Package(ts,rp,ad,pt,w,c)
{
    tcost=t;
}

double TwoDayPackage::calculateCost()
{
    return getCost()*getWeight()+tcost;
}

void TwoDayPackage::print()
{
    cout<<"TheSender : "<<gettheSender()<<endl;
    cout<<"Recipient : "<<getRecipient()<<endl;
    cout<<"Address : "<<getAddress()<<endl;
    cout<<"Postcode : "<<getPostcode()<<endl;
    cout<<"Weight : "<<getWeight()<<endl;
    cout<<"Cost : "<<getCost()<<endl;
    cout<<"Total : "<<calculateCost()<<endl;
}
