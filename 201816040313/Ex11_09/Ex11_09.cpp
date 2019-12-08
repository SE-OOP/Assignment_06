#include <iostream>
#include <stdexcept>
using namespace std;
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

int main()
{
    Package p1("Bob","Lewis","Pawl","Smith","no4410","no5520","London","NewYork","Texas","Indiana","333-33-3333","111-11-1111",50,1.2);
    p1.printMessage();
    cout<<"cost: "<<p1.calculateCost()<<endl;
    cout<<endl;


    TwoDayPackage p2("Bob","Lewis","Pawl","Smith","no4410","no5520","London","NewYork","Texas","Indiana","333-33-3333","111-11-1111",50,1.2,10);
    p2.printMessage();
    cout<<"cost: "<<p2.calculateCost()<<endl;
    cout<<endl;


    OvernightPackage p3("Bob","Lewis","Pawl","Smith","no4410","no5520","London","NewYork","Texas","Indiana","333-33-3333","111-11-1111",50,1.2,0.5);
    p3.printMessage();
    cout<<"cost: "<<p3.calculateCost()<<endl;
    cout<<endl;
}
