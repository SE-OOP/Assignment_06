#include <iostream>
#include <iomanip>
using namespace std;

#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

int main()
{

   TwoDayPackage package1( "Bob","Jim","Yellowstone park","Hollywood","California",90001,20,5,10); // 创建TwoDayPackage对象
   OvernightPackage package2( "Black","Whait","Bronx","New York","State of New York",10041,30,5,0.1); //创建OvernightPackage对象

   package1.print();              //打印输出
   cout<<endl;
   package2.print();              //打印输出

  return 0;
}


