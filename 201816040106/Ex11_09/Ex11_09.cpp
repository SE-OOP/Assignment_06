#include"Package.h"
#include"OvernightPackage.h"
#include"TwoDayPackage.h"
#include<iostream>
using namespace std;
int main()
{
    Package p("Jerry","Smith","No.100 Golden Gate Bridge","SanFrancisco","California","94101",100,2);
    cout<<p.calculateCost()<<endl;
    OvernightPackage p1("Jerry","Smith","No.100 Golden Gate Bridge","SanFrancisco","California","94101",100,2,0.5);
    cout<<p1.calculateCost()<<endl;
    TwoDayPackage p2("Jerry","Smith","No.100 Golden Gate Bridge","SanFrancisco","California","94101",100,2,10);
    cout<<p2.calculateCost()<<endl;
    return 0;
}
