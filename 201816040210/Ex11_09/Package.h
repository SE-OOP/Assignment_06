#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include <string.h>
using namespace std;
class Package
{
public:
    Package( string,string,string,string,string,string,double,double );//constructor function
    double calculateCost();//function to calculate total cost
    double getWeight();//function to get weight
    double getCost();//function to get cost
    void print();//function to print several data members
private:
    string sendName;
    string receiveName;
    string Address;
    string City;
    string Province;
    string postalCode;
    double weight;
    double cost;
};


#endif // PACKAGE_H_INCLUDED
