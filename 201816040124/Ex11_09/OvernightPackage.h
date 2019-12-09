#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include"Package.h"
class OvernightPackage:public Package//声明Package为基类
{
public:
    OvernightPackage(string,string,string,string,string,string,string,string,string,string,double,double,double);//声明构造函数
    double calculateCost();//重载calculateCost函数
private:
    double otherFee;//每盎司额外费用
};

#endif // OVERNIGHTPACKAGE_H_INCLUDED
