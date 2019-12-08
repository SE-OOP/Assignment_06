#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include <iostream>
#include <string>

using namespace std;

class Package
{
public:
   Package( string ,string,string,string,string,double,double,double );
   void setName( string );
   string  getName();
   void setname( string );
   string  getname();
   void setAddress( string );
   string  getAddress();

   void setCity( string );
   string  getCity();

   void setProvince( string );
   string  getProvince();

   void setPostalCode( double );
   double  getPostalCode();

   double calculateCost();
   void setWeight( double);
   double getWeight();
   void setFee( double);
   double getFee();
   void print();
private:
   string Name; // data member that stores the name
   string name;
   string Address;
   string City;
   string Province;
   double PostalCode;
   double Weight;
   double Fee;
}; // end class Package



#endif // PACKAGE_H_INCLUDED
