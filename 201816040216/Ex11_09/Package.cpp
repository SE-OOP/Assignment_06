#include <iostream>

using namespace std;

#include "Package.h" // include definition of class Account

using namespace std;

Package::Package(string sname,string scity,string sstate,string saddress,
                 string szipcode,string rname,string rcity,string rstate,
                 string raddress,string rzipcode,double kg,double money)
{
    SenderName=sname;
    SenderCity=scity;
    SenderState=sstate;
    SenderAddress=saddress;
    SenderZipcode=szipcode;
    ReciverName=rname;
    ReciverCity=rcity;
    ReciverState=rstate;
    ReciverAddress=raddress;
    ReciverZipcode=rzipcode;
    setWeight(kg);
    setfee(money);
}
void Package::setSenderName(string sname)
{
    SenderName=sname;
}

string Package::getSenderName()
{
    return SenderName;
}

void Package::setSenderCity(string scity)
{
    SenderCity=scity;
}

string Package::getSenderCity()
{
    return SenderCity;
}

void Package::setSenderState(string sstate)
{
    SenderState=sstate;
}

string Package::getSenderState()
{
    return SenderState;
}

void Package::setSenderAddress(string saddress)
{
    SenderAddress=saddress;
}

string Package::getSenderAddress()
{
    return SenderAddress;
}

void Package::setSenderZipcode(string szipcode)
{
    SenderZipcode=szipcode;
}

string Package::getSenderZipcode()
{
    return SenderZipcode;
}

void Package::setReciverName(string rname)
{

    ReciverName = rname;
}

string Package::getReciverName()
{
    return ReciverName;
}

void Package::setReciverCity(string rcity)
{
    ReciverCity=rcity;
}

string Package::getReciverCity()
{
    return ReciverCity;
}

void Package::setReciverState(string rstate)
{
    ReciverState=rstate;
}

string Package::getReciverState()
{
    return ReciverState;
}

void Package::setReciverAddress(string raddress)
{
    ReciverAddress=raddress;
}

string Package::getReciverAddress()
{
    return ReciverAddress;
}

void Package::setReciverZipcode(string rzipcode)
{
    ReciverZipcode=rzipcode;
}

string Package::getReciverZipcode()
{
    return ReciverZipcode;
}

void Package::setWeight(double kg)
{
    if(kg>0.0)
       weight=kg;
    else
       throw invalid_argument("weight must be > 0.0");
}

double Package::getWeight()
{
    return weight;
}

void Package::setfee(double money)
{
    if(money>0.0)
        fee=money;
    else
        throw invalid_argument("fee must be > 0.0");
}

double Package::getfee()
{
    return fee;
}

double Package::calculateCost()
{
    return weight*fee;
}

void Package::print()const
{
    cout<<"The SenderName is:"<<SenderName<<"\nThe SenderCity is:"<<SenderCity<<"\nThe SenderState is:"
    <<SenderState<<"\nThe SenderAddress is:"<<SenderAddress<<"\nThe SenderZipcode is:"<<SenderZipcode
    <<"\n"<<"The ReciverName is:"<<ReciverName<<"\nThe ReciverCity is:"<<ReciverCity<<"\nThe ReciverState is:"
    <<ReciverState<<"\nThe ReciverAddress is:"<<ReciverAddress<<"\nThe ReciverZipcode is:"<<ReciverZipcode
    <<"\n"<<"\nThe Package's weight is:"<<weight<<"ounce"<<"\nAn ounce costs:"<<fee<<endl;
}
