#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED

#include "Package.h"
using namespace std;

class OvernightPackage : public Package
{
public:
    OvernightPackage( string, string, string, string, string, string,
                      string, string, string, string, double, double, double ); // OvernightPackage constructor initializes data members

    void setExtraFee( double ); // set the overnightPackage extra fee
    double getExtraFee( ); // return the overnightPackage extra fee

    double calculateCost( ) ; //calculate the cost of the package

    void Print( ) ; //display the information of overnightPackage
private:
    double extraFee;
}; // end class OvernightPackage

#endif // OVERNIGHTPACKAGE_H_INCLUDED
