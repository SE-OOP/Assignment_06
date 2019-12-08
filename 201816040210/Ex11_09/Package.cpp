#include <bits/stdc++.h>
#include "Package.h"
using namespace std;
//constructor function
Package::Package( string s,string r,string a,string c,string p,string pc,double w,double co )
    :sendName(s),
    receiveName(r),
    Address(a),
    City(c),
    Province(p),
    postalCode(pc)
{
    if(w>0&&co>0)//weight and cost must be >0
    {
        weight = w;
        cost = co;
    }
    else
        invalid_argument("the weight and cost must be >0");
}//end function

//function to calculate total cost
double Package::calculateCost()
{
    return weight*cost;
}//end function

//function to get weight
double Package::getWeight()
{
    return weight;
}//end function

//function to get cost
double Package::getCost()
{
    return cost;
}//end function

//function to print several data members
void Package::print()
{
    cout<<"sendName:"<<sendName<<"   receiveName:"<<receiveName<<"   Address:"<<Address
        <<"\nCity:"<<City<<"   Province:"<<Province<<"   postalCode:"<<postalCode<<endl;
}//end function
