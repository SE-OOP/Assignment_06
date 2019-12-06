#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

#include"Package.h"
#include"TwoDayPackage.h"
#include"OvernightPackage.h"

int main()
{
    TwoDayPackage package1("Lily", "China", "yichun", "jiangxi", "331100", 2.1, 3, 4);
    OvernightPackage package2("John", "China", "shanghai", "shanghai", "441515", 4.5, 2, 2);
    //initialize two objects of instructor function
    cout << fixed << setprecision( 2 );

    package1.print();//print the information of package1
    package2.print();//print the information of package2
}
