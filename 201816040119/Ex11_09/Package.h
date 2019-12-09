#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include <iostream>
using namespace std;
class Package
{
public:  Package( const string &, const string &,const string &,const string &,const string &,const string &,
                  double = 0.0, double = 0.0 );
   double calculateCost()const;
    void setWeight( double );
   double getWeight() const;
    void setPrice( double );
   double getPrice() const;
protected:
   string name1;
   string name2;
   string addess;
   string city;
   string provience;
   string code;
   double weight;
   double price;
};

#endif // PACKAGE_H_INCLUDED
