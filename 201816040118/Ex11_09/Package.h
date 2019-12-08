#ifndef PACKAGE_H
#define PACKAGE_H
#include<string>
using namespace std;
class Package
{
public:
    Package(const string &,const string &,const string &,const string &,const string &,const string &,double,double);
    double calculateCost();
    void setWeight(double);
    double getWeight()const;
    double getPrice()const;
    void setPrice(double);
    void printf()const;
private:
    string Sender;
    string Receiver;
    string Address;
    string City;
    string State;
    string Postcode;
    double Weight;
    double Price;
};
#endif
