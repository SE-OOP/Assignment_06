#include <iostream>
#include <string>
using namespace std;

#include "TwoDayPackage.h"// include definition of class TwoDayPackage

// TwoDayPackage constructor initializes data members
TwoDayPackage::TwoDayPackage( string Sender, string SAddress, string SCity, string SState, string SPostcode,
                              string Recipient, string RAddress, string RCity, string RState, string RPostcode,
                              double Weight, double Packagefee, double Postage)
    :Package( Sender, SAddress, SCity, SState, SPostcode, Recipient, RAddress, RCity, RState, RPostcode, Weight, Packagefee )
{
    setPostage( Postage );
} // end TwoDayPackage constructor

// set the twoDayPackage postage
void TwoDayPackage::setPostage( double cost )
{
    if( cost > 0 )
        postage = cost;
    else
        throw invalid_argument( "Postage must be greater than zero! ");
} // end function setPostage

// return the twoDayPackage postage
double TwoDayPackage::getPostage( )
{
    return postage;
} // end function getPostage

//calculate the cost of the package
double TwoDayPackage::calculateCost()
{
    return Package::calculateCost() + postage ;
} // end function calculateCost

//display the information of twoDayPackage
void TwoDayPackage::Print( )
{
    Package::Print();
    cout << "Postage : " << postage << "\n";
} // end function Print
