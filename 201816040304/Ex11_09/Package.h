#ifndef PACKAGE_CPP_INCLUDED
#define PACKAGE_CPP_INCLUDED

#include<string>
using namespace std;

class Package
{
public:
    Package(string ,string ,string ,string ,string ,string ,string ,string ,string ,string ,double=0,double=0);
    void setWeight(double);
    double getWeight();
    void setCostPerCup(double);
    double getCostPerCup();
    double calculateCost();
    void print();

private:
    string SenderName;
    string SenderAddress;
    string SenderCity;
    string SenderProvince;
    string SenderPostalCode;
    string AddresseeName;
    string AddresseeAddress;
    string AddresseeCity;
    string AddresseeProvince;
    string AddresseePostalCode;
    double Weight;
    double CostPerCup;
};
#endif // PACKAGE_CPP_INCLUDED
