#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class Package//创立基类名为package
{
    public:
        Package::Package(const string &,const string &,const string &,const string &,const string &,const string &,double = 0.0,double = 0.0);//定义并初始化各种参数
        void setMass(double mass);
        void setPrice(double price);
        double calculateCost();
        double getMass_r();
        double getPrice_r();
        void print();
    private:
        string Sender;
        string Receiver;
        string Address;
        string City;
        string Province;
        string PostCode;
        double Mass;
        double Price;
};

#endif // PACKAGE_H_INCLUDED
