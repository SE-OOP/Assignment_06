#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include <string> // C++ standard string class
using namespace std;
class Package
{
public:
   Package( const string &, const string &, const string &,const string &,const string &,
      int = 0.0,double = 0.0, double = 0.0 );

   void setSenderName( const string & ); // set SenderName
   string getSenderName() const; // return SenderName

   void setRecipientName( const string & ); // set RecipientName
   string getRecipientName() const; // return RecipientName

   void setAddressName(const string & );//set address
   string getAddressName() const;//get address

   void setCityName( const string &);//set city
   string getCityName() const;//get city

   void setStateName( const string &);//set state
   string getStateName() const;//get state

   void setPostalCode ( int );//set postalcode
   int getPostalCode() const;//get postalcode

   void setWeightNumber( double );//set weight
   double getWeightNumber() const;//get weight

   void setFeeNumber(double );//set fee
   double getFeeNumber() const;//get fee

   double calculateCost() const;//calculate cost

   void print() const;
private:
    string senderName;
    string recipientName;
    string addressName;
    string cityName;
    string stateName;
    int postalCode;
    double weightNumber;
    double feeNumber;
};


#endif // PACKAGE_H_INCLUDED
