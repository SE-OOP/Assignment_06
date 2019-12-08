#include <iostream>
#include <stdexcept>
using namespace std;

#include "OvernightPackage.h"

OvernightPackage::OvernightPackage(const string &re, const string &se, const string &ad, const string &c, const string &s, const string &pc,
   double w, double p, double n  )
   :Package( re, se, ad, c, s, pc,w,p)
   {
       setNightFee(n);
   }

void OvernightPackage::setNightFee(double n)
{
    if (n>=0.0)
        nightFee= n;
    else
        throw invalid_argument("nightFee must be >= 0.0");
}

double OvernightPackage::getNightFee()const
{
    return nightFee;
}

double OvernightPackage::calculateCost() const
{
   return getWeight() *(nightFee + getUnitPrice());
} // end function calculateCost;
