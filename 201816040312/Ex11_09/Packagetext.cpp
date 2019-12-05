#include <iostream>
#include <iomanip>
#include"Package.h"
#include"TwoDayPackage.h"
#include"OvernightPackage.h"

using namespace std;
int main()
{
    //创建Package、TwoDayPackage、OvernightPackage类的对象
    Package pack("Tom","Tony","哈佛大学","Cambridge, Ma","1000",12,14);
    TwoDayPackage two("John","Lily","耶鲁大学","New Haven","1100",14,15,23);
    OvernightPackage over("钢铁侠","蜘蛛侠","哥伦比亚大学","Manhattan","1110",23,41,20);

    //将Package类的信息输出
    cout<<"Package类："<<endl;
    cout<<"\n寄件人："<<pack.getsender()<<"\n收件人："<<pack.getaddressee()<<"\n地址："<<pack.getaddress()<<"\n城市："<<pack.getcity()<<"\n邮寄编码："<<pack.getcode()<<"\n包裹重量："<<pack.getweight()<<"\n单价："<<pack.getprice()<<endl;
    cout<<"运费:"<<pack.calculatecost()<<endl;

     //将TwoDayPackage类的信息输出
    cout<<"\n\nTwoDayPackage类："<<endl;
    cout<<"\n寄件人："<<two.getsender()<<"\n收件人："<<two.getaddressee()<<"\n地址："<<two.getaddress()<<"\n城市："<<two.getcity()<<"\n邮寄编码："<<two.getcode()<<"\n包裹重量："<<two.getweight()<<"\n单价："<<two.getprice()<<endl;
    cout<<"平寄费:"<<two.getcharge()<<endl;
    cout<<"运费:"<<two.calculatecost()<<endl;

     //将OvernightPackage类的信息输出
    cout<<"\n\nOvernightPackage类："<<endl;
    cout<<"\n寄件人："<<over.getsender()<<"\n收件人："<<over.getaddressee()<<"\n地址："<<over.getaddress()<<"\n城市："<<over.getcity()<<"\n邮寄编码："<<over.getcode()<<"\n包裹重量："<<over.getweight()<<"\n单价："<<over.getprice()<<endl;
    cout<<"额外费用:"<<over.getservice()<<endl;
    cout<<"运费:"<<over.calculatecost()<<endl;
}

