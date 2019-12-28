#include <iostream>
#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"
int main()
{
    Package A("he","pe","haut","zhengzhou","gaoxin","4235",20,5);
    cout<<"the Calculate is"<<A.CalculateCost(10,20)<<endl;
    OvernightPackage B("he","pe","haut","zhengzhou","gaoxin","4235",20,5,10);
    cout<<"the Calculate is"<<B.CalculateCost(10,20)<<endl;
    TwoDayPackage C("he","pe","haut","zhengzhou","gaoxin","4235",20,5,10);
    cout<<"the Calculate is"<<C.CalculateCost(10,20)<<endl;

}
