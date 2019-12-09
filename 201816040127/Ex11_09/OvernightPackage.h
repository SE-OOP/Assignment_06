#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include <string> // C++ standard string class
using namespace std;

#include "Package.h" // Package class definition
class OvernightPackage
{
public:
    OvernightPackage( const string &, const string &, const string &,const string &,const string &,
      int = 0.0,double = 0.0, double = 0.0,double = 0.0 );
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

    void setOverFe( double );
    double getOverFe() const;

    void print() const;

    double calculateCost() const;//calculate cost
private:
   double overFe; // base salary
   class Package P1;

};
#endif // OVERNIGHTPACKAGE_H_INCLUDED
