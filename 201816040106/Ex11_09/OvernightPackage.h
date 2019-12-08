#ifndef OVERNIGHT
#define OVERNIGHT
#include"Package.h"
#include <string>
using namespace std;
class OvernightPackage:public Package
{
public:
    OvernightPackage(string,string,string,string,string,string,double,double,double);
    double calculateCost();
private:
    double extraFee;
};
#endif
