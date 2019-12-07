#include <iostream>
#include "Package.h"

using namespace std;
//define the constructor of Package
Package::Package(const string &sName,const string &rName,const string &add,const string &c,const string &s,const string &Pcode,double w,double f)
{
    senderName = sName;
    receiverName = rName;
    address = add;
    city = c;
    state = s;
    postCode = Pcode;
    setWeight(w);
    setFee(f);
}
void Package::setWeight(double w)  //define the function to set weight
{
    if(w > 0)
        weight = w;
}

double Package::getWeight()  //define the function to get weight
{
    return weight;
}

void Package::setFee(double f)
{
    if(f > 0)
        fee = f;
}

double Package::getFee()
{
    return fee;
}

double Package::calculateCost()  //define the function to calculateCost
{
    return (weight * fee);
}
