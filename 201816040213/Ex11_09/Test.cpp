#include <iostream>
#include "Package.h" // Package class definition
#include "TwoDayPackage.h" // TwoDayPackage class definition
#include "OvernightPackage.h" // OvernightPackage class definition
using namespace std;

int main()
{
    Package a("Jone","Mike","9600 Bellaire Blvd. Suite 101","Houston","Texas","77036",5,2);  // create Package object
    TwoDayPackage b("Stephen","Elena","1 World Way","Los Angeles","California","90045",6,3,5);  // create TwoDayPackage object
    OvernightPackage c("James","Jordan","910 42th Street","Brooklyn","New York","11219",7,4,2);  // create OvernightPackage object

    a.Print(); //display the information of object a
    cout<< "CalculateCost : " <<a.calculateCost()<<"\n\n"; //display cost

    b.Print(); //display the information of object b
    cout<< "CalculateCost : "<<b.calculateCost()<<"\n\n"; //display cost

    c.Print(); //display the information of object c
    cout<< "CalculateCost : "<<c.calculateCost()<<"\n"; //display cost
    return 0;
} // end main
