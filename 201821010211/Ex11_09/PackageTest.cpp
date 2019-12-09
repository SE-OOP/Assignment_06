#include <iostream>
using namespace std;

#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"

int main()
{
    Package a("zhao","Ray","Shanghai Conservatory Of Music","Shanghai","Zhuhai region","000000",600.0,5.0);
    TwoDayPackage b("zhao","Ray","Shanghai Conservatory Of Music","Shanghai","Zhuhai region","000000",600.0,5.0,200.0);
    OvernightPackage c("zhao","Ray","Shanghai Conservatory Of Music","Shanghai","Zhuhai region","000000",600.0,5.0,0.2);

    cout<<a.calculateCost()<<endl;
    cout<<"\n"<<b.calculateCost()<<endl;
    cout<<"\n"<<c.calculateCost()<<endl;

}
