#include "OvernightPackage.h"
#include <iostream>

using namespace std;

OvernightPackage::OvernightPackage( const string& a , const string& b , const string& c , const string& d , const string& e ,
                 const string& f, const string& g , const string& h , const string& i , const string& j ,
                 double weight , double fee , double cost )
                 :Package( a, b , c , d , e , f , g , h , i , j , weight , fee )
                 {
                     setextraOuncesPerOunce( cost );
                 }

void OvernightPackage::setextraOuncesPerOunce( double mm )
{
    extraOuncesPerOunce = mm ;
}

double OvernightPackage::calculateCost()
{
    return  ( getcostPerOunce() + extraOuncesPerOunce ) * getpackageWeight() ;
}

void OvernightPackage::print()
{
    Package::print();
    cout << "Postage is : " << calculateCost() << endl;
}
