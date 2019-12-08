#include <string>
#include <iostream>
using namespace std;
#include"TwoDayPackage.h"
#include"Package.h"
#include"OvernightPackage.h"


int main()
{
    Package package1 ("Jack","Henan University of Technology","ZhengZhou","Henan","450001","Bruce","广州白云区","广州","广东","520000",7.0,8.0);
    package1.print();
    cout<<"The total cost is: " << package1.calculateCost()<<endl<<endl;

    TwoDayPackage package2 ("Jack","Henan University of Technology","ZhengZhou","Henan","450001","Bruce","广州白云区","广州","广东","520000",7.0,8.0,5.0);
    package2.print();
    cout<<"The total cost is: " << package2.calculateCost()<<endl<<endl;

    OvernightPackage package3 ("Jack","Henan University of Technology","ZhengZhou","Henan","450001","Bruce","广州白云区","广州","广东","520000",7.0,8.0,0.5);
    package3.print();
    cout<<"The total cost is: " << package3.calculateCost()<<endl;
    return 0;
}
