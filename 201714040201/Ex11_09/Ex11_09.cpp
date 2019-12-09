//Ex11_09.cpp
//Test program for Package hierarchy
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"

int main()
{
    //set floating-point output formatting
    cout<<fixed<<setprecision(2);

    //instantiate three objects
    Package package1("RuiyangHong","Wangcan","zhengzhou","xinmi","465200",10,10);
    TwoDayPackage package2("RuiyangHong","Wangcan","zhengzhou","xinmi","465200",10,10,10000);
    OvernightPackage package3("RuiyangHong","Wangcan","zhengzhou","xinmi","465200",10,10,100);

    //get objects information
    package1.print();
    cout<<package1.calculateCost()<<"\n\n";
    package2.print();
    cout<<package2.calculateCost()<<"\n\n";
    package3.print();
    cout<<package3.calculateCost()<<"\n\n";
    return 0;
}//end main
