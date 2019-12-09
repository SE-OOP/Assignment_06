#include "Package.h"
#include <string>
using namespace std;

class TwoDayPackage: public Package
{
public:
    TwoDayPackage(string,string,string,string,string,string,double=0,double=0,double=0);
    double calculateCost();

    void setSecondfee(double );
    double getSecondfee();

private:
    double secondfee;
};
