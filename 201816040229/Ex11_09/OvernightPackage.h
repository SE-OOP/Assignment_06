#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include"Package.h"


class OvernightPackage:public Package
{
public:
    OvernightPackage(string ,string, string,string,string,string,double=0.0,double=0.0,double=0.0);
    void setAdditional(double);
    double getAdditional();
    double calculateCost();
    void print();
private:
    double additional;
};
#endif // OVERNIGHTPACKAGE_H_INCLUDED
