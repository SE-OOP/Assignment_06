#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include<string>
#include"Package.h"

class OvernightPackage:public Package//class define 
{
    public:
        OvernightPackage(const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,
            double=0.0,double=0.0,double=0.0);//constructor
            void setOverPay(double);//set overpay
            double getOverPay();//get overpay
            double calculateCost();//new calculate function
            void print();//print the message
    private://data member
         double overpay;

};
#endif // OVERNIGHTPACKAGE_H
