#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
class Package
{
public:
   Package( const string &, const string &, const string &,const string &, const string &,const string &,
      double = 0.0, double = 0.0);
    void setRecipientName( const string & ); // set recipient's name
   string getRecipientName() const; // return recipient's name

   void setSenderName( const string & ); // set sender's name
   string getSenderName() const; // return sender's name

   void setReAddress( const string &);
   string getReAddress() const;

   void setCity( const string &);
   string getCity() const;

   void setState(const string &);
   string getState() const;

   void setPostalCode( const string & ); // set postal code
   string getPostalCode() const; // return postal code

   void setWeight( double ); 
   double getWeight() const; 

   void setUnitPrice( double ); 
   double getUnitPrice() const; 

   double calculateCost() const; // calculate cost
  
private:
   string recipientName;
   string senderName;
   string reAddress;
   string city;
   string state;
   string postalCode;
   double weight; 
   double unitPrice; 
}; // end class Package



#endif // PACKAGE_H_INCLUDED
