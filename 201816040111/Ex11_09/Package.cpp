#include "Package.h"
#include <string>
#include <iostream>

using namespace std;

Package::Package( const string& a , const string& b , const string& c , const string& d , const string& e ,
                 const string& f, const string& g , const string& h , const string& i , const string& j ,
                 double weight , double fee)
                 {
                     setsenderName(a);
                     setsenderAddress(b);
                     setsenderCity(c);
                     setsenderState(d);
                     setsenderPostalCode(e);
                    setrecipientName(f);
                    setrecipientAddress(g);
                    setrecipientCity(h);
                    setrecipientState(i);
                    setrecipientPostalCode(j);
                    setpackageWeight(weight);
                    setcostPerOunce(fee);
                 }

 void Package::setsenderName( const string &nn )
 {
     senderName = nn ;
 }

  void Package::setsenderAddress( const string &nn )
 {
     senderAddress = nn ;
 }

  void Package::setsenderCity( const string &nn )
 {
     senderCity = nn ;
 }

  void Package::setsenderState( const string &nn )
 {
     senderState = nn ;
 }

  void Package::setsenderPostalCode( const string &nn )
 {
     senderPostalCode = nn ;
 }

 void Package::setrecipientName( const string &nn )
 {
     recipientName = nn ;
 }

  void Package::setrecipientAddress( const string &nn )
 {
     recipientAddress = nn ;
 }

  void Package::setrecipientCity( const string &nn )
 {
     recipientCity = nn ;
 }

  void Package::setrecipientState( const string &nn )
 {
     recipientState = nn ;
 }

  void Package::setrecipientPostalCode( const string &nn )
 {
     recipientPostalCode = nn ;
 }

 string Package::getsenderName()
 {
     return senderName;
 }

  string Package::getsenderAddress()
 {
     return senderAddress;
 }

  string Package::getsenderCity()
 {
     return senderCity;
 }

  string Package::getsenderState()
 {
     return senderState;
 }

  string Package::getsenderPostalCode()
 {
     return senderPostalCode;
 }

 string Package::getrecipientName()
 {
     return recipientName;
 }

  string Package::getrecipientAddress()
 {
     return recipientAddress;
 }

  string Package::getrecipientCity()
 {
     return recipientCity;
 }

  string Package::getrecipientState()
 {
     return recipientState;
 }

  string Package::getrecipientPostalCode()
 {
     return recipientPostalCode;
 }

 void Package::setpackageWeight( double xx )
 {
     if( xx < 0 )
     {
         cout << "Weight cannot be negative" << endl;
         exit(1);
     }
     packageWeight = xx;
 }

 void Package::setcostPerOunce( double xx )
 {
     if( xx < 0 )
     {
         cout << "The cost per ounce cannot be negative" << endl;
         exit(1);
     }
     costPerOunce = xx;
 }

 double Package::getpackageWeight()
 {
     return packageWeight;
 }

 double Package::getcostPerOunce()
 {
     return costPerOunce;
 }

 double Package::calculateCost()
 {
     return packageWeight * costPerOunce ;
 }

 void Package::print()
 {
     cout << "The sender information is as follows : " << endl;
     cout << "Name : " << getsenderName() << endl;
     cout << "Address : " << getsenderAddress() << endl;
     cout << "City : " << getsenderCity() << endl;
     cout << "State : " << getsenderState() << endl;
     cout << "Postal Code : " << getsenderPostalCode() << endl;
     cout << '\n' ;
     cout << "The recipient information is as follows : " << endl;
     cout << "Name : " << getrecipientName() << endl;
     cout << "Address : " << getrecipientAddress() << endl;
     cout << "City : " << getrecipientCity() << endl;
     cout << "State : " << getrecipientState() << endl;
     cout << "Postal Code : " << getrecipientPostalCode() << endl;
 }
