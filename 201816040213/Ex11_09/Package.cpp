#include <iostream>
#include <string>
using namespace std;

#include "Package.h" // include definition of class Package

// Package constructor initializes data members
Package::Package( string Sender, string SAddress, string SCity, string SState, string SPostcode,
                  string Recipient, string RAddress, string RCity, string RState, string RPostcode,double Weight, double Packagefee )
    :sender( Sender ), sAddress( SAddress ), sCity( SCity ), sState( SState), sPostcode( SPostcode ),
     recipient( Recipient ), rAddress( RAddress ), rCity( RCity ), rState( RState), rPostcode( RPostcode )
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

// set the package sAddress
void Package::setsAddress( string addr )
{
        sAddress = addr;
} // end function setsAddress

// return the package sAddress
string Package::getsAddress( )
{
    return sAddress;
} // end function getsAddress

// set the package sCity
void Package::setsCity( string cit )
{
        sCity = cit;
} // end function setsCity

// return the package sCity
string Package::getsCity( )
{
    return sCity;
} // end function getsCity

// set the package sState
void Package::setsState( string sta )
{
        sState = sta;
} // end function setsState

// return the package sState
string Package::getsState( )
{
    return sState;
} // end function getsState

// set the package sPostcode
void Package::setsPostcode( string code )
{
        sPostcode = code;
} // end function setsPostcode

// return the package sPostcode
string Package::getsPostcode( )
{
    return sPostcode;
} // end function getsPostcode

// set the package rAddress
void Package::setrAddress( string addr )
{
        rAddress = addr;
} // end function setrAddress

// return the package rAddress
string Package::getrAddress( )
{
    return rAddress;
} // end function getrAddress

// set the package rCity
void Package::setrCity( string cit )
{
        rCity = cit;
} // end function setrCity

// return the package rCity
string Package::getrCity( )
{
    return rCity;
} // end function getrCity

// set the package rState
void Package::setrState( string sta )
{
        rState = sta;
} // end function setrState

// return the package rState
string Package::getrState( )
{
    return rState;
} // end function getrState

// set the package rPostcode
void Package::setrPostcode( string code )
{
        rPostcode = code;
} // end function setrPostcode

// return the package rPostcode
string Package::getrPostcode( )
{
    return rPostcode;
} // end function getrPostcode

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
    cout << "Sender : " << sender <<"     Postcode : "<<sPostcode<< "\nAddress : " << sAddress
         << ", " << sCity << ", " << sState << "\n"
         << "Recipient : "<<recipient <<"     Postcode : "<<rPostcode<< "\nAddress : " << rAddress
         << ", " << rCity << ", " << rState << "\n";
} // end function Print
