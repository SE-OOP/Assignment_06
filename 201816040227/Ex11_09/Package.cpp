#include <iostream>
using namespace std;

#include "Package.h" // CommissionEmployee class definition

// constructor
Package::Package(
   const string &re, const string &se, const string &ad, const string &c, const string &s, const string &pc,
   double w, double p  )
{
   recipientName = re; // should validate
   senderName = se;   // should validate
   reAddress = ad; // should validate
   city=c;
   state=s;
   postalCode=pc;
   unitPrice=p;
   weight=w; // validate and store 
  
} // end Package constructor

// set recipientName
void Package::setRecipientName( const string &re )
{
   recipientName = re; // should validate
} // end function 

// return recipientName
string Package::getRecipientName() const
{
   return recipientName;
} // end function 

// set sender name
void Package::setSenderName( const string &se )
{
   senderName = se; // should validate
} // end function 

// return sender name
string Package::getSenderName() const
{
   return senderName;
} // end function 

// set recipient's address
void Package::setReAddress( const string &ad )
{
   reAddress = ad; // should validate
} // end function 

// return recipient's address
string Package::getReAddress() const
{
   return reAddress;
} // end function 

void Package::setCity( const string &c )
{
   city = c; // should validate
} // end function setCity

// return city
string Package::getCity() const
{
   return city;
} // end function 

void Package::setState( const string &s )
{
   state = s; // should validate
} // end function 

// return state
string Package::getState() const
{
   return state;
} // end function 

void Package::setPostalCode( const string &pc )
{
   postalCode = pc; // should validate
} // end function 

// return Postal code
string Package::getPostalCode() const
{
   return postalCode;
} // end function 

// set weight amount
void Package::setWeight( double w )
{
   weight = ( w < 0.0 ) ? 0.0 : w;
} // end function 

// return weight amount
double Package::getWeight() const
{
   return weight;
} // end function 

// set unitPrice
void Package::setUnitPrice( double p )
{
   unitPrice = ( p > 0.0 ) ? p : 0.0;
} // end function 

// return unitPrice
double Package::getUnitPrice() const
{
   return unitPrice;
} // end function 

// calculate cost
double Package::calculateCost() const
{
   return weight * unitPrice;
} // end function calculateCost;
