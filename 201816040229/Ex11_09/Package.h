#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include <string>
using namespace std;


class Package
{
public:
    Package(string ,string,string,string,string,string,double=0.0,double=0.0);
    void setSender(string);
    string getSender();
    void setReceiver(string);
    string getReceiver();
    void setAddress(string);
    string getAddress();
    void setCity(string);
    string getCity();
    void setState(string);
    string getState();
    void setNumber(string);
    string getNumber();
    void setWeight(double);
    double getWeight();
    void setFee(double);
    double getFee();
    double calculateCost();
    void print();
private:
    string sender;
    string receiver;
    string address;
    string city;
    string state;
    string number;
    double weight;
    double fee;
};
#endif // PACKAGE_H_INCLUDED
