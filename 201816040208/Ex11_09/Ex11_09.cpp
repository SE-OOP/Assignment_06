#include <iostream>
#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"

using namespace std;

int main()
{
    Package P("wang", "he", "zhengzhou", "2018", "china", "zhen", "bei", "handan", "2018", "china", 5.0, 2.0);
    OvernightPackage O("wang", "he", "zhengzhou", "2018", "china", "zhen", "bei", "handan", "2018", "china", 5.0, 2.0, 1.0);
    TwoDayPackage T("wang", "he", "zhengzhou", "2018", "china", "zhen", "bei", "handan", "2018", "china", 5.0, 2.0, 1.0);

    cout << "The Package's price is " << P.calculateCost() << endl; //输出费用
    cout << "The OvernightPackage's price is " << O.calculateCost() << endl;    //输出费用
    cout << "The TwoDayPackage's price is " << T.calculateCost() << endl;   //输出费用
    return 0;
}
