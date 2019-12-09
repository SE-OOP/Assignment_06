#include "Package.h"
#include <string>
using namespace std;

class OvernightPackage: public Package
{
public:
    OvernightPackage(string,string,string,string,string,string,double=0,double=0,double=0);
    double calculateCost();

    void setNightfee(double );
    double getNightfee();

private:
    double nightfee;
};
