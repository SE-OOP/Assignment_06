#include <iostream>
#include <stdexcept>
#include "Package.h" // Package class definition
#include "TwoDayPackage.h" // TwoDayPackage class definition
#include "OvernightPackage.h"// OvernightPackage class definition

using namespace std;

int main()
{
    Package package1( "a", "b", "c",
                     "d", "e", "00101", 35, .5 );// create Package object
    TwoPackage package2( "f", "g", "h", "i",
                        "j", "00101", 35, .5, .1 );// create TwoPackage object
    OvernightPackage package3( "l", "m", "n", "o",
                               "p", "00101", 35, .5, .3 );// create OvernightPackage object

    // display massage
    package1.print();
    cout << "\nThe calculate cost is " << package1.calculateCost()<< endl;
    package2.print();
    cout << "\nThe calculate cost is " << package2.calculateCost()<<endl;
    package3.print();
    cout << "\nThe calculate cost is " << package3.calculateCost()<<endl;
}
