
#include"Package.h"

class OvernightPackage:public Package
{
public:
    OvernightPackage(string,string,string,string,string,string,string,string,string,string,
                     double,double,double);
    void setExtraMoney(double);

    double getExtraMoney();

    double calculateCost();
    void print() const;
private:
    double ExtraMoney;
};
