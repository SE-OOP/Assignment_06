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
    double getUnitPrice() const;
    string getSenderName() const;
    string getAddresseeName() const;
    string getAddress() const;
    string getCity() const;
    string getState() const;
    string getPostCode() const;

private:
    string senderName;  // in order to simplify constructor, I don't set sender's address,city and so on
    string addresseeName;
    string address;
    string city;
    string state;
    string postCode;
    double weight;
    double unitPrice;
};
#endif // PACKAGE_H
