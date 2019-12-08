#include <iostream>
#include <iomanip>
using namespace std;

#include "Package.h" // Account class definition
#include "OvernightPackage.h" // SavingsAccount class definition
#include "TwoDayPackage.h" // CheckingAccount class definition

int main()
{
    Package package1("Sue June","New York","New York","14 street","10041NY212",
                     "Kevin Wayne Durant","Washington","D C","12 street","20237",15,1);
    OvernightPackage package2("Bob lewis","Washington","D C","13 street","20237",
                     "Sue June","New York","New York","14 street","10041NY212",15,1,5);
    TwoDayPackage package3("Kevin Wayne Durant","Washington","D C","12 street","20237",
                  "Sue June","New York","New York","14 street","10041NY212",15,1,2);

    package1.print();
    cout<<"The total money is:"<<package1.calculateCost()<<endl;
    package2.print();
    cout<<"The total money is:"<<package2.calculateCost()<<endl;
    package3.print();
    cout<<"The total money is:"<<package3.calculateCost()<<endl;
}
