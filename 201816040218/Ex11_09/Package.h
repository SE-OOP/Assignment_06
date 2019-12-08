#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include <string>
#include <iostream>
using namespace std;


class Package
{
public:
    Package(const string& ,const string&  ,const string&  ,const string&  ,const string&  ,const string&  ,const string&  ,const string&  ,const string&  ,const string&  ,double ,double);
    double calculateCost();
    double getweight();

private:
    string SenderName;
    string RecipientName;
    string RecipientAddress,SenderAddress;
    string RecipientCity, SenderCity;
    string RecipientState, SenderState;
    string RecipientCode, SenderCode;
    double Weight;
    double Price;
};

#endif // PACKAGE_H_INCLUDED
