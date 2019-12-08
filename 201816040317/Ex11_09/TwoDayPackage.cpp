#include <iostream>
#include <stdexcept>
#include "TwoDayPackage.h" // TwoDayPackage class definition

using namespace std;

TwoPackage::TwoPackage( string a, string b, string c, string d, string e,string f, double g, double h, double i ):Package( a, b, c, d, e,f,g,h)
{
    setTip( i );
}

void TwoPackage::setTip( double temptip )
{
    if ( temptip > 0 )
        tip = temptip;
    else
        cout<<"temptip is wrong";
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
    cout << "\nThe normal mailing charges is " << getTip();
}
