//Assignment_06: OvernightPackage.h
//class definition
#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include "Package.h" // include the Package header file

class OvernightPackage: public Package // class OvernightPackage inherit publicly from Package
{
public:
    explicit OvernightPackage( string, string, string, string,
                      string, string, double = 0, double = 0, double = 0 );// constructor
    ~OvernightPackage(){} // destructor

    // set and get function
    void setEveryTip( double );
    double getEveryTip() const;

    // cost
    double calculateCost() const;

    void print() const;// show informations
private:
    double everyTip;// every package need another cost
};

#endif // OVERNIGHTPACKAGE_H
