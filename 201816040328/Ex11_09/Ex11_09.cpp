#include <iostream>
#include<string.h>
#include"Package.h"
#include"TowDayPackage.h"
#include"OvernightPackage.h"
using namespace std;

int main()
{
    Package a("Jone","Henan University of Technology","Yew York","Justin","333",
              "Sue","Harvard University","bosidun","Massachusetts","444",2.5,1.0);
    TowDayPackage b("Bob","Henan University of Technology","Yew York","Justin","333",
              "Sue","Harvard University","bosidun","Massachusetts","444",2.5,1.0,5.0);
    OvernightPackage c("Sam","Henan University of Technology","Yew York","Justin","333",
              "Sue","Harvard University","bosidun","Massachusetts","444",2.5,1.0,1.0);
    cout<<"The cost of Jone is:"<<a.calculateCost();
     cout<<"\nThe cost of Bob is:"<<b.calculateCost();
      cout<<"\nThe cost of Sam is:"<<c.calculateCost();

    return 0;
}
