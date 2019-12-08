#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED

#include "Package.h"

class TwoDayPackage : public Package//定义派生类名为TwoDayPackage
{
    public:
    TwoDayPackage(const string &,const string &,const string &,const string &,const string &,const string &,double = 0.0,double = 0.0,double = 0.0);
    void setTwoDayPrice(double twodayprice);
    void print();
    private:
        double twoDayPrice;
        double totalPrice;
};
#endlif // TWODAYPACKAGE_H_INCLUDED
