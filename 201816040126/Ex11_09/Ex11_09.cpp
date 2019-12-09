#include <iostream>
#include <iomanip>

#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"

using namespace std;


int main()
{
    OvernightPackage package1( "Zhang San", "Li Si" , "Changan Load" ,
                    "Dazhou", "Sichuan Province", "635200", 20, 8, 2);
                    //set package1 by OvernightPackage

    cout << fixed << setprecision( 2 );

    cout << "The information about the overnight package1 as follows: " << endl//show the information about package1
    << "Send name :" << package1.getSendName()
    << "\nReceive name :" << package1.getReceiveName()
    << "\nThe address :" << package1.getAddress()
    << "\nThe city :" << package1.getCity()
    << "\nThe province :" << package1.getProvince()
    << "\nThe postal code :" << package1.getPostalCode()
    << "\nThe package's quality :" << package1.getQuality()
    << "\nThe package's price for one ounce :" << package1.getPrice();

    cout << "\n\nBecause the package1 is overnight,so we should add additional cost for one ounce." << endl;
    cout << "\nThe additional cost is :" << package1.getAdditionalCost() << endl;//show the additional cost

    cout << "The total price about the overnight package1 is :"
    << package1.calculateCost();//show the overnight package's total cost

    TwoDayPackage package2( "Li Si" ,"Zhang San", "Nanjing Load" ,
                    "Jiefang Bei", "Chongqing Province", "400000-409912", 20, 8, 30);
                    //set package2 by TwoDayPackage

    cout << "\n\nThe information about the overnight package2 as follows: " << endl
    << "Send name :" << package2.getSendName()
    << "\nReceive name :" << package2.getReceiveName()
    << "\nThe address :" << package2.getAddress()
    << "\nThe city :" << package2.getCity()
    << "\nThe province :" << package2.getProvince()
    << "\nThe postal code :" << package2.getPostalCode()
    << "\nThe package's quality :" << package2.getQuality()
    << "\nThe package's price for one ounce :" << package2.getPrice();
    //show the information about package2

    cout << "\n\nBecause the package1 is over two days,so we should add flat charge." << endl;
    cout << "\nThe flat charge is :" << package2.getFlatCharge() << endl;//show the flat charge

    cout << "The total price about the package2 that over 2 days is :"
    << package2.calculateCost();
    //show the over two days package's total cost
}
