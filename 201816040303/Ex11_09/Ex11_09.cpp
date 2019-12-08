#include <iostream>

using namespace std;
#include"OvernightPackage.h"
#include"TowDayPackage.h"

int main()
{
    TowDayPackage tow("Liu","Zhang","California","Los Angeles",911911,10,12,5);
    OvernightPackage ove("Song","Shi","Illinois","Chicago",888888,7,14,7);
    cout << "TowDayPackage:" <<endl;
    tow.point();

    cout << "平寄费: "<<tow.getFaltFee()<<endl<<"calculateCost: " << tow.calculateCost() <<endl;
    cout << "\nOvernightPackage: " <<endl;
    ove.point();
    cout <<"额外费用: "<< ove.getEFee()<<endl<<"calculateCost: " << ove.calculateCost() <<endl;
    return 0;
}
