#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include <string>
using namespace std;
class Package
{
public:
    Package(string,string,string,string,string,string,double,double);
    double calculateCost();
    void setOunce(double);
    double getOunce();
    void setFpo(double);
    double getFpo();
private:
    string sName;
    string rName;
    string address;
    string city;
    string state;
    string code;
    double ounce=0;
    double fpo=0;
};


#endif // PACKAGE_H_INCLUDED
