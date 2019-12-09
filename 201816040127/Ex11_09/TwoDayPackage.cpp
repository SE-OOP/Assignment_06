#include <iostream>
using namespace std;

// TwoDayPackage class definition
#include "TwoDayPackage.h"
TwoDayPackage::TwoDayPackage(const string &sender, const string &recipient, const string &address, const string &city, const string &state,
   int postal,double weight, double fee , double charge)
   // initialize composed object
   :P(sender,recipient,address,city,state,postal,weight,fee) //Initialize the TwoDayPackage data member,pass (sender,recipient,address,city,state,postal,weight,fee)to its constructor
{
    setFlatCharge(charge);// validate and store flatCharge
}//end TwoDayPackage constructor
void TwoDayPackage::setSenderName(const string &sender)
{
    P.setSenderName(sender);
}// end function setSenderName
string TwoDayPackage::getSenderName() const
{
    return P.getSenderName();
}//end function getSenderName

void TwoDayPackage::setRecipientName( const string &recipient)
{
    P.setRecipientName(recipient);
}//end function setRecipientName
string TwoDayPackage::getRecipientName() const
{
    return P.getRecipientName();
}

void TwoDayPackage::setAddressName( const string &address)
{
    P.setAddressName(address);
}
string TwoDayPackage::getAddressName() const
{
    return P.getAddressName();
}

void TwoDayPackage::setCityName( const string &city)
{
    P.setCityName(city);
}
string TwoDayPackage::getCityName() const
{
    return P.getCityName();
}

void TwoDayPackage::setStateName( const string &state)
{
    P.setStateName(state);
}
string TwoDayPackage::getStateName() const
{
    return P.getStateName();
}

void TwoDayPackage::setPostalCode(int postal)
{
    P.setPostalCode(postal);
}
int TwoDayPackage::getPostalCode() const
{
    return P.getPostalCode();
}

void TwoDayPackage::setWeightNumber( double weight)
{
    P.setWeightNumber(weight);
}
double TwoDayPackage::getWeightNumber() const
{
    return P.getWeightNumber();
}

void TwoDayPackage::setFeeNumber(double fee)
{
    P.setFeeNumber(fee);
}
double TwoDayPackage::getFeeNumber()const
{
    return P.getFeeNumber();
}

void TwoDayPackage::setFlatCharge( double charge)
{
    flatCharge = (charge > 0.0)? charge :0.0;
}
double TwoDayPackage::getFlatCharge()const
{
    return flatCharge;
}

double TwoDayPackage::calculateCost() const
{
    return getWeightNumber() * getFeeNumber() + getFlatCharge();
}

void TwoDayPackage::print() const
{
    cout<< " flatcharge: "<< flatCharge;
    P.print();
}
