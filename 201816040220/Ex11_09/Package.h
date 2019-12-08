#ifndef PACKAGE_H
#define PACKAGE_H
#include <string>
#include<stdexcept>
using namespace std;
class Package
{
public:
  Package( string ,string ,string ,string ,string ,int,double,double );        //构造Package对象
  void setSend(string );                       //set 姓名，地址，州，国家，邮政编码，重量，盎司
  void setReceive(string );
  void setAddress(string );
  void setCity(string );
  void setState(string );
  void setPostal(int);
  void setWight(double);
  void setOunce(double);

  string getSend();                        //get姓名，地址，州，国家，邮政编码，重量，盎司
  string getReceive();
  string getAddress();
  string getCity();
  string getState();
  int getPostal();
  double getWight();
  double getOunce();

  double calculatecost();                   //计算总价
  void print();                           //打印
private:
   string sender;
   string recipient;
   string address;
   string city;
   string state;
   int postal;
   double wight;
   double ounce;

}; // end class Package

#endif


