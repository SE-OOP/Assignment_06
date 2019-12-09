#include <iostream>
#include <iomanip>
#include"Package.h"
#include"TwoDayPackage.h"
#include"OvernightPackage.h"
#include<string>
using namespace std;
int main()
{
    double s,n;
                            //定义三个三种类的对象
    Package pack("Thj","Zhy","BeiJing","Beijing","China","100000",10,5);
    pack.display(); //输出基础费用
    TwoDayPackage twodaypack("Thj","Sxm","ShangQiu","ShangQiu","China","476000",10,5);
    cout<<"请输入overnightpack额外平邮费\n";
    cin>>s;
    twodaypack.calculateCost(s);
    twodaypack.display();   //输出两日包裹费用
    OvernightPackage overnightpack("Thj","Hsg","XuChang","XuChang","China","461000",10,5);
    cout<<"请输入twodaypack每盎司额外费用\n";
    cin>>n;
    overnightpack.calculateCost(n);
    overnightpack.display();    //输出隔夜包裹费用
    return 0;
}
