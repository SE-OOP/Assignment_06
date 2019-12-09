#include<iostream>
using namespace std;
#include"TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(string jn,string ja,string jc,string jz,string jen,string sn,string sa,string sc,string sz,string sen,double w,double s,double f)
:Package( jn, ja, jc, jz, jen, sn, sa, sc, sz, sen, w, s)//用基类构造函数初始化基类数据成员
{
    fee=f;//初始化平寄费
}
double TwoDayPackage::calculateCost()//计算花费
{
    return Package::calculateCost()+fee;
}
