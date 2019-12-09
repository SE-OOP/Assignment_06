#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include <cstring>
using namespace std;
class Package
{
public:
    Package(string,string,string,string,string,string,double,double);
    double calculateCost();//calculate the fee;
    void setsender(string);//set sender;
    string getsender();//return sender;
    void setaddressee(string);//set addressee;
    string getaddressee();//return addressee;
    void setaddress(string);//set address;
    string getaddress();//return address;
    void setcity(string);//set city;
    string getcity();//return city;
    void setstate(string);//set state;
    string getstate();//return state;
    void setcode(string);//set code;
    string getcode();//return code;
    void setweight(double);//set weigh;
    double getweight();//return weight;
    void setcost(double);//set cost;
    double getcost();//return cost;
    void print();
private:
    string sender;
    string addressee;
    string address;
    string city;
    string state;
    string code;
    double weight;
    double cost;
};


#endif // PACKAGE_H_INCLUDED
