#include <iostream>

#include <iomanip>

using namespace std;



#include "Package.h"

#include "TwoDayPackage.h"

#include "OvernightPackage.h"



int main()


{



  Package P("Dy", "school","zhengzhou", "china", "456778", "bei", "handan", "hjf", "china","65787", 5.0, 2.0);

    TwoDayPackage package1( "Dy", "school","zhengzhou", "china", "456778", "ei", "hdan", "hjf", "china","65787", 5.0, 2.0,1.0); // 创建TwoDayPackage对象

   OvernightPackage package2( "y", "shool","zhenzhou", "cina", "45678", "bi", "hadan", "jf", "cina","6577", 5.0, 2.1,1.1); //创建OvernightPackage对象






       P.print();//打印输出
       cout<<P.caculateCost();

   cout<<endl;

       package1.Package::print();
        cout<< package1.caculateCost();

        package2.Package::print();
        cout<< package2.caculateCost();




  return 0;

}
