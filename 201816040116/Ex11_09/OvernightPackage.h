#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include"Package.h"
using namespace std;
#include<string>
class OvernightPackage:public Package   //定义一个名为OvernightPackage继承Package的类
{
public:
    OvernightPackage(string,string,string,string,string,string,double,double);
    double calculateCost(double);
    void display(); //计算邮寄费用
private:
    double ncost;   //每盎司额外费用
};

#endif // OVERNIGHTPACKAGE_H_INCLUDED
