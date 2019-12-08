
#include <string>
#include "Package.h"
using namespace std;

class OvernightPackage : public Package
{
public:
    OvernightPackage(string,string,string,string,string,string,double=0,double=0,double=0);//The constructor
    double calculateCost();
    void setevOFee(double);
    double getevOFee();
private:
    double evOFee;//Additional charge per serving
};
