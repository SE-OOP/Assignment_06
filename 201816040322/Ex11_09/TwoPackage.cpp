//Assignment_06: TwoPackage.cpp
//member function implementation
#include <iostream>
#include <stdexcept>
#include "TwoDayPackage.h" // TwoDayPackage class definition

//constructor
TwoPackage::TwoPackage( string sender, string recipient, string add, string lc, string ls,
                  string pos, double wei, double pri, double temptip )
    : Package( sender, recipient, add, lc, ls, pos, wei, pri)
{
    setTip( temptip );
}

void TwoPackage::setTip( double temptip )
{
    if ( temptip > 0 )
        tip = temptip;
    else
        throw invalid_argument( "please input invalid tip." );
}

double TwoPackage::getTip() const
{
    return tip;
}

double TwoPackage::calculateCost() const
{
    return getTip() + Package::calculateCost(); // from base class cost add tip
}

void TwoPackage::print() const
{
    Package::print(); // base class print
    std::cout << "\nThe normal mailing charges is " << getTip();
}
