#include <iostream>
#include "OvernightPackage.h"
using namespace std;

OvernightPackage :: OvernightPackage(
                   const string &sn ,const string &rn, const string &ra, const string &rp, const string &rc,
                    const string &rz,double weight, double fe, double ef)
                   : Package (sn, rn, ra, rp, rc, rz, weight, fe)
{
        setEarnFee(ef);
}
void OvernightPackage::calculateConst(double ef)
{
    if(ef >=0.0)
        earnFee = ef;
    else
        throw invalid_argument("Earn Fee must be >=0.0");
}
double OvernightPackage :: calculateConst()
{
    return (earnFee + packageWeight) * fee;
}


