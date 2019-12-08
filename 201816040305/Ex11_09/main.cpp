#include <iostream>
#include"Package.h"
#include"TwoDayPackage.h"
#include"OvernightPackage.h"
using namespace std;

int main()
{
    TwoDayPackage Package1;
    Package1("zzz" , "45-1-201" , "HeNan" , "China" , 050000 , 10.0 , 2.00 , 0.5);
    cout<<"Messages:"<<endl<<"Name:"<<Package1.getName()<<endl<<"Address:"<<Package1.getAddress()<<endl<<"City:"<<Package1.getCity()<<endl ;
    cout << "state:" <<Package1.getState()<<endl << "ZipCode:" <<Package1.getZipCode() <<endl <<"Cost" <<Package1.CalculateCost() <<endl;
    OvernightPackage Package2 ;
    Package2("xxx" , "45-1-201" , "HeNan" , "China" , 050000 , 10.0 , 2.00 , 1.0);
    cout<<"Messages:"<<endl<<"Name:"<<Package2.getName()<<endl<<"Address:"<<Package2.getAddress()<<endl<<"City:"<<Package2.getCity()<<endl ;
    cout << "state:" <<Package2.getState()<<endl << "ZipCode:" <<Package2.getZipCode() <<endl <<"Cost" <<Package2.CalculateCost() <<endl;
}
