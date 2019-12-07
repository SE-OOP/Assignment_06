#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED

#include "Package.h"

class OvernightPackage:public Package
{
private:
    double addfee;//data member addfee
public:
    //Constructor OvernightPackage
    OvernightPackage();
    OvernightPackage(string,string,string,string,string,int, double, double, double);
    double getAddfee() const;//get addfee
    double calculateCost();//Rewrite Calculate function and add fee
    void setAddfee(double addfee);

};


#endif // OVERNIGHTPACKAGE_H_INCLUDED
