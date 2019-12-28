#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED

#include <string>
#include "Package.h"
class TwoDayPackage: public Package
{
public:
    TwoDayPackage( const string &, const string &, const string &,const string &, const string &,const string &,
      double = 0.0, double = 0.0, double = 0.0);

    void setFlatFee(double);
    double getFlatFee()const;

    double calculateCost() const;
private:
    double flatFee;
};

#endif // TWODAYPACKAGE_H_INCLUDED
