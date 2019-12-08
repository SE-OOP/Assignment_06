#include<bits/stdc++.h>
#include "OvernightPackage.h"
using namespace std;

//constructor function
OvernightPackage::OvernightPackage( string s,string r,string a,string c,string p,string pc,double w,double co,double ec )
   :Package( s,r,a,c,p,pc,w,co )//use base-class constructor to initialize data member
{
    setextralCost(ec);//set extral cost
}

//function to calculate total cost
double OvernightPackage::calculateCost()
{
    return (getCost()+extralCost)*getWeight();
}//end function

//function to set extral cost
void OvernightPackage::setextralCost( double t )
{
    if(t>=0)//judge if t >0
    {
        extralCost=t;
    }
    else
        throw invalid_argument("the extral cost must be >=0");
}//end function

//function to get extral cost
double OvernightPackage::getextralCost()
{
    return extralCost;
}//end function
