#include<string>
using namespace std;

#include"Package.h"
Package::Package(double weigh,double pric)
{
	weight = weigh;
	price = pric;
}
double Package::calculateCost()
{
	return weight * price;
}
double Package::getWeight()
{
	return weight;
}
double Package::getPrice()
{
	return price;
}