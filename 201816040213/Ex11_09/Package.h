#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED

#include <string>
using namespace std;

class Package
{
public:
    Package( string, string, string, string, string, string, double, double );// Package constructor initializes data members

    void setSender( string ); // set the package sender
    string getSender( ); // return the package sender

    void setRecipient( string ); // set the package recipient
    string getRecipient( ); // return the package recipient

    void setAddress( string ); // set the package address
    string getAddress( ); // return the package address

    void setCity( string ); // set the package city
    string getCity( ); // return the package city

    void setState( string ); // set the package state
    string getState( ); // return the package state

    void setPostcode( string ); // set the package postcode
    string getPostcode( ); // return the package postcode

    void setWeight( double ); // set the package weight
    double getWeight( ); // return the package weight

    void setPackageFee( double ); // set the package packageFee
    double getPackageFee( ); // return the package packageFee

    double calculateCost( ); //calculate the cost of the package

    void Print( ); //display the information of package
private:
    string sender;
    string recipient;
    string address;
    string city;
    string state;
    string postcode;
    double weight;
    double packageFee;
}; // end class Package

#endif // PACKAGE_H_INCLUDED
