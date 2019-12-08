#include <iostream>
#include <string>
#include "Package.h"
#include "OverNightPackage.h"
#include "TwoDayPackage.h"

int main()
{
    TwoDayPackage package1( "chenzz","zz","zhongyuanqu","zhnegzhou","China",123456,55,10,30);
    cout<<package1.calculateCost(55,10);
    cout<<endl;

   OverNightPackage package2( "Czz","zz","lianhuajie","zhengzhou","China",123456,44,5,0.6);
   cout<< package2.calculateCost(44,5);
    return 0;
}
