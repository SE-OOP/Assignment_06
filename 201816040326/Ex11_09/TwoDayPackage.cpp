#include <iostream>
#include<string>
#include"Package.h"
#include"TwoDayPackage.h"
using namespace std;

TwoDayPackage::TwoDayPackage(string sname,string rname,string add,string c,string s,string code,double weight,double cost,double fee)
:Package(sname,rname,add,c,s,code,weight,cost)//初始化数据成员
{
    if(fee > 0)
    {
        flatShippingFee = fee;
    }
    else
    {
        flatShippingFee = 0;
    }
}

double TwoDayPackage::calculate_Cost()//标准费用加两日快递平寄服务费计算
{
    return flatShippingFee+getcost()*getweight();
}
