#include "TwoDayPackage.h"
#include <iostream>

using namespace std;

TwoDayPackage::TwoDayPackage( const string& a , const string& b , const string& c , const string& d , const string& e ,
                 const string& f, const string& g , const string& h , const string& i , const string& j ,
                 double weight , double fee , double cost )
                 :Package( a, b , c , d , e , f , g , h , i , j , weight , fee )
                 {
                     setflatShippingFee( cost );
                 }

void TwoDayPackage::setflatShippingFee( double mm )
{
    flatShippingFee = mm ;
}

double TwoDayPackage::calculateCost()
{
    return Package::calculateCost() + flatShippingFee;
}

void TwoDayPackage::print()
{
    Package::print();
    cout << "Postage is : " << calculateCost() << endl;
}
