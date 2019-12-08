#include <iostream>
using namespace std;
#include "TwoDayPackage.h"
TwoDayPackage::TwoDayPackage(const string &Sender, const string &Recipient, const string &Address, const string &City, const string &State,
                             const string &Postcode, double Weight, double Price, double FlatMailFee)
    : Package(Sender, Recipient, Address, City, State, Postcode, Weight, Price)
{
    if (FlatMailFee > 0)
        flatMailFee = FlatMailFee;
    else
        throw invalid_argument("Flat mail fee must be greater than 0.");
}

double TwoDayPackage::calculateCost()
{
    return getWeight() * getPrice() + flatMailFee;
}