#include <iostream>
#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"

using namespace std;

int main()
{
    Package package1("Bob","Lili","ZheJiang","aaaa","11111","33333",20,3);   //create a Package object
    TwoDayPackage package2("Liming","Zhangsan","HeNan","bbbb","22222","4444",20,3,4.5); //create a TwoDayPackage object
    OvernightPackage package3("MingMing","LiangLiang","JiangXi","cccc","55555","6666",20,3,6.2); //create a OvernightPackage object
    cout << package1.calculateCost() << "\n";
    cout << package2.calculateCost() << "\n" ;
    cout << package3.calculateCost() << "\n" ;
    return 0;

}
