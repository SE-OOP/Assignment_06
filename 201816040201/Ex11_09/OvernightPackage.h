#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include<bits/stdc++.h>
#include"Package.h"
using namespace std;
class Overnightpackage:public package
{
private:
   double overnightcost;
public:
    Overnightpackage(string ,string ,string ,string ,string,double,double,double );
    double calculateCost();

};
#endif // OVERNIGHTPACKAGE_H
