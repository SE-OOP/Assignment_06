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
    string toname;//收件人
    string fromname;//寄件人
    string city;
    string address;
    string state;//州
    string code;//邮政编码
    double weight;
    double fee;
};
#endif
