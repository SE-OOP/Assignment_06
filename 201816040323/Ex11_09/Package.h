#ifndef PACKAGE_H
#define PACKAGE_H
#include <iostream>
using namespace std;

class Package
{
public:
    Package(string,string,string,string,string,string,double=0,double=0);//The constructor of the Package
    double calculateCost();
    void setweight(double);
    double getweight();
    void setprice(double);
    double getprice();
    void setsendp(string);
    string getsendp();
    void setacceptp(string);
    string getacceptp();
    void setaddress(string);
    string getaddress();
    void setstate(string);
    string getstate();
    void setzipcode(string);
    string getzipcode();
private:
    string sendp;
    string acceptp;
    string address;
    string city;
    string state;
    string zipcode;
    double weight;
    double price;
};
#endif // PACKAGE_H
