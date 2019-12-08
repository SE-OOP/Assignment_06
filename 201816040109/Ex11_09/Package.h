#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>
#include <iostream>
using namespace std;

class Package
{
public:
    Package(string, string, string, string, string, string, double, double);
    void setSender(string);
    string getSender();
    void setRecipient(string);
    string getRecipient();
    void setAddress(string);
    string getAddress();
    void setCity(string);
    string getCity();
    void setState(string);
    string getState();
    void setPostcode(string);
    string getPostcode();
    void setWeight(double);
    double getWeight();
    void setPrice(double);
    double getPrice();
    double calculateCost();

protected:
    string sender;    //寄件人
    string recipient; //收件人
    string address;   //地址
    string city;      //城市
    string state;     //州
    string postcode;  //邮政编码
    double weight;    //重量（盅司）
    double price;     //每盅司费用
};
#endif //PACKAGE_H