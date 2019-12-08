#include "Package.h"
Package::Package(string reciver, string address,
				 string city, string state,
				 string zipCode,
				 double weight, double cost) : reciver(reciver), address(address),
											   city(city), state(state), zipCode(zipCode)
{
	this->weight = weight > 0 ? weight : 1; // weight must greater than zero
	this->cost = cost > 0 ? cost : 1;	// cost must greater than zero
}

double Package::calculateCost()
{
	return weight * cost;
}

string Package::getReciver()
{
	return this->reciver;
}
void Package::setReciver(string reciver)
{
	this->reciver = reciver;
}

string Package::getAddress()
{
	return this->address;
}
void Package::setAddress(string address)
{
	this->address = address;
}

string Package::getCity()
{
	return this->city;
}
void Package::setCity(string city)
{
	this->city = city;
}

string Package::getState()
{
	return this->state;
}
void Package::setState(string state)
{
	this->state = state;
}

string Package::getZipCode()
{
	return this->zipCode;
}
void Package::setZipCode(string zipCode)
{
	this->zipCode = zipCode;
}

double Package::getWeight()
{
	return this->weight;
}

void Package::setWeight(double weight)
{
	this->weight = weight;
}

double Package::getCost()
{
	return this->cost;
}
void Package::setCost(double cost)
{
	this->cost = cost;
}
