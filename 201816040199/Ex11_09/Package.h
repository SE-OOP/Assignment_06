#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED

#include<iostream>
#include<string>
using  namespace std;

class Package
{
public:
    Package(string, string, string, string,string, string, double, double);
    void setOunce(double);
    void setCost(double);
    double getOunce();
    double getCost();
    double calculateCost();
    void print();
private:
    string Sender;
    string Receiver;
    string Address;
    string City;
    string State;
    string Postalcode;
    double Ounce;
    double Cost;
};

#endif // PACKAGE_H_INCLUDED
