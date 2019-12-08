#include <iostream>
#include "Package.cpp"
#include "TwoDayPackage.cpp"
#include "OvernightPackage.cpp"
using namespace std;

int main()
{
	Package package1("Mike","Jane","Hollywood","L.A.","California","90001",1.0,1.0);
	TwoDayPackage package2("Mike","Jane","Hollywood","L.A.","California","90001",1.0,1.0,2.0);
	OvernightPackage package3("Mike","Jane","Hollywood","L.A.","California","90001",1.0,1.0,3.0);
	
	package1.print();
	package2.print();
	package3.print();

}
