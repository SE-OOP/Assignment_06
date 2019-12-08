#include <iostream>
#include <string>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
using namespace std;

int main()
{
    Package a("Bob", "Jack", "Haut", "Zhengzhou", "Henan", "450001", 20.0, 2.0);             //20盅司，每盅司邮费2块钱
    TwoDayPackage b("Bob", "Jack", "Haut", "Zhengzhou", "Henan", "450001", 20.0, 2.0, 10.0); //多收10块钱平寄费
    OvernightPackage c("Bob", "Jack", "Haut", "Zhengzhou", "Henan", "450001", 20, 2.0, 0.6); //每盅司多收6毛钱
    cout << a.calculateCost() << endl;
    cout << b.calculateCost() << endl;
    cout << c.calculateCost() << endl;
}