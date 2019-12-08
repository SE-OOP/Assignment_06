#ifndef PACKAGE_H
#define   PACKAGE_H

#include <string>
using namespace std;
class Package
{
public:
    Package(string,string,string,string,string,string,double=0,double=0);

    void settoName(string );
    string gettoName();
    void setfromName(string );
    string getfromName();

    void setCity(string );
    string getCity();

    void setAddress(string );
    string getAdress();
    void setState(string );
    string getState( );

    void setCode(string );
    string getCode( );

    void setWeight(double );
    double getWeight( );
    void setFee(double );
    double getFee( );

    double calculateCost();

private:
    string toname;
    string fromname;
    string city;
    string address;
    string state;
    string code;
    double weight;
    double fee;
};
#endif
