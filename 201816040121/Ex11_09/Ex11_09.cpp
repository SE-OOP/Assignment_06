//Ex11_09:Test.cpp
#include <iostream>
#include <string>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
using namespace std;

int main()
{
	//create three objects
	Package p1("Tim", "ApplePark", "Cupertino", "California", "95014", 3, 8);
	OvernightPackage p2("Tim", "ApplePark", "Cupertino", "California", "95014", 3, 8, 2);
	TwoDayPackage p3("Tim", "ApplePark", "Cupertino", "California", "95014", 3, 8, 4);

	//display fee of three kinds of package
	cout << "Base fee: " << p1.calculateCost() << endl;
	cout << "Overnight fee: " << p2.calculateCost() << endl;
	cout << "Two day package fee: " << p3.calculateCost() << endl;

	return 0;
}
