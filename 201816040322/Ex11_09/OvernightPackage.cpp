//Assignment_06: OvernightPackage.cpp
//member function implementation
#include <iostream>
#include <stdexcept>
#include "OvernightPackage.h"// OvernightPackage class definition

OvernightPackage::OvernightPackage( string sender, string recipient, string add, string lc, string ls,
                  string pos, double wei, double pri, double temptip )
    : Package( sender, recipient, add, lc, ls, pos, wei, pri)
{
    setEveryTip( temptip );
}

void OvernightPackage::setEveryTip( double temptip )
{
    if ( temptip > 0 )
        everyTip = temptip;
    else
        throw invalid_argument( "please input invalid tip." );
}

double OvernightPackage::getEveryTip() const
{
    return everyTip;
}

// cost
double OvernightPackage::calculateCost() const
{
    return getEveryTip() * getWeight() + Package::calculateCost();//base class cost
}

// show
void OvernightPackage::print() const
{
    Package::print();// base class print
    std::cout << "\nThe additional charge per serving is " << getEveryTip();
}
