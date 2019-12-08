#include <iostream>
#include<Package.h>
using namespace std;
class TwoDayPackage : public Package
{
public:
     TwoDayPackage (const string &, const string &, const string &, const string &, const string &, const string &
              double = 0.0, double = 0.0, double = 0.0);
    void setFlatFee(double);
    double getFlatFee()const;
    double calculateConst()const;
private:
    double flatFee;


};

