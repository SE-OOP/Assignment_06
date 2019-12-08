#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED

#include <iostream>
#include"Package.h"
using namespace std;

class OvernightPackage: public Package
{
public:
     OvernightPackage(const string &, const string &, const string &, const string &, const string &,
              const string &, const double &, const double &, const Twofee);
    void settwofee(double);
    double gettwofee( );
    double calculateCost(  );
    void print();
private:
    double twofee;
};
#endif // OVERNIGHTPACKAGE_H_INCLUDED

