// Member-function definitions for class TwoDayPackage.
#include <iostream>
using namespace std;

#include "TwoDayPackage.h" // TwoDayPackage class definition

// constructor initializes data members
TwoDayPackage::TwoDayPackage(const string &name, const string &ads, const string &city,
                             const string &state, const string &code,
                             double weight, double cost, double sum)
:Package(name, ads, city, state, code, weight, cost)
{
    serviceFee = sum;
}

//mend function calculateCost
double TwoDayPackage::calculateCost()
{
    //calculate the cost in this type of two day package
    return Package::getPackageounce()*Package::getPerouncecost()+serviceFee;
}

//print function
void TwoDayPackage::print()
{
    Package::print();

    cout << "The serviceFee of package is " << serviceFee <<
    "\nThe gross cost is " << TwoDayPackage::calculateCost() << "\n" << endl;
}//end print function
