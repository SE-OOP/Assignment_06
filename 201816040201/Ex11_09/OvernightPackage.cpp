#include<bits/stdc++.h>
#include"OvernightPackage.h"
using namespace std;
Overnightpackage::Overnightpackage(string one,string two,string three,string four,string five,double f,double s,double mcost)
:package(one,two,three,four,five,f,s),overnightcost(mcost){}
double Overnightpackage::calculateCost()
{
    addcharge(overnightcost);
    return package::calculateCost();

}
