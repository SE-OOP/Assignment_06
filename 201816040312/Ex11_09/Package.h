#ifndef PACKAGE_H
#define PACKAGE_H
#include<string>
 using namespace std;

class Package
{
public:
    Package(const string&,const string&,const string&,const string&,const string&,double,double);//基类Package的构造函数
    virtual double calculatecost();//将calculate设为虚函数
    void setsender(string);//寄件人的set和get函数
    string getsender();

    void setaddressee(string);//收件人的set和get函数
    string getaddressee();

    void setaddress(string);//地址的set和get函数
    string getaddress();

    void setcity(string);//收件人城市的set和get函数
    string getcity();

    void setcode(string);//收件人所在地址的邮寄编码的set和get函数
    string getcode();

    void setweight(double);//包裹重量的set和get函数
    double getweight();

    void setprice(double);//包裹单价的set和get函数
    double getprice();
private:
    string sender;//寄件人
    string addressee;//收件人
    string address;//地址
    string city;//城市
    string code;//邮寄编码
    double weight;//包裹重量
    double price;//包裹单位重量的价格
    double cost;//运费
};
#endif // PACKAGE_H
