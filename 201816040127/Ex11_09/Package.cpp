#include <iostream>
using namespace std;

#include "Package.h" // Package class definition
Package::Package(
   const string &sender, const string &recipient, const string &address, const string &city, const string &state,
   int postal,double weight, double fee )
{
   senderName = sender;
   recipientName = recipient;
   addressName = address;
   cityName = city;
   stateName = state;
   postalCode = postal;
   setWeightNumber(weight);
   setFeeNumber(fee);
} // end Package constructor
void Package::setSenderName(const string &sender)
{
    senderName = sender;
}// end function setSenderName
string Package::getSenderName() const
{
    return senderName;
}//end function getSenderName

void Package::setRecipientName( const string &recipient)
{
    recipientName = recipient;
}//end function setRecipientName
string Package::getRecipientName() const
{
    return recipientName;
}

void Package::setAddressName( const string &address)
{
    addressName = address;
}
string Package::getAddressName() const
{
    return addressName;
}

void Package::setCityName( const string &city)
{
    cityName = city;
}
string Package::getCityName() const
{
    return cityName;
}

void Package::setStateName( const string &state)
{
    stateName = state;
}
string Package::getStateName() const
{
    return stateName;
}

void Package::setPostalCode(int postal)
{
    postalCode = postal;
}
int Package::getPostalCode() const
{
    return postalCode;
}

void Package::setWeightNumber( double weight)
{
    weightNumber = (weight >0.0 )? weight : 0.0;
}
double Package::getWeightNumber() const
{
    return weightNumber;
}

void Package::setFeeNumber(double fee)
{
    feeNumber = (fee >0.0 )? fee : 0.0;
}
double Package::getFeeNumber()const
{
    return feeNumber;
}

double Package::calculateCost() const
{
    return weightNumber * feeNumber;
}

void Package::print() const
{
    cout<<"sender name: "<< senderName <<" recipient name: "<< recipientName
        <<" address: " << addressName <<" city name: "<< cityName
        <<"state name: "<< stateName << "postal code: "<< postalCode
        <<" weight number: "<< weightNumber << "fee number : "<< feeNumber<<endl;
}
