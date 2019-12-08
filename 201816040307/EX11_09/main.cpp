#include <iostream>

using namespace std;
#include "OvernightPackage.h"
#include "TwoDayPackage.h"

int main()
{
    OvernightPackage onp(1,"Janny","China","Beijing","Beijing","123-123",23, 34);
    TwoDayPackage tdp(2, "Danny","US", "NewYork","NewYork","345-324",43, 45);

    cout<<"OvernightPackage's fee is "<<onp.calculateCost()<<endl;
    cout<<"TwoDayPackage's fee is "<<tdp.calculateCost()<<endl;
}
