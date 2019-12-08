#include <iostream>
using namespace std;

#include "Package.h" // include definition of class Package

// Package constructor initializes data member
Package::Package(string n1,string n2,string address,string city,string province,double postalCode, double w,double f)
{
    Name=n1;
    name=n2;
    Address=address;
    City=city;
    Province=province;
    PostalCode=postalCode;
   // if weight is greater than or equal to 0.0, set this value
   if ( w >= 0.0 && f>= 0.0){
      Weight=w;
      Fee = f;
   }
   else // otherwise, output message and set balance to 0.0
   {
      cout << "Error: w && f cannot be negative." << endl;
      Weight = 0.0;
      Fee = 0.0;
   } // end if...else
} // end Package constructor

// calculateCost
double Package::calculateCost( )
{
   return Weight*Fee;
} // end function calculateCost

void Package::setName( string n1)
{
   Name = n1;
} // end function setName
string Package::getName()
{
   return Name;
} // end function getName


void Package::setname( string n2)
{
   name = n2;
} // end function setName

string Package::getname()
{
   return name;
} // end function getName
void Package::setAddress( string address)
{
   Address= address;
} // end function setName

string Package::getAddress()
{
   return Address;
} // end function getName
void Package::setCity( string city)
{
   City = city;
} // end function setName

string Package::getCity()
{
   return City;
} // end function getName
void Package::setProvince( string province)
{
   Province = province;
} // end function setName

string Package::getProvince()
{
   return Province;
} // end function getName
void Package::setPostalCode( double postalCode)
{
   PostalCode= postalCode;
} // end function setName

double Package::getPostalCode()
{
   return PostalCode;
} // end function getName
void Package::setWeight( double w)
{
   Weight = w;
} // end function setWeight

double Package::getWeight()
{
   return Weight;
} // end function getWeight

void Package::setFee( double f)
{
   Fee = f;
} // end function setFee

double Package::getFee()
{
   return Fee;
} // end function getFee
void Package::print()
{
    cout<<"Sender："<<Name<<' '<<"  "<<"Receiver: "<<name<<"  "<<"Address: "<<Address<<"  "<<"City: "<<City<<"  "<<"Province: "<<Province<<"  "<<"PostalCode: "<<PostalCode
    <<"\nWeight："<<Weight<<"\nFee："<<Fee<<"\ncalculateCost: "<<calculateCost();
}
