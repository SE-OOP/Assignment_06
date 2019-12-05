#ifndef PACKAGE.H
#define PACKAGE.H
#include<iostream>
#include<string>
using namespace std;


class Package
{
public:
    Package(string ,string ,string ,int ,double,double);
    string getname();
    void setname(string );
    string getaddress();
    void setaddress(string );
    string getcity();
    void setcity(string );
    int getpostcode();
    void setpostcode(int );
    void setprice(double );
    double getprice();
    void setweight(double );
    double  calculateCost();

private:
    string name;
    string address;
    string city;
    int postcode;
    double price;
    double weight;
    double  cost;

};

















#endif // PACKAGE
