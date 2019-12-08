#include<bits/stdc++.h>
#include"Package.h"
#include"OvernightPackage.h"
using namespace std;
//构造函数初始化数据成员
OvernightPackage::OvernightPackage(const string &rName,const string &sName,const string &rAdress,const string &sAdress, const string &code,double f,double w,double e)
:Package(rName,sName,rAdress,sAdress,code,f,w)
{
        setExtraFee(e);
}
//筛选extraFee
void OvernightPackage::setExtraFee(double e)
{
    if(e > 0)
        extraFee = e;
}

double OvernightPackage::getExtraFee()
{
    return extraFee;
}
//定义新的计算规则
double OvernightPackage::calculateCost()
{
    return this->getWeight()*(this->getFee()+extraFee);
}
