#include "TwoDayPackage.h"
/*initializing the two-day package by using "Package()" and setextra*/
TwoDayPackage::TwoDayPackage( const string &jn, const string &sn, const string &jp, const string &sp, const string &jc, const string &sc,
                              const string &js, const string &ss, const string &jpc, const string &spc, double wei, double pri, double extra )
    :Package( jn, sn, jp, sp, jc, sc, js, ss, jpc, spc, wei, pri)
{
    setextraprice(extra);
}
/*set the extra price for the two-day package*/
void TwoDayPackage::setextraprice(double extra)
{
    extraprice=extra;
}
/*get the extra price for the two-day package*/
double TwoDayPackage::getextraprice() const
{
    return extraprice;
}
/*return the gross freight for the two-day package*/
double TwoDayPackage::calculateCost()
{
    return Package::calculateCost()+getextraprice();
}
