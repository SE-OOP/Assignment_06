#include <iostream>
#include<TwoDayPackage.h>
using namespace std;

TwoDayPackage :: TwoDayPackage(
                   const string &sn,const string &rn, const string &ra, const string &rp, const string &rc, const string &rz
                   double weight, double fe, double ff)
                   : Package (sn, rn, ra, rp, rc, rz, weight, fe)
{
        setFlatFee(ff);
}
void TwoDayPackage :: calculateConst(double ff)
{
    if(ff >=0.0)
        flatFee = ff;
    else
        throw invalid_argument("Flat Fee must be >=0.0");
}
double TwoDayPackage :: calculateConst()const
{
    return (packageWeight * fee )+ flatFee;
}
