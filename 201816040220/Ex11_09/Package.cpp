#include <iostream>
using namespace std;
#include <string>
#include "Package.h" // include definition of class Package


Package::Package( string name1,string name2,string add,string city1,string sta,int pos,double wig,double oun)
//构造函数
{
  setSend(name1);
  setReceive(name2);
  setAddress(add);
  setCity(city1);
  setState(sta);
  setPostal(pos);
  setWight(wig);
  setOunce(oun);

}

void Package::setSend(string name1)          //setSend
{
    sender=name1;
}

string Package::getSend()               //getSend
{
    return sender;
}

void Package::setReceive(string name2)         //setReceive
{
    recipient=name2;
}

string Package::getReceive()            //getReceive
{
    return recipient;
}

void Package::setAddress(string add)           //setAddress
{
    address=add;
}

string Package::getAddress()                  //getAddress
{
    return address;
}

void Package::setCity(string city1)              //setCity
{
    city=city1;
}

string Package::getCity()                         //getCity
{
    return city;
}

void Package::setState(string sta)         //setState
{
    state=sta;
}

string Package::getState()                //getState
{
    return state;
}

void Package::setPostal(int pos)               //setPostal
{
    postal=pos;
}

int Package::getPostal()                  //getPostal
{
    return postal;
}

void Package::setWight(double wig)           //setWight
{
    if(wig<0)
        wig=0;
    wight=wig;
}

double Package::getWight()                //getWight
{
    return wight;
}

void Package::setOunce(double oun)          //setOunce
{
    if(oun<0)
        oun=0;

     ounce=oun;

}

double Package::getOunce()              //getOunce
{
    return ounce;
}

double Package::calculatecost()       //calculatecost
{
    return wight*ounce;
}

void Package::print()               //打印输出
{

    cout<<"sender: "<<getSend()<<"  "<<"receiver: "<<getReceive()<<"  "
    <<"address: "<<getAddress()<<"  "<<"city: "<<getCity()<<"  "<<"State: "
    <<getState()<<"  "<<"Postal code: "<<getPostal()<<"  "<<endl;

    cout<<"Wight: "<<getWight()<<"  "<<"Ounce: "<<getOunce()<<"  ";
}






