#include <iostream>
using namespace std;

#include "Package.h"

Package::Package(const string &sender,const string &recipient,const string &Address,const string &City,const string &State,const string &Postalcode,double Weight,double Oneshot)
          :sendername(sender),recipientname(recipient),address(Address),city(City),state(State),postalcode(Postalcode)
{
    setWeight(Weight);
    setOneshot(Oneshot);
}
void Package::setSenderName(const string &sender)
{
    sendername=sender;
}
string Package::getSenderName()const
{
    return sendername;
}
void Package::setRecipientName(const string &recipient)
{
    recipientname=recipient;
}
string Package::getRecipientName()const
{
    return recipientname;
}
void Package::setAddress(const string &Address)
{
   address=Address;
}
string Package::getAddress()const
{
    return address;
}
void Package::setCity(const string &City)
{
    city=City;
}
string Package::getCity()const
{
    return city;
}
void Package::setState(const string &State)
{
    state=State;
}
string Package::getState()const
{
    return state;
}
void Package::setPostalcode(const string &Postalcode)
{
    postalcode=Postalcode;
}
string Package::getPostalcode()const
{
    return postalcode;
}
void Package::setWeight(double Weight)
{
    if(Weight>0)
        weight=Weight;
}
double Package::getWeight()const
{
    return weight;
}
void Package::setOneshot(double Oneshot)
{
    if(Oneshot>0)
        oneshot=Oneshot;
}
double Package::getOneshot()const
{
    return oneshot;
}
double Package::calculateCost()
{
    return getOneshot()*getWeight();
}
