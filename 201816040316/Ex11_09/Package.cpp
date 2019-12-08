#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include"Package.h"
using namespace std;


Package::Package(const string&sender,const string&receiver,const string&address, const string&city, const string&state,const string&postalcode,double ounce, double cost):Package(sender, receiver, address, city, state, postalcode)

    setOunce(ounce);
    setCost(cost);

}

void Package::setOunce(double ounce)
{
    Ounce = ounce;
}

void Package::setCost(double cost)
{
    Cost = cost;
}

double Package::calculateCost()
{
    Cost *= Ounce;
    return Cost;
}

double package::getOunce()
{
    return Ounce;
}

double Package::getCost()
{
    return Cost;
}
void Package::print()
{
   cout<<"\nSender:"<<Sender<<"\nReceiver:"<<Receiver<<"\nAddress:"<<address<<"\nCity:"<<city<<"\nState:"<<State<<"\nPostalcode:"<<Postalcode<<"\nOunce:"<<Ounce<<"oz.av"<<"\nCost:"<<Cost<<endl;
}
