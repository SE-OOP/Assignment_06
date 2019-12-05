// Exercise 11.9 Solution:PackageTest.cpp
#include <iostream>
#include <iomanip>
using namespace std;

#include"Package.h"
#include"TwoDayPackage.h"
#include"OvernightPackage.h"
int main()
{
    Package p("Bob","13939 South San Antonio Dr","Norwalk","CA","90650","steven","1319 stevens ave apt A","San Gabriel","CA","91776-4446",20,3.5);
    TwoDayPackage twoDay("Lewis","13939 South San Antonio Dr","Norwalk","CA","90650","Tom","1319 stevens ave apt A","San Gabriel","CA","91776-4446",20,3.5,2.5);
    OvernightPackage overnight("Lucy","13939 South San Antonio Dr","Norwalk","CA","90650","Jerry","1319 stevens ave apt A","San Gabriel","CA","91776-4446",20,3.5,1.5);
    cout<<"Package: "<<endl;;
    p.print();
    cout<<"\ncalculateCost: " << p.calculateCost()<<endl;
    cout<<endl;

    cout<<"TwoDayPackage: "<<endl;
    twoDay.print();
    cout<<"\ncalculateCost: " << twoDay.calculateCost()<<endl;
    cout<<endl;

    cout<<"OvernightPackage: "<<endl;
    overnight.print();
    cout<<"\ncalculateCost: " << overnight.calculateCost()<<endl;
}
