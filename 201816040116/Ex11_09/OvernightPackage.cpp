using namespace std;
#include"Package.h"
#include"OvernightPackage.h"
#include<string>
#include <iostream>
OvernightPackage::OvernightPackage(string Sender,string Recipient,string Address,
                             string City,string State,string Zipcode,double Weight,double Cost)
                             :Package(Sender,Recipient,Address,City,State,Zipcode,Weight,Cost)  //构造函数
{
    setcost(Weight,Cost);
}
double OvernightPackage::calculateCost(double n)    //计算总邮寄费用
{
    ncost=weight*(cost+n);
    return ncost;
}
void OvernightPackage::display() //显示有关邮寄信息
{
    cout<<sender<<" "<<recipient<<" "
        <<address<<" "<<city<<" "
        <<state<<" "<<zipcode<<" "<<ncost<<"\n";
}
