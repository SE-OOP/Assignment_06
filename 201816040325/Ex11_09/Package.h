#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include<iostream>
using namespace std;



class Package
{
public:
    Package(const string ,const string ,const string , const string , const string ,const string ,
            const string , const string ,const string ,const string , const double , const double );
    double calculateCost();
protected:
    string sender;//寄件人
    string recipient;//收件人
    string senderAddress;//寄件人地址
    string recipientAddress;//收件人地址
    string senderCity;//寄件人所在城市
    string recipientCity;//收件人所在城市
    string senderState;//寄件人所在州
    string recipientState;//收件人所在州
    string senderPostcode;//寄件人邮政编码
    string recipientPostcode;//收件人邮政编码
    double weight;//包裹总重量
    double ounce;//每盎司
};
#endif // PACKAGE_H_INCLUDED
