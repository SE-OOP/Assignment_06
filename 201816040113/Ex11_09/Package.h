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

    void setsName(string);
    string getsName();

    void setsAddress(string);
    string getsAddress();

    void setsCity(string);
    string getsCity();

    void setsState(string);
    string getsState();

    void setsPostcode(string);
    string getsPostcode();

    void setrName(string);
    string getrName();

    void setrAddress(string);
    string getrAddress();

    void setrCity(string);
    string getrCity();

    void setrState(string);
    string getrState();

    void setrPostcode(string);
    string getrPostcode();

    void setWeight(double);
    double getWeight();

    void setPriceForPerOunce(double);
    double getPriceForPerOunce();

    void setTotalCost(double);
    double getTotalCost();

    double calculateCost();//calculate money
    void print();

protected:
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
