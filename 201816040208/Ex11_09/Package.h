#ifndef PACKAGE_H
#define PACKAGE_H

#include<string>
using namespace std;

class Package
{
public:
    Package( string, string, string, string, string,
            string, string, string, string, string, double, double);
    double calculateCost();
    void setPrice(double ); //设定价格
    double getPrice();  //返回价格

private:
    string sendName, sendAddress, sendCity, sendCode, sendState;
    string recipentName, recipentAddress, recipentCity, recipentCode, recipentState;
    double weight;
    double price;
};
#endif // PACKAGE_H
