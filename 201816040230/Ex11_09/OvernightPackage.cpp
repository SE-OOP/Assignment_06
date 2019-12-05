#include<iostream>
using namespace std;
#include"Package.h"
#include"OvernightPackage.h"
 OvernightPackage::OvernightPackage(double Extracost,string Recipient,string Sendername,string Recipientaddress,
string Sendaddress,string Recipientcity,string Sendcity,string Recipientstate,string Sendstate,string Recipientzipcode,
string Sendzipcode,double Weight,double Pay)
 :Package(Recipient,Sendername,Recipientaddress,Sendaddress,Recipientcity,Sendcity,Recipientstate,Sendstate,Recipientzipcode,Sendzipcode,Weight,Pay)
 {
     extracost=Extracost;
 }
double OvernightPackage::calculateCost()
{
    return (pay+extracost)*weight;
}
void OvernightPackage::print()
{
    Package::print();
    cout<<"ewaifeiyong:"<<extracost<<endl;
}
