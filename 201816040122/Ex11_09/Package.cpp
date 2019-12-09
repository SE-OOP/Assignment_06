#include <iostream>
#include <string>
#include "Package.h"
using namespace std;

Package::Package(const string &a,const string &b,const string &c,const string &d ,const string &e,double f,double g)
{
    setRName(a);
    setAddress(b);
    setCity(c);
    setState(d);
    setZipCode(e);
    setWeight(f);
    setCost(g);
}
    void Package::setRName(const string &a)
    {
        RName=a;
    }
    void Package::setAddress(const string &b)
    {
        address=b;
    }
    void Package::setCity(const string &c)
    {
        city=c;
    }
    void Package::setState(const string &d)
    {
        state=d;
    }
    void Package::setZipCode(const string &e)
    {
        zipCode=e;
    }
    void Package::setWeight(double f)
    {
        if(f>0)
            weight=f;
        else
            weight=0;
    }
    void Package::setCost(double g)
    {
        if(g>0)
            cost=g;
        else
            cost=0;
    }
    string Package::getRName()
    {
        return RName;
    }
    string Package::getAddress()
    {
        return address;
    }
    string Package::getCity()
    {
        return city;
    }
    string Package::getState()
    {
        return state;
    }
    string Package::getZipCode()
    {
        return zipCode;
    }
    double Package::getWeight()
    {
        return weight;
    }
    double Package::getCost()
    {
        return cost;
    }
    double Package::calculateCost()
    {
        return weight*cost;
    }
    void Package::display()
    {
        cout<<"收件人姓名："<<getRName()<<endl;
        cout<<"地址："<<getAddress()<<endl;
        cout<<"所在城市: "<<getCity()<<endl;
        cout<<"所在州："<<getState()<<endl;
        cout<<"邮政编码："<<getZipCode()<<endl;
        cout<<"重量："<<getWeight()<<endl;
        cout<<"每盎司费用："<<getCost()<<endl;
    }
