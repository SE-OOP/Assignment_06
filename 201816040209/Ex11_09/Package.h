#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include <string>
using namespace std;

class Package
{
public:
Package(double=0,double=0);
~Package();
double getOunce();
double getCostPerOunce();
double calculateCost();

private:
double Ounce;
double CostPerOunce;


};



#endif // PACKAGE_H_INCLUDED
