#include "OvernightPackage.h"

/*initializing the overnight package by using "Package()" and setexprice*/
OvernightPackage::OvernightPackage( const string & jn, const string & sn, const string & jp, const string & sp, const string & jc, const string & sc,
                   const string & js, const string & ss, const string & jpc, const string & spc, double wei, double pri, double ex )
    :Package( jn, sn, jp, sp, jc, sc, js, ss, jpc, spc, wei, pri)
{
    setexprice(ex);
}
/*set the exprice for the overnight package*/
void OvernightPackage::setexprice( double ex)
{
    exprice=ex;
}
/*get the extra price for the overnight package*/
double OvernightPackage::getexprice() const
{
    return exprice;
}
/*return the gross freight for the overnight package*/
double OvernightPackage::calculateCost()
{
    return (getprice()+getexprice())*getweight();
}
