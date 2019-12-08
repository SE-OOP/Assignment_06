//Assignment-11-09
#ifndef PACKAGE_H
#define PACKAGE_H


#include <iostream>
#include <string>

using namespace std;


class Package
{
public:
    Package( string,string,string , string , string,  string,double=0.0,double=0.0 );//初始化构造函数

    void   setOneName(string );
    string getOneName();

    void   setTwoName(string);
    string getTwoName();

    void   setAddress(string );
    string getAddress();

    void   setCity(string);
    string getCity();

    void   setZhou(string);
    string getZhou();

    void   setCellectNumber(string);
    string getCellectNumber();

    void   setPackagePrice(double );
    double getPackagePrice();//return Price

    void   setPackageWeight(double);
    double getPackageWeight();//return Weight

    double calculateCost();//计算需要钱数

    void print();

private:
    string onebody;//寄件人
    string twobody;//收件人
    string address;
    string city;
    string zhou;
    string cellectnumber;
    double weight;
    double price;
};//结束Package class

#endif
