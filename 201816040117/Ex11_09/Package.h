#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include<string>
using namespace std;
class Package
{
public:
    Package(string ,string ,string ,string ,string ,string ,double ,double );//constructor
    double calculateCost();//return calculate cost
    string getSender();//return sender
    string getRecipient();//return recipient
    string getAddress();//return address
    string getCity();//return city
    string getProvince();//province
    string getCode();//return code
    double getOunce();//return ounce
    double getCost();//return cost per ounce
private:
    string sender;
    string recipient;
    string address;
    string city;
    string province;
    string code;
    double ounce;
    double cost;
};


#endif // PACKAGE_H_INCLUDED
