//Assignment_06: TwoPackage.h
//class definition
#ifndef TWOPACKAGE_H
#define TWOPACKAGE_H
#include "Package.h"

class TwoPackage: public Package
{
public:
    explicit TwoPackage( string, string, string, string,
                      string, string, double = 0, double = 0, double = 0 );
    ~TwoPackage(){}

    void setTip( double );
    double getTip() const;

    double calculateCost() const;

    void print() const;
private:
    double tip;
};

#endif // TWOPACKAGE_H
