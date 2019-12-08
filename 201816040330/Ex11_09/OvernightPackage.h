#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include "Package.h"//Package class definition

using namespace std;

class OvernightPackage : public Package
{
public:
    explicit OvernightPackage(const string &,const string &,const string &,const string &,const string &,const string &,double);
    ~OvernightPackage();//destructor
    void setOtherfee(double);//set otherfee
    double getOtherfee();//return otherfee
    double calculateCost(double);//calculateCost
private:
    double otherfee;
};//end class OvernightPackage


#endif // OVERNIGHTPACKAGE_H_INCLUDED
