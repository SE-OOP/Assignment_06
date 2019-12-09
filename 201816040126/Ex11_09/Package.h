#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED

using namespace std;
#include "Package.h"


class Package
{
public:
    Package(const string &, const string &, const string &,
    const string &, const string &, const string &,
    double = 0.0 , double = 0.0 );

    void setSendName( const string & );//function to set send name
    string getSendName() const;//function to get send name

    void setReceiveName( const string & );//function to set receive name
    string getReceiveName() const;//function to get receive name

    void setAddress( const string & );//function to set address
    string getAddress() const;//function to get address

    void setCity( const string & );//function to set city
    string getCity() const;//function to get city

    void setProvince( const string & );//function to set province
    string getProvince() const;//function to get province

    void setPostalCode( const string & );//function to set postal code
    string getPostalCode() const;//function to get postal code

    void setQuality( double );//function to set quality
    double getQuality() const;//function to get quality

    void setPrice( double );//function to set price
    double getPrice() const;//function to get price

    double calculateCost() const;
protected:
    string SendName;
    string ReceiveName;
    string Address;
    string City;
    string Province;
    string PostalCode;
    double Quality;
    double Price;
};
#endif // PACKAGE_H_INCLUDED
