#include <iostream>
#include<string>
#include"Package.h"
#include"TwoDayPackage.h"
#include"OvernightPackage.h"

using namespace std;

int main()
{
    string jiname;string shouname;string address;string city;string state;string mima;double weight;double fee;
    double twodayfe;
    double overnightfe;
    cout<<"请输入寄件人姓名："<<" ";
    cin>>jiname;//input the name of Sender
    cout<<"请输入收件人姓名: "<<" ";
    cin>>shouname;//input the name of addressee
    cout<<"请输入地址："<<" ";
    cin>>address;//input the address
    cout<<"请输入所在城市: "<<" ";
    cin>>city;//input the city
    cout<<"请输入所在州："<<" ";
    cin>>state;//input the state
    cout<<"请输入所在地邮政编码："<<" ";
    cin>>mima;//input the mima
    cout<<"请输入所存包裹的重量: "<<" ";
    cin>>weight;//input the weight
    cout<<"请输入每盎司费用: "<<" ";
    cin>>fee;//input the fee
    Package package(jiname,shouname,address,city,state,mima,weight,fee);
    cout<<jiname<<" "<<shouname<<" "<<address<<" "<<city<<" "<<state<<" "<<mima<<" "<<weight<<" "<<fee<<endl;//output the information
    cout<<"运输包裹的费用为："<<" ";
    cout<<package.CalculateCost()<<endl;
    cout<<"请输入两日快递服务的平寄费："<<" ";
    cin>>twodayfe;//input the twodayfe
    TwoDayPackage twodaypackage(jiname,shouname,address,city,state,mima,weight,fee,twodayfe);
    cout<<"运输包裹的费用为："<<" ";
    cout<<twodaypackage.CalculateCost()<<endl;
    cout<<"请输入隔夜快递服务每盎司的额外费用："<<" ";
    cin>>overnightfe;//input the overnightfe
    OvernightPackage overnightpackage(jiname,shouname,address,city,state,mima,weight,fee,overnightfe);
    cout<<"运输包裹的费用为："<<" ";
    cout<<overnightpackage.CalculateCost();
}
