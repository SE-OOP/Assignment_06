#include <iostream>
#include <string>
using namespace std;

#include "Package.h"
#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(string name1,string name2,string add,string city1,string sta,int pos,double wig,double oun,double addit)
    :Package(name1,name2,add,city1,sta,pos,wig,oun)
    //构造函数
{
  setAdditional(addit);
}

void TwoDayPackage::setAdditional(double addit)  //setAdditional
{
    additional=addit;

}

double TwoDayPackage::getAdditional()            //getAdditional
{
    return additional;
}

double TwoDayPackage::calculatecost()        //计算
{
    return getAdditional()+Package::calculatecost();   //平寄费加上原先总费用
}

void  TwoDayPackage::print()                     //打印输出
{
    Package::print();
    cout<<"flat shipping fee: "<<additional<<"  ";
    cout<<"money: "<<calculatecost()<<endl;
}
