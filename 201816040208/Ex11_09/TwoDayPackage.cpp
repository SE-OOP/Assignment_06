#include<iostream>
#include"TwoDayPackage.h"
using namespace std;

TwoDayPackage::TwoDayPackage(string sendN, string sendS, string sendCi, string sendCo, string sendA,
 string recipentN, string recipentS, string recipentCi, string recipentCo, string recipentA, double w, double p, double f)
            :Package(sendN, sendS, sendCi, sendCo, sendA, recipentN, recipentS, recipentCi, recipentCo, recipentA, w, p)
            {
                fee = f;
            }

double TwoDayPackage::calculateCost()
{
    return Package::calculateCost() + fee;
}
