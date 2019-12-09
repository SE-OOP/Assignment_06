#include <iostream>
using namespace std;

#include "OvernightPackage.h"

OvernightPackage::OvernightPackage( const string &first, const string &last, const string &ssn, const string &a,
    const string &b,const string &g,double sales, double rate,double e)
    :Package(first,last,ssn,a,b,g,sales,rate)
{
        price2=e;
}
double OvernightPackage::calculateCost()
{
    return weight*(price+price2);
}
