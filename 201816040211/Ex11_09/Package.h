#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED

#include <iostream>
using namespace std;

class Package
{
public:
     Package(const string &, const string &, const string &, const string &, const string &,
              const string &, const double &, const double &);
     void setsender(string );
     string getsender( );
     void setreceiver(string );
     string getreceiver( );
     void setplace(string);
     string getplace( );
     void setcity(string );
     string getcity( );
     void setstate(string )void setstate(string );
     string getstate( );
     void setbianma(string);
     string getbianma( );
     void setweight(double);
     double getweight();
     void setfee(double);
     double getfee( );

     double calculateCost(double, double);
     void print();
private:
     string sender;
     string receiver;
     string place;
     string city;
     string state;
     string bianma;
     double weight;
     double fee;
};

#endif // PACKAGE_H_INCLUDED
