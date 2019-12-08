// Definition of Package class.
#ifndef PACKAGE_H
#define PACKAGE_H
using namespace std;
class Package
{
public:
   Package( string &,string &,string &,string &,string &,double,double,double ); // constructor
   double calculateCost( );
   void setConsignee(string &);
   string getConsignee()const;
    void setShipper(string &);
   string getShipper()const;
      void setSite(string &);
   string getSite()const;
      void setPlace(string &);
   string getPlace()const;
    void setState(string &);
   string getState()const;
      void setZipcode(double);
   double getZipcode()const;
      void setWeight(double);
   double getWeight()const;
      void setCost(double);
   double getCost()const;

private:
    string consignee;
    string shipper;
    string site;
    string place;
    string  state;
    double zipcode;
   double weight;
   double  cost;
}; // end class Package

#endif
