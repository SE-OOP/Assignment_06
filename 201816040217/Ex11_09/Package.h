#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include<bits/stdc++.h>

class Package
{
public:
    Package(const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,double ,double);
    double calculateCost();
    void setWeight(double);
    double getWeight();
    void setFee(double);
    double getFee();

private:
    std::string recipientName, senderName;
    std::string recipientAdress,senderAdress;
    std::string postcode;
    double fee, weight;
};


#endif // PACKAGE_H_INCLUDED
