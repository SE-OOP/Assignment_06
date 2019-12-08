#include <iostream>
using namespace std;

#include "OvernightPackage.h"
#include "Package.h"

// constructor initializes balance and transaction fee
OvernightPackage::OvernightPackage(
     string n1,string n2,string address,string city,string province,double postalCode, double w,double f,double nightPackage)
    :Package(n1,n2,address,city,province,postalCode, w,f)
{
    setNightPackage(nightPackage);

}
void OvernightPackage::setNightPackage(double nightPackage)
{
    if(nightPackage>=0.0)
    {
        NightPackage=nightPackage;
    }

    else
    {
        throw invalid_argument("nightPackage must be >= 0.0");
    }

}
double OvernightPackage::getNightPackage()
{
    return NightPackage;
}
// the calculateInterest member function to return the new calculateInterest
double OvernightPackage::CalculateCost()
{
    return getWeight()*(NightPackage+getFee());
}
void OvernightPackage::print()
{
    Package::print();
    cout<<"\nOvernightPackage:"<<NightPackage
    <<"\nCalculateCost: "<<CalculateCost();

}
