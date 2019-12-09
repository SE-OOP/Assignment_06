#ifndef PACKAGE_H
#define PACKAGE_H
#include <string>
using namespace std;
class Package
{
public:
    Package(string,string,string,string,string,string,double,double);
    void setWeight(double);
    double getWeight();
    void setFee(double);
    double getFee();
    double calculateCost();
private:
    string sender;
    string consigneeName;
    string consigneeAddress;
    string consigneeCity;
    string consgineeCanton;
    string postalcode;
    double weight;
    double fee;
};
#endif
