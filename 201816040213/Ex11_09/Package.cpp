#include <iostream>
#include <string>
using namespace std;

#include "Package.h" // include definition of class Package

// Package constructor initializes data members
Package::Package( string Sender, string Recipient, string Address, string City, string State, string Postcode, double Weight, double Packagefee )
    :sender( Sender ), recipient( Recipient ), address( Address ), city( City ), state( State), postcode( Postcode )
{
    setWeight( Weight );
    setPackageFee( Packagefee );
} // end Package constructor

// set the package sender
void Package::setSender( string send )
{
        sender = send;
} // end function setSender

// return the package sender
string Package::getSender( )
{
    return sender;
} // end function getSender

// set the package recipient
void Package::setRecipient( string reci )
{
        recipient = reci;
} // end function setRecipient

// return the package recipient
string Package::getRecipient( )
{
    return recipient;
} // end function getRecipient

// set the package address
void Package::setAddress( string addr )
{
        address = addr;
} // end function setAddress

// return the package address
string Package::getAddress( )
{
    return address;
} // end function getAddress

// set the package city
void Package::setCity( string cit )
{
        city = cit;
} // end function setCity

// return the package city
string Package::getCity( )
{
    return city;
} // end function getCity

// set the package state
void Package::setState( string sta )
{
        state = sta;
} // end function setState

// return the package state
string Package::getState( )
{
    return state;
} // end function getState

// set the package postcode
void Package::setPostcode( string code )
{
        postcode = code;
} // end function setPostcode

// return the package postcode
string Package::getPostcode( )
{
    return postcode;
} // end function getPostcode

// set the package weight
void Package::setWeight( double wei )
{
    if( wei > 0 )
        weight = wei;
    else
        throw invalid_argument( "Weight must be greater than zero! ");
} // end function setWeight

// return the package weight
double Package::getWeight( )
{
    return weight;
} // end function getWeight

// set the package packageFee
void Package::setPackageFee( double fee )
{
    if( fee > 0 )
        packageFee = fee;
    else
        throw invalid_argument( "Package fee must be greater than zero! ");
} // end function setPackageFee

// return the package packageFee
double Package::getPackageFee( )
{
    return packageFee;
} // end function getPackageFee

//calculate the cost of the package
double Package::calculateCost( )
{
    return weight * packageFee ;
} // end function calculateCost

//display the information of package
void Package::Print( )
{
    cout << "Sender : " << sender << "\nRecipient : "<<recipient << "\nAddress : " << address
         << "\nCity : " << city << "\nState : " << state << "\nPostcode : "<<postcode<<"\n";
} // end function Print
