#ifndef PACKAGE_H
#define PACKAGE_H
#include<bits/stdc++.h>
using namespace std;
class package
{
private:
    string sender,Recipient,Address,City,Postcode;
    double Weight ,charge;
public:
    package(string ,string,string,string,string,double,double);
    double calculateCost();
    void addcharge(double );


};
#endif // PACKAGE_H
