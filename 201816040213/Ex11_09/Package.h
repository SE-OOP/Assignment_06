#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED

#include <string>
using namespace std;

class Package
{
public:
    Package( string, string, string, string, string, string,
            string, string, string, string, double, double );// Package constructor initializes data members

    void setSender( string ); // set the package sender
    string getSender( ); // return the package sender

    void setRecipient( string ); // set the package recipient
    string getRecipient( ); // return the package recipient

    void setsAddress( string ); // set the package address
    string getsAddress( ); // return the package address

    void setsCity( string ); // set the package city
    string getsCity( ); // return the package city

    void setsState( string ); // set the package state
    string getsState( ); // return the package state

    void setsPostcode( string ); // set the package postcode
    string getsPostcode( ); // return the package postcode

    void setrAddress( string ); // set the package address
    string getrAddress( ); // return the package address

    void setrCity( string ); // set the package city
    string getrCity( ); // return the package city

    void setrState( string ); // set the package state
    string getrState( ); // return the package state

    void setrPostcode( string ); // set the package postcode
    string getrPostcode( ); // return the package postcode


    void setWeight( double ); // set the package weight
    double getWeight( ); // return the package weight

    void setPackageFee( double ); // set the package packageFee
    double getPackageFee( ); // return the package packageFee

    double calculateCost( ); //calculate the cost of the package

    void Print( ); //display the information of package
private:
    string sender;
    string sAddress;
    string sCity;
    string sState;
    string sPostcode;

    string recipient;
    string rAddress;
    string rCity;
    string rState;
    string rPostcode;

    double weight;
    double packageFee;
}; // end class Package

#endif // PACKAGE_H_INCLUDED
