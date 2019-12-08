//Assigement_11-09
//main()

#include <iostream>
#include <string>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

using namespace std;

int main()
{
    Package package("xiaoming","xiaohong","lianhuajie","zhengzhou","henan","1234567890",10.0,8.0);
    OvernightPackage over("xiaoqiang","xiaohua","Lian","zheng","he","12345",12.0,8.0,4);
    TwoDayPackage two("zheizhu","ciwei","liNa","zheng","he","243566",11,8,7);
    package.print();
    over.print();
    two.print();
    return 0;

}
