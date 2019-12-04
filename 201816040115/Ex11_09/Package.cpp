//Package.cpp

#include"Package.h"
#include<stdexcept>

Package::Package(string senderNam,string addresseeNam,string address0,string city0,string state0,string postCod,double weigh,double unitPric)
    :senderName(senderNam),
    addresseeName(addresseeNam),
    address(address0),
    city(city0),
    state(state0)
{
    setWeight(weigh);
    setUnitPrice(unitPric);
}
void Package::setWeight(double weigh)
{
    if(weigh>0)
    {
        weight=weigh;
    }
    else
    {
        throw invalid_argument("weight's value error");
    }
}
void Package::setUnitPrice(double unitPric)
{
    if(unitPric>0)
    {
        unitPrice=unitPric;
    }
    else
    {
        throw invalid_argument("unitPrice's value error");
    }
}

double Package::getWeight() const
{
    return weight;
}
double Package::getUnitPrice() const
{
    return unitPrice;
}
string Package::getSenderName() const
{
    return senderName;
}
string Package::getAddresseeName() const
{
    return addresseeName;
}
string Package::getAddress() const
{
    return address;
}
string Package::getCity() const
{
    return city;
}
string Package::getState() const
{
    return state;
}
string Package::getPostCode() const
{
    return postCode;
}
double Package::calculateCost() const   //direct calculate by weight*unitPrice
{
    return getWeight()*getUnitPrice();
}



