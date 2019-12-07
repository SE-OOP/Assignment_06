#include "Package.h"
#include <bits/stdc++.h>
using namespace std;
//构造函数初始化数据成员
Package::Package(const string &rName,const string &sName,const string &rAdress,const string &sAdress, const string &code,double f,double w):recipientName(rName),
senderName(sName),recipientAdress(rAdress),senderAdress(sAdress)
{
    setFee(f);
    setWeight(w);
}
//对weight和fee进行筛选
void Package::setFee(double f)
{
    if(f > 0)
        fee = f;
}
double Package::getFee()
{
    return fee;
}
void Package::setWeight(double w)
{
    if(w > 0)
        weight = w;
}
double Package::getWeight()
{
    return weight;
}
//计算重量和盎司费用乘积
double Package::calculateCost()
{
    return weight*fee;
}
