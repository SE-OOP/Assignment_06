#include <iostream>
#include <stdexcept>
using namespace std;

#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(const string &re, const string &se, const string &ad, const string &c,
                              const string &s, const string &pc,double w, double p, double f  )
   :Package( re, se, ad, c, s, pc,w,p)
   {
       setFlatFee(f);
   }

void TwoDayPackage::setFlatFee(double f)
{
    if (f>=0.0)
        flatFee= f;
    else
        throw invalid_argument("FlatFee must be >= 0.0");
}

double TwoDayPackage::getFlatFee()const
{
    return flatFee;
}

double TwoDayPackage::calculateCost() const
{
   return flatFee+(getWeight() * getUnitPrice());
} // end function calculateCost;
