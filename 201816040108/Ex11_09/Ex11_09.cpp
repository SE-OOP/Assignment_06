#include <iostream>
#include <stdexcept>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
#include <string>

using namespace std;

int main()
{
    Package package1("A","B","C","D","123","123",2,3);
    TwoDayPackage package2("F","F","G","H","456","456",4,5,6);
    OvernightPackage package3("I","J","K","L","789","789",7,8,9 );//creat object

    cout<<"the message of package1 :"<<endl;
    cout<<"the from name is : "<<package1.getfromName()<<endl;
    cout<<"the to name is : "<<package1.gettoName()<<endl;
    cout<<"the weight is : "<<package1.getWeight()<<endl;
    cout<<"the fee is : "<<package1.getFee()<<endl;
    cout<<"the sum fee is : "<<package1.calculateCost()<<endl;
    cout<<"\n\n";

    cout<<"the message of package2 :"<<endl;
    cout<<"the from name is : "<<package2.getfromName()<<endl;
    cout<<"the to name is : "<<package2.gettoName()<<endl;
    cout<<"the weight is : "<<package2.getWeight()<<endl;
    cout<<"the fee is : "<<package2.getFee()<<endl;
    cout<<"the second fee is : "<<package2.getSecondfee()<<endl;
    cout<<"the sum fee is : "<<package2.calculateCost()<<endl;
    cout<<"\n\n";

    cout<<"the message of package3 :"<<endl;
    cout<<"the from name is : "<<package3.getfromName()<<endl;
    cout<<"the to name is : "<<package3.gettoName()<<endl;
    cout<<"the weight is : "<<package3.getWeight()<<endl;
    cout<<"the fee is : "<<package3.getFee()<<endl;
    cout<<"the night fee is : "<<package3.getNightfee()<<endl;
    cout<<"the sum fee is : "<<package3.calculateCost()<<endl;


    return 0;
}
