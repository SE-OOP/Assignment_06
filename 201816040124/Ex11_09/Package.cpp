#include <iostream>

using namespace std;

#include"Package.h"

Package::Package(string jn,string ja,string jc,string jz,string jen,string sn,string sa,string sc,string sz,string sen,double w,double s)//用构造函数初始化成员
:jiName(jn),jiArdess(ja),jiCity(jc),jisuozaizhou(jz),jiEmailNum(jen),shouName(sn),shouArdess(sa),shouCity(sc),shousuozaizhou(sz),shouEmailNum(sen)
{
    if(w>0)//判断重量是否为正
        weight=w;
    else
        cout<<"重量必须为正"<<endl;
    if(s>0)//判断每盎司费用是否为正
        spend=s;
    else
        cout<<"每盎司费用必须为正"<<endl;
}
double Package::calculateCost()//计算花费
{
    return weight*spend;
}
void Package::setSpend(double a)//改变每盎司费用
{
    spend=a;
}
double Package::getSpend()//返回每盎司费用
{
    return spend;
}
