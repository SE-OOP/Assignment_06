#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED

#include <iostream>

using namespace std;

class Package
{
public:
    Package(string,string,string,string,string,string,string,string,string,string,double,double);//声明构造函数
    double calculateCost();//声明calculateCost函数
    void setSpend(double);//声明set函数
    double getSpend();//声明get函数
private:
    /*声明数据成员*/
    string jiName;
    string jiArdess;
    string jiCity;
    string jisuozaizhou;
    string jiEmailNum;
    string shouName;
    string shouArdess;
    string shouCity;
    string shousuozaizhou;
    string shouEmailNum;
    double weight;//重量
    double spend;//每盎司费用
};

#endif // PACKAGE_H_INCLUDED
