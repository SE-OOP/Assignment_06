#include <iostream>
#include "OvernightPackage.h"
using namespace std;

OvernightPackage::OvernightPackage(const string &Sender, const string &Recipient, const string &Address, const string &City, const string &State,
                                   const string &Postcode, double Weight, double Price, double AdditionalCosts)
    : Package(Sender, Recipient, Address, City, State, Postcode, Weight, Price)
{
    if (AdditionalCosts > 0)
        additionalCosts = AdditionalCosts;
    else
        throw invalid_argument("Additional costs must be greater than 0.");
}

double OvernightPackage::calculateCost()
{
    return getWeight() * (getPrice() + additionalCosts);
}