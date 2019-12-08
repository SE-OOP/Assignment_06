#include<bits/stdc++.h>
#include "TwoDayPackage.h"
using namespace std;

//constructor function
TwoDayPackage::TwoDayPackage( string s,string r,string a,string c,string p,string pc,double w,double co,double tco )
    :Package( s,r,a,c,p,pc,w,co )//use base-class constructor function to initialize data member
{
    settwodayCost( tco );//initialize two day cost
}//end function

//function to calculate total cost
double TwoDayPackage::calculateCost()
{
    return Package::calculateCost()+twodayCost;
}//end function

//function to set two day cost
void TwoDayPackage::settwodayCost( double t )
{
    if(t>=0)//the cost must be >=0
    {
        twodayCost=t;
    }
    else
        throw invalid_argument("the two day cost must be >=0");
}//end function

//function to get two day cost
double TwoDayPackage::gettwodayCost()
{
    return twodayCost;
}//end function
