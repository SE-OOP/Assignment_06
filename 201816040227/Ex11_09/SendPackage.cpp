#include <iostream>
#include <iomanip>
using namespace std;

#include "Package.h" // Account class definition
#include "OvernightPackage.h" // SavingsAccount class definition
#include "TwoDayPackage.h" // CheckingAccount class definition

int main ()
{
    OvernightPackage a("Taylor Swift" , "lin", "137 W San Bernardino Rd", "Redding", "Commonwealth of Pennsylvania",
                       "96003", 2.0, 20.0,5.0);


   cout<< "\nRecipient name : " << a.getRecipientName()
      << "\nSender name : " << a.getSenderName()
      << "\nRecipient's address : " << a.getReAddress()
      << "\nRecipient's city : "<<a.getCity()
      << "\nRecipient's state : "<<a.getState()
      << "\nPostal code : "<<a.getPostalCode()
      << "\nPackage's weight : " << a.getWeight()
      << "\nUnit price : " << a.getUnitPrice()
      << "\nNight fee : " << a.getNightFee() << endl;
      cout <<"All-cost : "<< a.calculateCost()<< endl;

    TwoDayPackage b("Taylor Swift" , "lin", "137 W San Bernardino Rd", "Redding", "Commonwealth of Pennsylvania",
                       "96003", 2.0, 20.0, 10.0);
    // get package data
   cout<< "\nRecipient name : " << b.getRecipientName()
      << "\nSender name : " << b.getSenderName()
      << "\nRecipient's address : " << b.getReAddress()
      << "\nRecipient's city is "<<b.getCity()
      << "\nRecipient's state : "<<b.getState()
      << "\nPostal code : "<<b.getPostalCode()
      << "\nPackage's weight : " << b.getWeight()
      << "\nUnit price : " << b.getUnitPrice()
      << "\nFlat Fee : " << b.getFlatFee() << endl;

   cout <<"All-cost : "<< b.calculateCost()<< endl;

   //a.setBaseSalary( 1000 ); // set base salary
}
