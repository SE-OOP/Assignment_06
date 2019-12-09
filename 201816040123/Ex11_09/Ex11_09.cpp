#include"OvernightPackage.h"
#include"TwoDayPackage.h"

int main()
{
    cout<<endl;
    OvernightPackage a("Kirito","UGO","SAO","UW","RATH",123456,5,11,0.5);
    TwoDayPackage b("Kirito","UGO","SAO","UW","RATH",123456,6,11,10.5);
    cout<<setw(6)<<"寄件人"<<setw(10)<<"收件人"<<setw(10)<<"地址"<<setw(10)<<"城市"<<setw(8)
    <<"州"<<setw(10)<<"邮政编码"<<setw(5)<<"重量"<<setw(5)<<"单价"<<setw(5)<<"费用"<<setw(15)<<"方式"<<endl;
    a.display();
    b.display();
    cout<<endl;
}
