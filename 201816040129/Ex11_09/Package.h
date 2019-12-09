#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED

#include<string>
using namespace std;
class Package
{
public:
    Package(const string &,const string &,const string &,const string &,const string &,const string &,double,double);// constructor initializes balance
    double CalculateCost();//get the fee
private:
    string jiname;//sender
    string shouname;//addressee
    string address;//address
    string city;//the address of city
    string state;//the address of state
    string mima;//the mima of address
    double weight;//the data of weight
    double fee;//the data of fee
};


#endif // PACKAGE_H_INCLUDED
