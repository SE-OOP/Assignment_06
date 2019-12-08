#ifndef PACKAGE_H
#define PACKAGE_H
#include <string>
#include<stdexcept>
using namespace std;
class Package
{
public:
  Package( string ,string ,string ,string ,string ,int,double,double );
  void setWei(double);
  double getWei();

  void setAng(double);
  double getAng();


 void setSum(double);
 double getSum();

  double calculatecost();
  void print();
private:

   string send,receive,di,cheng,zhouu;
   int a;
   double b;
   double c;

}; // end class Package

#endif


