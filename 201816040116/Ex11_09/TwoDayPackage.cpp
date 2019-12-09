using namespace std;
#include "Package.h"
#include"TwoDayPackage.h"
#include<string>
#include <iostream>
TwoDayPackage::TwoDayPackage(string Sender,string Recipient,string Address,
                             string City,string State,string Zipcode,double Weight,double Cost)
                             :Package(Sender,Recipient,Address,City,State,Zipcode,Weight,Cost)  //构造函数
{
    setcost(Weight,Cost);
}
double TwoDayPackage::calculateCost(double s)   //计算总邮寄费用
{
    scost=s+weight*cost;
    return scost;
}
void TwoDayPackage::display() //显示有关邮寄信息
{
    cout<<sender<<" "<<recipient<<" "
        <<address<<" "<<city<<" "
        <<state<<" "<<zipcode<<" "<<scost<<"\n";
}
