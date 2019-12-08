
#include"Package.h"
#include"TwoDayPackage.h"
#include"OvernightPackage.h"
#include<iostream>

using namespace std;
int main()
{
    Package package("小明","小红","河南工业大学","郑州","河南","45000",3,3);//construct object of class Package
    TwoDayPackage twoDayPackage("李雷","韩梅梅","郑州大学","郑州","河南","45000",3,3,5);//construct object of class TwoDayPackage
    OvernightPackage overnightPackage("李华","艾瑞","郑州大学","郑州","河南","45000",3,3,5);//construct object of class OvernightPackage
    cout<<"package cost:\n";//prompt
    cout<<package.calculateCost()<<endl;//display cost of package
    cout<<"twoDayPackage cost:\n";//prompt
    cout<<twoDayPackage.calculateCost()<<endl;//display cost of two day package
    cout<<"overnightPackage cost:\n";//prompt
    cout<<overnightPackage.calculateCost();//display cost of over night package



}
