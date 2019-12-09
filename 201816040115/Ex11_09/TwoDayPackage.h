//TwoDayPackage.h
#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include"Package.h"

class TwoDayPackage : public Package
{
public:
    //inherit constructor
    TwoDayPackage(string senderNam,string addresseeNam,string address0,string city0,string state0,string postCod,double weigh,double unitPric,double postAg);
    double calculateCost() const;   //reset calculate cost
    void setPostAge(double postAg);
    double getPostAge() const;
private:
    double postAge;
};
#endif // TWODAYPACKAGE_H



