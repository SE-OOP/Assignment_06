#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED
#include"Package.h"
class TwoDayPackage:public Package
{
public:
    TwoDayPackage(string,string,string,string,string,string,string,string,string,string,double,double,double);//声明构造函数
    double calculateCost();//重载calculateCost函数
private:
    double fee;//平寄费
};

#endif // TWODAYPACKAGE_H_INCLUDED
