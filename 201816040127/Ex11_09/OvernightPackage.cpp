#include <iostream>
using namespace std;

// OvernightPackage class definition
#include "OvernightPackage.h"
OvernightPackage::OvernightPackage(const string &sender, const string &recipient, const string &address, const string &city, const string &state,
   int postal,double weight,double fee,double fe)
   // initialize composed object
   :P1(sender,recipient,address,city,state,postal,weight,fee) //Initialize the OvernightPackage data member,pass (sender,recipient,address,city,state,postal,weight,fee)to its constructor
{
    setOverFe(fe);// validate and store flatCharge
}//end OvernightPackage constructor
void OvernightPackage::setSenderName(const string &sender)
{
    P1.setSenderName(sender);
}// end function setSenderName
string OvernightPackage::getSenderName() const
{
    return P1.getSenderName();
}//end function getSenderName

void OvernightPackage::setRecipientName( const string &recipient)
{
    P1.setRecipientName(recipient);
}//end function setRecipientName
string OvernightPackage::getRecipientName() const
{
    return P1.getRecipientName();
}

void OvernightPackage::setAddressName( const string &address)
{
    P1.setAddressName(address);
}
string OvernightPackage::getAddressName() const
{
    return P1.getAddressName();
}

void OvernightPackage::setCityName( const string &city)
{
    P1.setCityName(city);
}
string OvernightPackage::getCityName() const
{
    return P1.getCityName();
}

void OvernightPackage::setStateName( const string &state)
{
    P1.setStateName(state);
}
string OvernightPackage::getStateName() const
{
    return P1.getStateName();
}

void OvernightPackage::setPostalCode(int postal)
{
    P1.setPostalCode(postal);
}
int OvernightPackage::getPostalCode() const
{
    return P1.getPostalCode();
}

void OvernightPackage::setWeightNumber( double weight)
{
    P1.setWeightNumber(weight);
}
double OvernightPackage::getWeightNumber() const
{
    return P1.getWeightNumber();
}

void OvernightPackage::setFeeNumber(double fee)
{
    P1.setFeeNumber(fee);
}
double OvernightPackage::getFeeNumber()const
{
    return P1.getFeeNumber();
}

void OvernightPackage::setOverFe( double fe)
{
    overFe = (fe > 0.0)? fe :0.0;
}
double OvernightPackage::getOverFe()const
{
    return overFe;
}

double OvernightPackage::calculateCost() const
{
    return getOverFe() + getWeightNumber() * getFeeNumber();
}
void OvernightPackage::print() const
{
    cout<< " overfe: "<< overFe;
    P1.print();
}
