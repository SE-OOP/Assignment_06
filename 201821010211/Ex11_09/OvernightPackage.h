#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED

#include<string.h>
using namespace std;

class OvernightPackage:public Package
{
public:
    OvernightPackage(const string &,const string &,const string &,const string &,const string &,const string &, double ,double ,double );
    void setIncrease(double);
    double getIncrease();
    double calculateCost();
private:
    double increase;
};


#endif // OVERNIGHTPACKAGE_H_INCLUDED
