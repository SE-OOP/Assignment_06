#include <iostream>
using namespace std;

#include "Package.h"
Package::Package( const string &first, const string &last, const string &ssn, const string &a,const string &b,
                 const string &g,double sales, double rate )
{
   name1 = first; // should validate
   name2=g;
   addess = last;   // should validate
   city = ssn; // should validate
   provience=a;
   code=b;
   setWeight( sales ); // validate and store gross sales
   setPrice( rate ); // validate and store commission rate
}
void Package::setWeight( double sales )
{
   weight = ( sales < 0.0 ) ? 0.0 : sales;
} // end function setsales
// return gross sales amount
double Package::getWeight() const
{
   return weight;
} // end function getWeight
void Package::setPrice( double sales )
{
   price = ( sales < 0.0 ) ? 0.0 : sales;
}
double Package::getPrice() const
{
   return price;
}
double Package::calculateCost() const
{
   return weight * price;
}
