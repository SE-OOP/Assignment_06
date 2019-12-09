//Package.h
#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include <iostream>
#include <stdexcept>
using namespace std;

class Package
{
public:
    Package(const string &,const string &,const string &,const string &,const string &,
            const string &,const string &,const string &,const string &,const string &,
            double=0.0,double=0.0);

    void setsName(string);//set sender's name
    string getsName();////get sender's name

    void setsAddress(string);//set sender's address
    string getsAddress();//get sender's address

    void setsCity(string);//set sender's city
    string getsCity();//get sender's city

    void setsState(string);//set sender's state
    string getsState();//get sender's state

    void setsPostcode(string);//set sender's postcode
    string getsPostcode();//get sender's postcode

    void setrName(string);//set receiver's name
    string getrName();//get receiver's name

    void setrAddress(string);//set receiver's address
    string getrAddress();//get receiver's address

    void setrCity(string);//set receiver's city
    string getrCity();//get receiver's city

    void setrState(string);//set receiver's state
    string getrState();//get receiver's state

    void setrPostcode(string);//set receiver's postcode
    string getrPostcode();//get receiver's postcode

    void setWeight(double);//set weight
    double getWeight();//get weight

    void setPriceForPerOunce(double);//set PriceForPerOunce
    double getPriceForPerOunce();//set PriceForPerOunce

    void setTotalCost(double);//set TotalCost
    double getTotalCost();//set TotalCost

    double calculateCost();//function calculateCost for class Package
    void print();//print function for class Package

protected://Data member
    string sName;
    string sAddress;
    string sCity;
    string sState;
    string sPostcode;

    string rName;
    string rAddress;
    string rCity;
    string rState;
    string rPostcode;

    double Weight;
    double PriceForPerOunce;
    double TotalCost;

};

#endif // PACKAGE_H_INCLUDED
