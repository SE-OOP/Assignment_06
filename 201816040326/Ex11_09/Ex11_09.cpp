#include <iostream>
#include<string>
#include"Package.h"
#include"TwoDayPackage.h"
#include"OvernightPackage.h"
using namespace std;

int main()
{
    Package p1("Amy","Tom","xstreet yroad No.1234","Los Angeles","California","110031",10,0.3);
    TwoDayPackage p2("Amy","Tom","xstreet yroad No.1234","Los Angeles","California","110031",10,0.3,2);
    OvernightPackage p3("Amy","Tom","xstreet yroad No.1234","Los Angeles","California","110031",10,0.3,0.2);
    cout<<"Package's cost:"<<p1.calculate_Cost()<<endl<<endl;
    cout<<"TwoDayPackage's cost:"<<p2.calculate_Cost()<<endl<<endl;
    cout<<"OvernightPackage's cost:"<<p3.calculate_Cost()<<endl;
    return 0;
}
