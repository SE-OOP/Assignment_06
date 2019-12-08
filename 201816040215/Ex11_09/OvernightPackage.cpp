#include <iostream>
#include <stdexcept>

#include "OvernightPackage.h"
using namespace std;

OvernightPackage::OvernightPackage( string &, string &,string &,string &,string &,
             double = 0.0 , double = 0.0 ,double extrafee )
             : Package( string &, string &,string &,string &,string &,
             double = 0.0 , double = 0.0 )
void setextraFee( double extrafee )
{
    if( extrafee > 0.0 )
        extraFee = extrafee;
    else
        throw invalid_argument( " The extrafee must be > 0.0 " )
}
double getextraFee()
{
    return extraFee;
}
double calculateCost()
{
    return packageWeight * ( packageFee + extraFee );
}
