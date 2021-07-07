#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED

#include<string>
using namespace std;

#endif // PACKAGE_H_INCLUDED

class package
{
public:
    package(string &,string &,string &,string &,string &,int,double=0.0,double=0.0);

    void setsendername(string &);//寄件人姓名
    string getsendername();

    void setreceivername(string &);//收件人姓名
    string getreceivername();

    void setreceiveradress(string &);// set receiver adress
    string getreceiveradress();

    void setreceivercity(string &);//set city
    string getreceivercity();

    void setreceiverstate(string &);
    string getreceiverstate();

    void setcode(int);
    int getcode();

    void setweight(double);
    double getweight();

    void setprice(double);
    double getprice();

    double calculatecost();
private:
    string sendername;
    string receivername;
    string receiveradress;
    string receivercity;
    string receiverstate;
    int code;
    double price;
    double weight;

};
