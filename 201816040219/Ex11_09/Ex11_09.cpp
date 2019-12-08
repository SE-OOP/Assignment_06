#include <iostream>
#include <iomanip>
using namespace std;

#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

int main()
{

   TwoDayPackage package1( "Lom","Ji","zhongyuanqu","zhnegzhou","China",47777,100,2,20);
   package1.print();
   cout<<endl;

   OvernightPackage package2( "Susan","Bjjg","zuiyi","guizhou","China",75777,44,2,0.8);
   package2.print();

  return 0;
}


