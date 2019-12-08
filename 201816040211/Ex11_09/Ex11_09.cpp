#include <iostream>
#include"Package.h"
#include"TwoDayPackage.h"
#include"OvernightPackage.h"

using namespace std;

int main()
{
     string sender;
     string receiver;
     string place;
     string city;
     string state;
     string bianma;
     double weight;
     double fee;
     double average;
     double twofee;
     cout<<"sender: ";
     cin>>sender;
     cout<<"receiver: ";
     cin>>receiver;
     cout<<"place: ";
     cin>>place;
     cout<<"city: ";
     cin>>city;
     cout<<"state: ";
     cin>>state;
     cout<<"bianma: ";
     cin>>bianma;
     cout<<"weight: ";
     cin>>weight;
     cout<<"fee: ";
     cin>>fee;
     cout<<"average: ";
     cin>>average;
     cout<<"twofee: ";
     cin>>twofee;
     Package PACKAGE(sender,receiver,place,city,state,bianma,weight,fee);
     TwoDayPackage TWODAYPACKAGE(sender,receiver,place,city,state,bianma,weight,fee,average);
     OvernightPackage OVERNIGHTPACKAGE(sender,receiver,place,city,state,bianma,weight,fee,twofee);
     cout<<"calculateost: "<<PACKAGE.calculateCost<<endl;
     cout<<"calculateost: "<<TWODAYPACKAGE.calculateCost<<endl;
     cout<<"calculateost: "<<OVERNIGHTPACKAGE.calculateCost<<endl;
     return 0;
}

