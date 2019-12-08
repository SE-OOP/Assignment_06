#include <iostream>
#include"Package.h"
using namespace std;
class OvernightPackage : public Package
{public:
     TwoDayPackage (const string &, const string &, const string &, const string &, const string &, const string &,
              double = 0.0, double = 0.0,double = 0.0);

 void setEarnFee(double);
    double getEarnFee()const;
    double CalculateConst()const;
private:
    double earnFee;
