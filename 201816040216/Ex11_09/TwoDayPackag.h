#include"Package.h"

class TwoDayPackage:public Package
{
public:
    TwoDayPackage(string,string,string,string,string,string,string,string,string,string,
                     double,double,double);
    void setOverMoney(double);

    double getOverMoney();

    double calculateCost();

    void print() const;
private:
    double OverMoney;
};
