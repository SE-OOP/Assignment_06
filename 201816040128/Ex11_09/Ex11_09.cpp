#include<iostream>

#include"Overnight.h"
#include"Package.h"
#include"TwoDayPackage.h"

using namespace std;

int main()
{
	Package package(10,10);
	TwoDayPackage twoDayPackage(10, 10, 10);
	Overnight overnight(10, 10, 10);
	cout << package.calculateCost();
	cout <<"\n"<< twoDayPackage.calculateCost();
	cout <<"\n"<< overnight.calculateCost();
}