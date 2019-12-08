#ifndef PACKAGE_H
#define PACKAGE_H

#include <bits/stdc++.h>
using namespace std;
class Package
{
public:
    Package(string, string, string, string, string, string, double, double);
    string getsender();
    string getrecipient();
    string getaddress();
    string getcity();
    string getstate();
    string getpostalcode();
    double getweight();
    void setweight(double );
    double getprice();
    void setprice(double );
    double calculateCost();
private:
    string sender;
    string recipient;
    string address;
    string city;
    string state;
    string postalcode;
    double weight;
    double price;
};

#endif // PACKAGE_H
