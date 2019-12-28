#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include <string>
#include "Package.h"
class OvernightPackage: public Package
{
public:
    OvernightPackage( const string &, const string &, const string &,const string &, const string &,const string &,
      double = 0.0, double = 0.0, double=0.0 );

    void setNightFee(double);
    double getNightFee()const;
    double calculateCost() const;
private:
    double nightFee;
};


#endif // OVERNIGHTPACKAGE_H_INCLUDED
