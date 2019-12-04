#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include<string>
using namespace std;
class package
{

public:
    explicit package(string,string,string,string,string,string,double,double);
    void setweight(double);
    void setvalue(double);
    double getweight();
    double getvalue();
    double calcuateCost();
private:
    string sname,gname,scity,gcity,snum,gnum;
    double weight,value;



};
