#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED

#include "Package.h"
using namespace std;

class TwoDayPackage : public Package
{
public:
    TwoDayPackage( string, string, string, string, string, string,
                   string, string, string, string, double, double, double );// TwoDayPackage constructor initializes data members

    void setPostage( double ); // set the twoDayPackage postage
    double getPostage( ); // return the twoDayPackage postage

    double calculateCost(); //calculate the cost of the package

    void Print( ); //display the information of twoDayPackage
private:
    double postage;
};  // end class TwoDayPackage

#endif // TWODAYPACKAGE_H_INCLUDED
