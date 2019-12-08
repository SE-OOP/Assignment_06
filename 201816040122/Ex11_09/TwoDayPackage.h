
#include <iostream>
#include <string>
#include "Package.h"
using namespace std;
class TwoDayPackage:public Package
{
public:
    TwoDayPackage(const string &,const string &,const string &,const string &,const string &,double=0,double=0,double=0);
    void setFlatCharge(double);
    double getFlatCharge();
    double calculateCost();
    void display();
private:
    double flatcharge;
};
