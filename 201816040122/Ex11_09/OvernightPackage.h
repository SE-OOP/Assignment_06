


#include <iostream>
#include <string>
#include "Package.h"
using namespace std;
class OvernightPackage:public Package
{
public:
    OvernightPackage(const string &,const string &,const string &,const string &,const string &,double=0,double=0,double=0);
    void setAdditionalCosts(double);
    double calculateCost();
    double getAdditionalCosts();
    void display();
private:
    double additionalcosts;
};
