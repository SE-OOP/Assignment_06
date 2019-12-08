#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include<bits/stdc++.h>
#include"Package.h"
class Twodaypackage:public package
{
private:
    double twodaycost;
public:
    Twodaypackage(string ,string ,string ,string ,string, double ,double ,double);
    double calculateCost();


};
#endif // TWODATPACKAGE_H
