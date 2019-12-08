#include<string>

#include"Package.h"
#include"Overnight.h"
using namespace std;

Overnight::Overnight(double weigh, double pric, double pj)
	:Package(weigh, pric)
{
	perfee = pj;
}
double Overnight::calculateCost()
{
	return getWeight() * (getPrice() + perfee);
}

