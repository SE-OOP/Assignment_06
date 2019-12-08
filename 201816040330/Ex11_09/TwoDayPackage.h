#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED
#include "Package.h"//Package class definition

using namespace std;

class TwoDayPackage : public Package
{
public:
    explicit TwoDayPackage(const string &,const string &,const string &,const string &,const string &,const string &,double);
    ~TwoDayPackage();//destructor
    double calculateCost(double);//calculateCost
    void setCharge(double);//set charge
    double getCharge();//return charge

private:
    double charge;

};//end class TwoDayPackage


#endif // TWODAYPACKAGE_H_INCLUDED
