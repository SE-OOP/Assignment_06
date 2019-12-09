#include"OvernightPackage.h"
#include"TwoDayPackage.h"

int main()
{
    OvernightPackage thing1("Tom","Jack","LianHuaJie","ZhengZhou","HeNan","450000",6,6.6,0.4);
    TwoDayPackage thing2("Tom","Jack","LianHuaJie","ZhengZhou","HeNan","450000",6,7,10);
    cout << "Package thing1's fee :" << endl;
    cout << thing1.calculateCost() << endl;
    cout << "Package thing2's fee :" << endl;
    cout << thing2.calculateCost() << endl;
    return 0;
}
