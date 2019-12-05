#include"OvernightPackage.h"
#include<iostream>

using namespace std;
//OvernightPackage的构造函数
OvernightPackage::OvernightPackage(const string &sen,const string &add1,const string &add2,const string &city1,const string &cod,double wei,double pri,double service1)
:Package(sen,add1,add2,city1,cod,wei,pri)//调运基类的构造函数
{
    setservice(service1);
}
double OvernightPackage::calculatecost()//覆盖calculate函数
{
    return (Package::getprice()+service)*Package::getweight();
}
void OvernightPackage::setservice(double service1)//每单位质量的额外费用的set和get函数
{
    service=service1;
}
double OvernightPackage::getservice()
{
    return service;
}
