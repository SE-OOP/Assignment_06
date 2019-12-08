#include <iostream>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
using namespace std;

int main()
{
    Package package("wang","Shanghai Univer","shanghai","china","200444",10,12);
    TwoDayPackage twoDayPackage("wang","Shanghai Univer","shanghai","china","200444",10,12,15);
    OvernightPackage overnightPackage("wang","Shanghai Univer","shanghai","china","200444",10,12,2);
    package.display();
    cout<<"需要支付的费用为："<<package.calculateCost()<<endl;
    cout<<endl;
    twoDayPackage.display();
    cout<<endl;
    overnightPackage.display();
    return 0;
}
