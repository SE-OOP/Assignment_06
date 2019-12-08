  #include <iostream>
using namespace std;
#include "Package.h"
#include<string>
Package::Package(string Sender,string Recipient,string Address,string City,string State,string Zipcode,
                 double Weight,double Cost) //构造函数
{
    sender=Sender;
    recipient=Recipient;
    address=Address;
    city=City;
    state=State;
    zipcode=Zipcode;
    setcost(Weight,Cost);
}
void Package::setcost(double w,double c)    //判断是否合理并重载重量和每盎司费用
{
    if(w<0)
        throw_with_nested("重量错误\n");
    else
        weight=w;
    if(c<0)
        throw_with_nested("每盎司费用错误\n");
    else
        cost=c;
}
double Package::calculateCost()    //计算邮寄费用
{
    return weight*cost;
}
void Package::display() //显示有关邮寄信息
{
    cout<<sender<<" "<<recipient<<" "
        <<address<<" "<<city<<" "
        <<state<<" "<<zipcode<<" "<<calculateCost()<<"\n";
}
