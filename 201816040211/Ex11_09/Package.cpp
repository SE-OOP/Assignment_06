#include <iostream>
using namespace std;

#include "Package.h"

Package::Package( string Sender, string Receiver, string Place, string City,string State,string Bianma,double Weight,double Fee)
       : sender(Sender),receiver(Receiver),place(Place), city(City), state(State), bianma(Bianma)
{
    setWeight( Weight);
    setFee(Fee);
}

void Package::setsender(string SEnder )
{
    sender = SEnder;
}
string Package::getsender( )
{
    return sender;
}


void Package::setreceiver(string  REceiver)
{
    receiver=Receiver;
}
string Package::getreceiver( )
{
    return receiver;
}


void Package::setplace(string PLace)
{
    place= PLace;
}
string Package::getplace( )
{
    return place;
}

void Package::setcity(string CIty)
{
    city=CIty;
}
string Package::getcity( )
{
    return city;
}

void Package::setstate(string STate)
{
    state=STate;
}
string Package::getstate( )
{
    return state;
}

void Package::setbianma(string BIanma)
{
    bianma=BIanma;
}
string Package::getbianma( )
{
    return bianma;
}

void Package::setweight(double WEight)
{
    if(WEight>0)
    {
        weight=WEight;
    }
    else
    {
        throw invalid_argument( "weight must be greater than zero! ");
    }
}
void Package::getweight()
{
    return weight;
}

void Package::setfee(double FEe)
{
    if(FEe>0)
    {
        fee=FEe;
    }
    else
    {
        throw invalid_argument( "fee must be greater than zero! ");
    }
}
void Package::getfee()
{
    return fee;
}

double Package::calculateCost( double weight, double fee)
{
    return weight*fee;
}

void Package::print()
{
    cout<<"sender: "<<sender<<endl;
    cout<<"receiver: "<<receiver<<endl;
    cout<<"place: "<<place<<endl;
    cout<<"city: "<<city<<endl;
    cout<<"state: "<<state<<endl;
    cout<<"bianma: "<<bianma<<endl;
}


