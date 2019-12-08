#include <iostream>
#include <stdexcept>

#include "TwoDayPackage.h"
using namespace std;

TwoDayPackage::TwoDayPackage( string &, string &,string &,string &,string &,
             double = 0.0 , double = 0.0 ,double twodayfee )
             : Package( string &, string &,string &,string &,string &,
             double = 0.0 , double = 0.0 )
 void settwodayFee( double twodayfee )
 {
     twodayFee = twodayfee;
 }
double gettwodayFee()
{
    return twodayFee;
}
double cacluateCost()
{
    return packageWeight * packageFee + twodayFee;
}
