#include <iostream>
#include <string>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

using namespace std;
main()
{
    string a,b,c,d,e,f;
    Package p1(a,b,c,d,e,f,2,2);
    TwoDayPackage p2(a,b,c,d,e,f,2,2,2);
    OvernightPackage p3(a,b,c,d,e,f,2,2,2);

    cout<<p1.calculateCost()<<endl;
    cout<<p2.calculateCost()<<endl;
    cout<<p3.calculateCost()<<endl;



}
