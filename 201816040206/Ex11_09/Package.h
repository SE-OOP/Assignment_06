#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include <string>
using namespace std;

class Package
{
public:
    Package(const string &, const string &, const string &, const string &,
           const string &, const string &,const string &, const string &,
           const string &, const string &,double, double);
    void setSendName(const string &);
    string getSendName();
    void setName(const string &);
    string getName();
    void setSendAddress(const string &);
    string getSendAddress();
    void setAddress(const string &);
    string getAddress();
    void setSendCity(const string &);
    string getSendCity();
    void setCity(const string &);
    string getCity();
    void setSendState(const string &);
    string getSendState();
    void setState(const string &);
    string getState();
    void setSendNumb(const string &);
    string getSendNumb();
    void setNumb(const string &);
    string getNumb();
    void setWeight(const double &);
    double getWeight();
    void setPrice(const double &);
    double getPrice();
    double caculateCost();
    void print();
private:
    string sender,sendAddress,SendCity,sendContinent,sendCode;
    string Receiver,Address,City,Continent,Code;
    double weight,price;

};
#endif
