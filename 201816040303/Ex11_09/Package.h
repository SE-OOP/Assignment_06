#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED

#include <iostream>

using namespace std;

class Package
{
public:
    Package(string,string,string,string,int,double,double);
    /*
    void setSender();
    string getSender();
    void setRecipient();
    string getRecipient();
    void setState();
    string getState();
    void setCity();
    string getCity();
    void setPostal();
    int getPostal();*/
//    void setWeight();
    double getWeight();
//    void setCost();
    double getCost();
    double calculateCost();
    void point();
private:
    string sender;
    string recipient;
    string state;
    string city;
    int postal;
    double weight;
    double cost;
} ;

#endif // PACKAGE_
