#include <iostream>
#include <string>
#include "Package.h"
using namespace std;

Package::Package(string Sender, string Recipient, string Address, string City, string State, string Postcode, double Weight, double Price)
{
    setSender(Sender);
    setRecipient(Recipient);
    setAddress(Address);
    setCity(City);
    setState(State);
    setPostcode(Postcode);
    setWeight(Weight);
    setPrice(Price);
}
void Package::setSender(string s)
{
    sender = s;
}
string Package::getSender()
{
    return sender;
}
void Package::setRecipient(string r)
{
    recipient = r;
}
string Package::getRecipient()
{
    return recipient;
}
void Package::setAddress(string a)
{
    address = a;
}
string Package::getAddress()
{
    return address;
}
void Package::setCity(string c)
{
    city = c;
}
string Package::getCity()
{
    return city;
}
void Package::setState(string s)
{
    state = s;
}
string Package::getState()
{
    return state;
}
void Package::setPostcode(string p)
{
    postcode = p;
}
string Package::getPostcode()
{
    return postcode;
}
void Package::setWeight(double w)
{
    if (w > 0)
        weight = w;
    else
        throw invalid_argument("Weight must be greater than 0.");
}
double Package::getWeight()
{
    return weight;
}
void Package::setPrice(double p)
{
    if (p > 0)
        price = p;
    else
        throw invalid_argument("Price must be greater than 0.");
}
double Package::getPrice()
{
    return price;
}
double Package::calculateCost()
{
    return weight * price;
}