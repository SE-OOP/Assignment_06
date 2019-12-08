//TwoDayPackage.h
#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED
#include "Package.h"
#include <iostream>
class TwoDayPackage:public Package
{
public:
    TwoDayPackage(std::string ,std::string ,std::string ,std::string ,std::string ,double ,double,double);//constructor with eight parameter
    ~TwoDayPackage();//destructor
    void setTwoDayFee(double);
    double getTwoDayFee()const;
    double calculateCost()const;
private:
    double twoDayFee;
};


#endif // TWODAYPACKAGE_H_INCLUDED
