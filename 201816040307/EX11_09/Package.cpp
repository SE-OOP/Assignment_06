#include "Package.h"

Package::Package(const string &name,const string &address,const string &city,const string &state,
                 const string &zip,double weight, double costper )
{
    this->name = name;
    this->address = address;
    this->city = city;
    this->state = state;
    this->zip = zip;
    this->weight = weight;
    this->costper = costper;
}
double Package::calculateCost()
{
    return weight * costper;
}
