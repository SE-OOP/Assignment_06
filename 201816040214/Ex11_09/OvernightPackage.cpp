// Member-function definitions for class OvernightPackage.
#include <iostream>
using namespace std;

#include"OvernightPackage.h"// OvernightPackage class definition

// constructor initializes data members
OvernightPackage::OvernightPackage(const string &name, const string &ads, const string &city,
                                  const string &state, const string &code,
                                   double weight, double cost, double more)
:Package(name, ads, city, state, code, weight, cost)
{
    addprice = more;
}

//mend function calculateCost
double OvernightPackage::calculateCost()
{
    //calculate the cost in this type of over night package
    return (addprice+Package::getPerouncecost())*Package::getPackageounce();
}

//print function
void OvernightPackage::print()
{
    Package::print();

    cout << "Add " << addprice << " ounce to the cost of per ounce" <<
    "\nThe gross cost is " << OvernightPackage::calculateCost() << "\n" << endl;
}//end print function
