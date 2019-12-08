#include <iostream>
#include <iomanip>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
using namespace std;

int main()
{
    Package package("Sue","John","ad","henan","zg","123456",2.2,5.1);
    package.print();
    TwoDayPackage twoDayPackage("Sue","John","ad","henan","zg","123456",2.2,5.1,10);
    twoDayPackage.print();
    OvernightPackage overnightPackage("Sue","John","ad","henan","zg","123456",2.2,5.1,3);
    overnightPackage.print();
}
