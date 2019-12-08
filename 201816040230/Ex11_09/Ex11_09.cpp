#include<iostream>
using namespace std;
#include"Package.h"
#include"OvernightPackage.h"
#include"TwoDayPackage.h"
int main()
{
    Package p("林增瑶","王思婕","青青草原","澧县银谷西苑","内江市","常德市","中国四川省","中国湖南省 ","332332","415500",2,9);
    OvernightPackage o(10 ,"林增瑶","王思婕","青青草原","澧县银谷西苑","内江市","常德市","中国四川省","中国湖南省 ","332332","415500",2,9);
    TwoDayPackage t(12 ,"林增瑶","王思婕","青青草原","澧县银谷西苑","内江市","常德市","中国四川省","中国湖南省 ","332332","415500",2,9);
    p.print();
    cout<<"this is package cost:"<<p.calculateCost()<<endl;
    cout<<endl;
    o.print();
    cout<<"this is overnightPackage cost:"<<o.calculateCost()<<endl;
    cout<<endl;
    t.print();
    cout<<"this is twoDayPackage cost:"<<t.calculateCost()<<endl;
    return 0;
}
