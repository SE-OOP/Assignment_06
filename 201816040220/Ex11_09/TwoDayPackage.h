#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include <string>
#include "Package.h"

class TwoDayPackage :public Package
{
public:

   TwoDayPackage(string,string,string,string,string,int,double,double,double);
//构造TwoDayPackage函数
   void setAdditional(double);       //set平寄费
   double getAdditional();         //get·平寄费

   double calculatecost();      //计算总额
   void print();               //打印输出

private:
  double additional;
};

#endif


