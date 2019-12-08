#ifndef PACKAGE_H
#define PACKAGE_H

#include<string>
#include<iostream>

class Package
{
public:
    Package(const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,double=0.0,double=0.0);
    void setWeight(double);
    double getWeight()const;
    void setMoney(double);
    double getMoney()const;
    double calculateCost();
    std::string getSender()const;
    std::string getRecipient()const;
    std::string getAddress()const;
    std::string getCity()const;
    std::string getState()const;
    std::string getNumber()const;



protected:
    std::string sender;//发件人
    std::string recipient;//收件人
    std::string address;//地址
    std::string city;//所在城市
    std::string state;//州
    std::string number;//邮政编码
    double weight;
    double money;
    double fee;
    //double calculatecost;
} ;

#endif
