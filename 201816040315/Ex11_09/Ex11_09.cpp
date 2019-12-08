//Ex11_09.cpp
//test program
#include <iostream>
#include <string>
#include <iomanip>
#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"
using namespace std;

int main()
{
    Package pack("Tang","Tian","Street100","DengFeng","HeNan","410185",10,10);
    cout<< fixed<<setprecision( 2 );
    cout<<"sender name:"<<pack.getSenderName()
        <<"\naddress name:"<<pack.getAddressName()
        <<"\naddress:"<<pack.getAddress()
        <<"\ncity:"<<pack.getCity()
        <<"\nstate:"<<pack.getState()
        <<"\npostcode:"<<pack.getPostalCode()
        <<"\nweight:"<<pack.getWeight()
        <<"\ncost:"<<pack.calculateCost();
    pack.setPrice(20);
    cout<<endl;
    pack.print();
    cout<<"\ncost"<<pack.calculateCost();
    cout<<endl;
    cout<<endl;

    OverNightPackage pack1("Shao","Ku","Street100","DengFeng","HeNan","410185",200,200,10);
    pack1.print();
    cout<<"\ncost"<<pack1.calculateCost();
    cout<<endl;
    cout<<endl;
    TwoDayPackage pack2("Xu","AA","Street100","DengFeng","HeNan","410185",300,300,30);
    pack2.print();
    cout<<"\ncost"<<pack2.calculateCost();
    return 0;

}
