#include<iostream>
using namespace std;
#include"OvernightPackage.h"
OvernightPackage::OvernightPackage(string jn,string ja,string jc,string jz,string jen,string sn,string sa,string sc,string sz,string sen,double w,double s,double f)
:Package( jn, ja, jc, jz, jen, sn, sa, sc, sz, sen, w, s),otherFee(f)//用基类构造函数初始化基类数据成员，初始化每盎司额外费用
{

}
double OvernightPackage::calculateCost()//计算花费
{
    setSpend(getSpend()+otherFee);
    return Package::calculateCost();
}
