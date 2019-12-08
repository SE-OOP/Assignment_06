//Package.h
//Definition of Package class
#ifndef PACKAGE_H
#define PACKAGE_H
#include<string>
using namespace std;

class Package
{
public:
    Package(const string &,const string &,const string &,const string &,const string &,const string &,double = 0.0,double = 0.0);
    void setSenderName(const string &);//set sender's name
    string getSenderName() const;//retrieve sender's name

    void setAddressName(const string &);//set address's name
    string getAddressName()const;//retrieve address's name

    void setAddress(const string &);//set address
    string getAddress()const;//retrieve address

    void setCity(const string &);//set city
    string getCity()const;//retrieve city

    void setState(const string &);//set state
    string getState()const;//retrieve state

    void setPostalCode(const string &);//set postal code
    string getPostalCode()const;//retrieve postal code

    void setWeight(double);//set weight
    double getWeight()const;//retrieve weight

    void setPrice(double);
    double getPrice()const;//retrieve price
    double calculateCost()const;//retrieve cost
    void print()const;//print package information
private:
    string senderName;
    string addressName;
    string address;
    string city;
    string state;
    string postalCode;
    double weight;
    double price;//data member for class Postage
};//end class Postage
#endif // PACKAGE_H
