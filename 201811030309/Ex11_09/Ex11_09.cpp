#include <iostream>
#include <iomanip>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

using namespace std;

int main()
{
    TwoDayPackage twodaypackage("Xiaoming", "Xiaohong", "Pingyu", "ZhongYuanqu", "ZhuMadian", "Zhengzhou",
                                 "Henan", "Henan", "463000", "450000", 20, 0.8, 10);

    cout << "The sender is: " << twodaypackage.getjname()
        << "\nThe sender come from: " << twodaypackage.getjstate() << " " << twodaypackage.getjcity() << " " << twodaypackage.getjplace()
        << "\nThe zip code is: " << twodaypackage.getjpostalcode() << endl;

    cout << "\nThe recipient is: " << twodaypackage.getsname()
        << "\nThe recipient come from: " << twodaypackage.getsstate() << " " << twodaypackage.getscity() << " " << twodaypackage.getsplace()
        << "\nThe zip code is: " << twodaypackage.getspostalcode() << endl;

    cout << "\nThe package's weight is: " << twodaypackage.getweight()
        << "\nThe price rate per ounce for the package is: " << twodaypackage.getprice()
        << "\nThe extra price for Two-day package is: " << twodaypackage.getextraprice() << endl;

    cout << "\nThe calculate Cost is: "<< twodaypackage.calculateCost() << endl;

    OvernightPackage overnightpackage("Xiaoming", "Xiaohong", "Pingyu", "ZhongYuanqu", "ZhuMadian", "Zhengzhou",
                                 "Henan", "Henan", "463000", "450000", 20, 0.8, 0.3);

    cout << "\n\nThe sender is: " << overnightpackage.getjname()
        << "\nThe sender come from: " << overnightpackage.getjstate() << " " << overnightpackage.getjcity() << " " << overnightpackage.getjplace()
        << "\nThe zip code is: " << overnightpackage.getjpostalcode() << endl;

    cout << "\nThe recipient is: " << overnightpackage.getsname()
        << "\nThe recipient come from: " << overnightpackage.getsstate() << " " << overnightpackage.getscity() << " " << overnightpackage.getsplace()
        << "\nThe zip code is: " << overnightpackage.getspostalcode() << endl;

    cout << "\nThe package's weight is: " << overnightpackage.getweight()
        << "\nThe price rate per ounce for the package is: " << overnightpackage.getprice()
        << "\nThe extra price rate per ounce for Overnight package is: " << overnightpackage.getexprice()<< endl;

    cout << "\nThe calculate Cost is: "<< overnightpackage.calculateCost() << endl;
}
