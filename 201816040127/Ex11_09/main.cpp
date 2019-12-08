#include <iostream>
#include <iomanip>
using namespace std;

// TwoDayPackage class definition
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
int main()
{
   // instantiate TwoDayPackage object
    Package package( "Bob", "Lewis", "HeNan University of Technology", "Zhengzhou", "HeNan", 45200 , 12.0 , 8.0 );
    TwoDayPackage twoDayPackage( "Bob", "Lewis", "HeNan University of Technology", "Zhengzhou", "HeNan", 45200 , 12.0 , 8.0 ,10.0);
    OvernightPackage overnightPackage("Bob", "Lewis", "HeNan University of Technology", "Zhengzhou", "HeNan", 45200 , 12.0 , 8.0 ,2.0);

   // set floating-point output formatting
   cout << fixed << setprecision( 2 );

   // get commission package data
   cout << "Package obtained by get functions: \n" << "\nsender name is "
      << package.getSenderName()
      << "\nrecipient name is " << package.getRecipientName()
      << "\naddressName is "
      << package.getAddressName()
      << "\nCityName is " << package.getCityName()
      << "\nStateName is " << package.getStateName()
      << "\nPostalCode is " << package.getPostalCode()
      << "\nWeightNumber is " << package.getWeightNumber()
      << "\nFeeNumber is " << package.getFeeNumber();
      cout << "\n\npackage's cost: $" << package.calculateCost() << endl;

      cout << "TwoDayPackage obtained by get functions: \n"
      << "\nsender name is " << twoDayPackage.getSenderName()
      << "\nrecipient name is " << twoDayPackage.getRecipientName()
      << "\naddressName is "
      << twoDayPackage.getAddressName()
      << "\nCityName is " << twoDayPackage.getCityName()
      << "\ntateName is " << twoDayPackage.getStateName()
      << "\nWeightNumber is " << twoDayPackage.getWeightNumber()
      << "\nFeeNumber is " << twoDayPackage.getFeeNumber()
      << "\nFlatCharge is" << twoDayPackage.getFlatCharge();
      cout << "\n\nTwoDayPackage's cost: $" << twoDayPackage.calculateCost() << endl;


      cout << "OvernightPackage obtained by get functions: \n"
      << "\nsender name is " << overnightPackage.getSenderName()
      << "\nrecipient name is " << overnightPackage.getRecipientName()
      << "\naddressName is "
      << overnightPackage.getAddressName()
      << "\nCityName is " << overnightPackage.getCityName()
      << "\ntateName is " << overnightPackage.getStateName()
      << "\nWeightNumber is " << overnightPackage.getWeightNumber()
      << "\nFeeNumber is " << overnightPackage.getFeeNumber()
      << "\nOverFe is " << overnightPackage.getOverFe();
      cout << "\n\nOvernightPackage's cost: $" << overnightPackage.calculateCost() << endl;

} // end main
