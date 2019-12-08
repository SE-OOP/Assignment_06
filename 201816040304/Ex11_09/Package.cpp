
#include <string>
#include <iostream>
using namespace std;

#include"Package.h"

Package::Package(string a,string b,string c, string d,string e,string f,string g,string h,string i,string j,double k,double l)
{
    SenderName = a;
    SenderAddress = b;
    SenderCity = c;
    SenderProvince = d;
    SenderPostalCode = e;
    AddresseeName = f;
    AddresseeAddress = g;
    AddresseeCity = h;
    AddresseeProvince = i;
    AddresseePostalCode = j;
    setWeight(k);
    setCostPerCup(l);
}


void Package::setWeight(double w)
{
    if ( w >= 0.0 )
       Weight = w;
    else // otherwise, output message and set Weight to 0.0
    {
       cout << "Error: Weight cannot be negative." << endl;
       Weight = 0.0;
    } // end if...else
}

double Package::getWeight()
{
    return Weight;
}
void Package::setCostPerCup(double c)
{
    if ( c >= 0.0 )
       CostPerCup = c;
    else // otherwise, output message and set CostPerCup to 0.0
    {
       cout << "CostPerCup cannot be negative." << endl;
       CostPerCup = 0.0;
    } // end if...else
}
double Package::getCostPerCup()
{
    return CostPerCup;
}
double Package::calculateCost()
{
    return Weight*CostPerCup;
}

void Package::print()
{
    cout << "SenderName: " << SenderName << "  SenderAddress: "<<SenderAddress << endl;
    cout << "SenderCity: " << SenderCity << "  SenderProvince: "<<SenderProvince << endl;
    cout << "SenderPostalCode: " << SenderPostalCode  << endl;
    cout << "AddresseeName: " << SenderName << "  AddresseeAddress: "<<SenderAddress << endl;
    cout << "AddresseeCity: " << SenderCity << "  AddresseeProvince: "<<SenderProvince << endl;
    cout << "AddresseePostalCode: " << SenderPostalCode  <<"  Weight: " << Weight<< endl;
}
