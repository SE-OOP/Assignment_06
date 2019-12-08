#include<iostream>
#include<iomanip>
#include"Package.h"//class 
#include"TwoDayPackage.h"//class
#include"OvernightPackage.h"//class
using namespace std;
int main()
{
    cout <<fixed<<setprecision(2);
    Package a("钟红","刘雨萌","长江路","南阳","亚洲","1000",30.00,14.00);
//objects
   TwoDayPackage b("刘雨萌","张贞","财富港","信阳","亚洲","2000",10.00,10.00,5.20);
    OvernightPackage c("闫冬雪","乔义刚","成都","四川","亚洲","3000",5.00,5.00,12.00);
    cout<<"Package information is the following:\n"
    <<"\nthe send name is :"<<a.getSend()
    <<"\nthe received name is :"<<a.getReceived()
    <<"\nthe address is :"<<a.getHome()
    <<"\nthe city is :"<<a.getCity()
    <<"\nthe state is :"<<a.getState()
    <<"\nthe coding is :"<<a.getMember()
    <<"\nthe weights is :"<<a.getWeight()
    <<"\nthe fees is :"<<a.getFee()<<endl;
    cout<<"the payment is :"<<a.calculateCost();
    cout<<"\n\n";
    b.print();//print message
    c.print();//print message
}



