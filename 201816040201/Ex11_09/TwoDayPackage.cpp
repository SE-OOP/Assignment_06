#include<bits/stdc++.h>
#include"TwoDayPackage.h"
using namespace std;
Twodaypackage::Twodaypackage(string one,string two,string three,string four,string five,double f,double s,double mcost)
:package(one,two,three,four,five,f,s),twodaycost(mcost){}
double Twodaypackage::calculateCost()
{
    return twodaycost+package::calculateCost();
}

