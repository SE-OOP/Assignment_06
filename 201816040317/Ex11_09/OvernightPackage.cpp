#include <iostream>
#include <stdexcept>
#include "OvernightPackage.h"// OvernightPackage class definition


using namespace std;

OvernightPackage::OvernightPackage( string a, string b, string c, string d, string e,
                  string f, double g, double h, double i )
    : Package( a, b, c,d, e, f, g, h)
{
    setEveryTip( i );
}

void OvernightPackage::setEveryTip( double a )
{
    if ( a > 0 )
        everyTip = a;
    else
            cout<<"temptip is wrong";
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
    cout << "\nThe additional charge per serving is " << getEveryTip();
}
