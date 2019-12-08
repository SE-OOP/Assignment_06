#include<string>
#pragma once

using namespace std;
class Package
{
private:
    string name;
    string city;
    string address;
    string state;
    string zip;
    double weight;
    double costper;
public:
    Package(const string&,const string&,const string&,const string&,const string&,double=0.0,double= 0.0);
    double calculateCost();
};
