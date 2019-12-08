#include"TwoDayPackage.h"
#include<iostream>

using namespace std;
//TwoDayPackage类的构造函数
TwoDayPackage::TwoDayPackage(const string &sen,const string &add1,const string &add2,const string &city1,const string &cod,double wei,double pri,double charge1)
:Package(sen,add1,add2,city1,cod,wei,pri)//调用基类的构造函数
{
    setcharge(charge1);
}
double TwoDayPackage::calculatecost()//覆盖calculate函数
{
    return Package::calculatecost()+charge;
}
void TwoDayPackage::setcharge(double charge1)//平寄费的set和get函数
{
    charge=charge1;
}
double TwoDayPackage::getcharge()
{
    return charge;
}
