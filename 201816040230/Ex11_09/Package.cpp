#include <iostream>
#include<iomanip>
using namespace std;
#include"Package.h"

Package::Package(string Recipient,string Sendername,string Recipientaddress,string Sendaddress,string Recipientcity,string Sendcity,string Recipientstate,string Sendstate,string Recipientzipcode, string Sendzipcode,double Weight,double Pay)
 {
     recipient=Recipient;
     sendername=Sendername;
     recipientaddress=Recipientaddress;
     sendaddress=Sendaddress;
     recipientcity=Recipientcity;
     sendcity=Sendcity;
     recipientstate=Recipientstate;
     sendstate=Sendstate;
     recipientzipcode=Recipientzipcode;
     sendzipcode=Sendzipcode;
     if(Weight>0)
     {
     weight=Weight;
     }
     else
     {
         throw invalid_argument("weight must be greater than zero");
     }
     if(Pay>0)
     {
     pay=Pay;
     }
     else
     {
         throw invalid_argument("pay must be greater than zero");
     }
 }
 double Package::calculateCost()
 {
     return weight*pay;
 }
 void Package::print()
{
    cout<<"寄件人信息:"<<endl<<"姓名:"<<sendername<<endl<<"地址:"<<sendaddress
   <<"   所在城市："<<sendcity<<"   所在州:"<<sendstate
  <<"   邮政编码："<<sendzipcode<<endl<<"重量:"<<weight<<"   每盎司费用:"<<pay<<endl;
    cout<<"收件人信息:"<<endl<<"姓名:"<<recipient<<endl<<"地址:"<<recipientaddress<<"   所在城市:"<<recipientcity
  <<"   所在州:"<<recipientstate<<"   邮政编码:"<<recipientzipcode<<endl;
}
