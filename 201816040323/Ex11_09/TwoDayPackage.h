#include <string>
#include "Package.h"
using namespace std;

class TwoDayPackage : public Package
{
public:
    TwoDayPackage(string,string,string,string,string,string,double=0,double=0,double=0);//The constructor
    double calculateCost();
    void setTDFee(double);
    double getTDFee();
private:
    double TDFee;//Ping, please
};
