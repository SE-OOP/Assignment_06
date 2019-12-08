
#include <iostream>
#include <string>
#include "Package.h"
#include "OvernightPackage.h"


OvernightPackage::OvernightPackage(string name1,string name2,string add,string city1,string sta,int pos,double wig,double oun,double rat)
    :Package(name1,name2,add,city1,sta,pos,wig,oun)
    //构造函数
{
  setRate(rat);
}

void OvernightPackage::setRate(double rat)            //setRate
{
    rate=rat;

}

double OvernightPackage::getRate()                 //getRate
{
    return rate;
}

double OvernightPackage::calculatecost()               //计算
{
    return (getRate()+Package::getOunce())*Package::getWight();     //每盎司多的加到原先的乘以重量
}

void  OvernightPackage::print()                       //打印输出
{
    Package::print();
    cout<<"add money per ounce: "<<rate<<"  ";
    cout<<"money: "<<calculatecost()<<endl;
}



