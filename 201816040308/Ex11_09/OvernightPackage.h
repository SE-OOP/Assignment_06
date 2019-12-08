#include <bits/stdc++.h>
#include "Package.h"

using namespace std;
class OvernightPackage : public Package
{
public:
    OvernightPackage(string, string, string, string, string, string, double, double, double);
    double calculateCost();
private:
    double overnightprice;
};
