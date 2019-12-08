//Assignment_06: Package.cpp
//member function implementation
#include <iostream>
#include <stdexcept>
#include "Package.h"  // Package class definition


using namespace std;

//constructor
Package::Package( string sender, string recipient, string add, string lc, string ls,
                  string pos, double wei, double pri )
    : senderName( sender ), recipientName( recipient ), address( add ), localCity( lc ),
      localState( ls ), postalCode( pos )
{
    setWeight( wei );
    setPrice( pri );
}

void Package::setWeight( double wei )
{
    if ( wei > 0 )
        weight = wei;
    else
        throw invalid_argument( "please input invalid weight." );
}

double Package::getWeight() const
{
    return weight;
}

void Package::setPrice( double pri )
{
    if ( pri > 0 )
        price = pri;
    else
        throw invalid_argument( "please input invalid price." );
}

double Package::getPrice() const
{
    return price;
}

// cost
double Package::calculateCost() const
{
    return getWeight() * getPrice();
}

// show
void Package::print() const
{
    cout << "The sender name is " << senderName
         << "\nThe recipient name is " << recipientName
         << "\nThe receiving address is " << address
         << "\nThe local city is " << localCity
         << "\nThe local state is " << localState
         << "\nThe postal code is " << postalCode
         << "\nThe package weight is " << getWeight()
         << "\nThe package's price per cup is " << getPrice();
}
