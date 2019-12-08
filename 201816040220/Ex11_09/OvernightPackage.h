#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
using namespace std;
#include <string>
#include "OvernightPackage.h"

class OvernightPackage :public Package
{
public:
    OvernightPackage(string,string,string,string,string,int,double,double,double);
//构造OvernightPackage函数
    void setRate(double);       //set额外费用
    double getRate();          //get额外费用

   double calculatecost();     //计算总费
   void print();               //打印输出

private:
    double rate;

};

#endif


