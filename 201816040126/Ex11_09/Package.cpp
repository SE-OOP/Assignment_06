#include <iostream>
#include "Package.h"

using namespace std;

Package::Package(const string &sendname, const string &receivename, const string &address,
    const string &city, const string &province, const string &postalcode,
    double quality, double price)
{
        SendName = sendname;
        ReceiveName = receivename;
        Address = address;
        City = city;
        Province = province;
        PostalCode = postalcode;
        setQuality( quality );
        setPrice( price );
}

void Package::setSendName( const string &sendname )
{
    SendName = sendname;
}
//function to set send name

string Package::getSendName() const
{
    return SendName;
}
//function to get send name

void Package::setReceiveName( const string &receivename )
{
    ReceiveName = receivename;
}
//function to set receive name

string Package::getReceiveName() const
{
    return ReceiveName;
}
//function to get receive name

void Package::setAddress( const string &address )
{
    Address = address;
}
//function to set address

string Package::getAddress() const
{
    return Address;
}
//function to get address

void Package::setCity( const string &city )
{
    City = city;
}
//function to set city

string Package::getCity() const
{
    return City;
}
//function to get city

void Package::setProvince( const string &province )
{
    Province = province;
}
//function to set province

string Package::getProvince() const
{
    return Province;
}
//function to get province

void Package::setPostalCode( const string &postalcode )
{
    PostalCode = postalcode;
}
//function to set postal code

string Package::getPostalCode() const
{
    return PostalCode;
}
//function to get postal code

void Package::setQuality( double quality )
{
    if ( quality > 0 )
        Quality = quality;
    else
        throw invalid_argument("quality  should be > 0.0");
}
//function to set quality

double Package::getQuality() const
{
    return Quality;
}
//function to get quality

void Package::setPrice( double price )
{
    if ( price > 0 )
        Price = price;
    else
        throw invalid_argument("price should be > 0.0");
}
//function to set price

double Package::getPrice() const
{
    return Price;
}
//function to get price

double Package::calculateCost() const
{
    return getQuality() * getPrice();
}
//function to calculate cost
