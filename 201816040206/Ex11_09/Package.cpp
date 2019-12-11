#include <string>
#include <iostream>
using namespace std;
#include "Package.h"
Package::Package(const string &sendName,const string &sendD,const string &sendCity,const string &sendZ,const string &sendID,
               const string &Name,const string &D,const string &City,const string &Z,const string &ID,
               double Weight,double Fee)
:sender(sendName),sendAddress(sendD),SendCity(sendCity),sendContinent(sendZ),sendCode(sendID),
 Receiver(Name),Address(D),City(City),Continent(Z),Code(ID),
 weight(Weight),price(Fee)
 {

 }
 void Package::setSendName(const string &sendName)
  {
      sender=sendName;
  }
string Package::getSendName()
{
    return sender;
}

void Package::setSendAddress(const string &sendD)
  {
      sendAddress=sendD;
  }
string Package::getSendAddress()
{
    return sendAddress;
}

void Package::setSendCity(const string &sendCity)
  {
      SendCity=sendCity;
  }
string Package::getSendCity()
{
    return SendCity;
}

void Package::setSendState(const string &sendZ)
  {
      sendContinent=sendZ;
  }
string Package::getSendState()
{
    return sendContinent;
}

void Package::setSendNumb(const string &sendID)
  {
     sendCode=sendID;
  }
string Package::getSendNumb()
{
    return sendCode;
}

void Package::setName(const string &Name)
  {
     Receiver=Name;
  }
string Package::getName()
{
    return Receiver;
}

void Package::setAddress(const string &D)
  {
    Address=D;
  }
string Package::getAddress()
{
    return Address;
}

 void Package::setCity(const string &city)
 {
     City=city;
 }
 string Package::getCity()
 {
     return City;
 }

void Package::setState(const string &Z)
{
    Continent=Z;
}
string Package::getState()
{
    return Continent;
}
void Package::setNumb(const string &ID)
{
    Code=ID;
}
string Package::getNumb()
{
    return Code;
}
void Package::setWeight(const double &Weight)
{
    weight=Weight;
}
double Package::getWeight()
{
    return weight;
}

 void Package::setPrice(const double &Fee)
 {
     price=Fee;
 }
double Package::getPrice()
{
    return price;
}

double Package::caculateCost()
{
    return getWeight()*getPrice();
}

void Package::print()
{
     cout<<"寄信人："<<sender<<endl;
     cout<<"收信人:"<<Receiver<<endl;
     cout<<"收信人地址:"<<sendAddress<<"  收信人城市:"<<City<<"  收信人所在洲:"<<Continent<<endl;
     cout<<"收信人邮政编码:"<<sendCode<<endl;
     cout<<'\n'<<endl;
     cout<<"************************************************"<<endl;
     cout<<'\n'<<endl;
     cout<<"计件所需手续费用:"<<endl;
}

