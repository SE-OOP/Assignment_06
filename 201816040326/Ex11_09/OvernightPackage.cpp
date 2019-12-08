#include <iostream>
#include<string>
#include"Package.h"
#include"TwoDayPackage.h"
#include"OvernightPackage.h"
using namespace std;

OvernightPackage::OvernightPackage(string sname,string rname,string add,string c,string s,string code,double weight,double cost,double ofee)
:Package(sname,rname,add,c,s,code,weight,cost)//初始化数据成员
{
    if(ofee > 0)
    {
        OvernightFee = ofee;
    }
    else
    {
        OvernightFee = 0;
    }
}

double OvernightPackage::calculate_Cost()//将隔夜额外服务费加入标准费用中计算新费用
{
    return getweight()*( getcost() + OvernightFee );
}
