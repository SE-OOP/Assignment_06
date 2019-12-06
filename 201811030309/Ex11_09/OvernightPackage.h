#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include "Package.h"

class OvernightPackage : public Package
{
public:
    /*Overnight information for initializing for packages*/
    OvernightPackage( const string &, const string &, const string &, const string &, const string &, const string &,
                   const string &, const string &, const string &, const string &, double, double, double );
    void setexprice( double );//set the new charge for overnight;
    double getexprice() const;//get the charge for overnight;
    double calculateCost();
private:
    double exprice;//overnight for extra charge;
};

#endif // OVERNIGHTPACKAGE_H_INCLUDED
