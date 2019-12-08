#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include <string>
#include "Package.h"//class 


class TwoDayPackage:public Package
{
    public:

    TwoDayPackage(const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,
            double=0.0,double=0.0,double=0.0);//constructor
            void setDayPay(double);//set pay
            double getDayPay();//get pay
            double calculateCost();//new calculate function
            void print();//print the message
        private://data member
            double daypay;
};
#endif // TWODAYPACKAGE_H
