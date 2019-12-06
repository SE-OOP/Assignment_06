#include<iostream>
#include "Package.h"
using namespace std;

Package::Package(string sendN, string sendS, string sendCi, string sendCo, string sendA,
 string recipentN, string recipentS, string recipentCi, string recipentCo, string recipentA, double w, double p)
        {
            sendName = sendN; sendState = sendS; sendCity = sendCi; sendCode = sendCo; sendAddress = sendA;
            recipentName = recipentN; recipentState = recipentS; recipentCity = recipentCi; recipentCode = recipentCo;
            recipentAddress = sendA; weight = w; price =p;
        }

double Package::calculateCost()
{
    return price*weight;
}

double Package::getPrice()
{
    return price;
}

void Package::setPrice(double p)
{
    price = p;
}
