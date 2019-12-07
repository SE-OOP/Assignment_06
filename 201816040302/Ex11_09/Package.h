//Package.h
#ifndef PACKAGE_H
#define PACKAGE_H
#include<iostream>
using namespace std;

class Package
{
public:
    //base class constructor
    Package(string senderNam,string addresseeNam,string address0,string city0,string state0,string postCod,double weigh,double unitPric);
    double calculateCost() const;   //base class calculate cost
    void setWeight(double weigh);
    void setUnitPrice(double unitPric);
    double getWeight() const;
       string getSender() const;
    void setAddress( const string & );
    string getAddress() const;
    void setLivingcity( const string & );
    string getLivingcity() const;
    void setLivingstate( const string & );
    string getLivingstate() const;
    void setPostalcode( const string & );
    string getPostalcode() const;
    void setPackageounce( double );
    double getPackageounce() const;
    void setPerouncecost( double );
    double getPerouncecost() const;
    void print() const;
private:
    string sender;
    string addressee;
    string address;
    string city;
    string code;
    double weight;
    double price;
    double cost;
};
#endif
