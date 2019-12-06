// Member-function definitions for class Package.
#include<iostream>
#include<string>
using namespace std;

#include"Package.h"// include definition of class Package

// Package constructor initializes data members
Package::Package( const string &name, const string &ads, const string &city,
                 const string &state, const string &code, double weight, double cost )
:sender(name), address(ads), livingcity(city), livingstate(state), postalcode(code)
{
    setPackageounce(weight);
    setPerouncecost(cost);
}// end Package constructor

void Package::setSender( const string &name)
{
    sender = name;
}

string Package::getSender() const
{
    return sender;
}
void Package::setAddress( const string &ads)
{
    address = ads;
}

string Package::getAddress() const
{
    return address;
}
void Package::setLivingcity( const string &city)
{
    livingcity = city;
}

string Package::getLivingcity() const
{
    return livingcity;
}
void Package::setLivingstate( const string &state)
{
    livingstate = state;
}

string Package::getLivingstate() const
{
    return livingstate;
}
void Package::setPostalcode( const string &code)
{
    postalcode = code;
}

string Package::getPostalcode() const
{
    return postalcode;
}

void Package::setPackageounce( double weight )
{
    // if weight is greater than or equal to 0.0, set this value
    if ( weight >= 0.0 )
       packageounce = weight;
    else // otherwise, output message and set weight to 0.0
    {
       cout << "Error: Initial weight cannot be negative." << endl;
       packageounce = 0.0;
    } // end if...else
}

double Package::getPackageounce() const
{
    return packageounce;
}

void Package::setPerouncecost( double cost )
{
    // if cost is greater than or equal to 0.0, set this value
    if ( cost >= 0.0 )
       perouncecost = cost;
    else // otherwise, output message and set cost to 0.0
    {
       cout << "Error: Initial cost cannot be negative." << endl;
       perouncecost = 0.0;
    } // end if...else
}

double Package::getPerouncecost() const
{
    return perouncecost;
}

double Package::calculateCost() const
{
    return getPackageounce()*getPerouncecost();
}// end function calculateCost

//print function
void Package::print() const
{
    cout << "Sender's name is " << getSender() <<
    "\nAddress is " << getAddress() <<
    "\nLiving city is "<< getLivingcity() <<
    "\nLiving state is " << getLivingstate() <<
    "\nPostal code is " << getPostalcode() <<
    "\nThe weight of the package" << getPackageounce() << " ounce" <<
    "\nPer ounce of the package costs " << getPerouncecost() << endl;
}//end print function
