#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED
#include "Package.h"

class TwoDayPackage : public Package
{
public:
    /*Two-day information for initializing for packages*/
    TwoDayPackage( const string &, const string &, const string &, const string &, const string &, const string &,
                   const string &, const string &, const string &, const string &, double, double, double );
    double calculateCost();//computational costs;
    void setextraprice( double );//set the extra charge for two-day package;
    double getextraprice() const;//get the charge for two-day package;
private:
    double extraprice; //Extra charge for two-day package;
};


#endif // TWODAYPACKAGE_H_INCLUDED
