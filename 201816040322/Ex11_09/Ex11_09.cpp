//Assignment_06: Ex11_09.cpp
//test program
#include <iostream>
#include <stdexcept>
#include "Package.h" // Package class definition
#include "TwoDayPackage.h" // TwoDayPackage class definition
#include "OvernightPackage.h"// OvernightPackage class definition

using namespace std;

int main()
{
    Package package1( "Smith", "Bob", "NewYork_Albany",
                     "Albany", "NewYork", "00101", 35, .5 );// create Package object
    TwoPackage package2( "Smith", "Bob", "NewYork_Albany", "Albany",
                        "NewYork", "00101", 35, .5, .1 );// create TwoPackage object
    OvernightPackage package3( "Smith", "Bob", "NewYork_Albany", "Albany",
                               "NewYork", "00101", 35, .5, .3 );// create OvernightPackage object

    // display massage
    package1.print();
    cout << "\nThe calculate cost is " << package1.calculateCost()
         << "\n\n" << endl;
    package2.print();
    cout << "\nThe calculate cost is " << package2.calculateCost()
         << "\n\n" << endl;
    package3.print();
    cout << "\nThe calculate cost is " << package3.calculateCost()
         << "\n\n" << endl;
}
