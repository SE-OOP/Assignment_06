#include <iostream>
using namespace std;

#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage( const string &first, const string &last, const string &ssn, const string &a,
    const string &b,const string &g,double sales, double rate,double e)
    :Package(first,last,ssn,a,b,g,sales,rate)
{
        price1=e;
}
double TwoDayPackage::calculateCost()
{
    return price1+Package::calculateCost();
}

