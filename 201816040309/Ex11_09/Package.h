#ifndef Package_H
#define Package_H
#include <iostream>
#include <array>
using namespace std;
class Package
{
private:
    string SendName;
    string ReceiveName;
    string Address;
    string City;
    string County;
    string PostalCode;
    double Weight;
    double Fee;
public:
    Package(string,string,string,string,string,string,double,double);
    virtual double CalculateCost(double,double);

};
#endif // Package_H
