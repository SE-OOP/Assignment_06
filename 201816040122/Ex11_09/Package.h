
#include <iostream>
#include <string>
using namespace std;
#ifndef PACKAGE_H
#define PACKAGE_H


class Package
{
public:
    Package(const string &,const string &,const string &,const string &,const string &,double=0,double=0);
    void setRName(const string &);
    void setAddress(const string &);
    void setCity(const string &);
    void setState(const string &);
    void setZipCode(const string &);
    void setWeight(double);
    void setCost(double);
    string getRName();
    string getAddress();
    string getCity();
    string getState();
    string getZipCode();
    double getWeight();
    double getCost();
    double calculateCost();
    void  display();

private:
    string RName;
    string address;
    string city;
    string state;
    string zipCode;
    double weight;
    double cost;

};
#endif
