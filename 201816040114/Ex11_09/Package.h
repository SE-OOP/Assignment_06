#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
using namespace std;
#include <iostream>

class Package
{
public:
    explicit Package(string = "Li",string = "Zeng",string = "ZhenZou",string = "430521",double = 1.0,double = 1.0);
    void setTheSender(string);
    string gettheSender();
    void setRecipient(string);
    string getRecipient();
    void setAddress(string);
    string getAddress();
    void setPostcode(string);
    string getPostcode();
    void setWeight(double);
    double getWeight();
    void setCost(double);
    double getCost();
    double calculateCost();
    void print();
private:
    string theSender;
    string recipient;
    string address;
    string postcode;
    double weight;
    double cost;

};



#endif // PACKAGE_H_INCLUDED
