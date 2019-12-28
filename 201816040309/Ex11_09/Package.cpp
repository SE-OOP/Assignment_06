#include<iostream>
#include"Package.h"
using namespace std;
Package::Package(string sendname,string receivename,string address,string city,string county,string postalcode,double weight,double fee):SendName(sendname),
ReceiveName(receivename),Address(address),City(city),County(county),PostalCode(postalcode)
{
    if(weight < 0)
    {
        cout<<"the weight is invalid<<"<<endl;
    }
    else
    {
        Weight = weight;
    }
    if(fee <0)
    {
        cout<<"the fee is invalid"<<endl;
    }
    else
    {
        Fee = fee;
    }
}
double Package::CalculateCost(double fee,double weight)
{
    return weight * fee;
}
