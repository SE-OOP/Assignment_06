#include <iostream>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OverNightPackage.h"
using namespace std;

int main()
{
    tdpack pack1("bob","Alice","New York","Las","110","111",10,15,20);
    onpack pack2("bob","Alice","New York","Las","110","111",10,15,1);
    cout<<"居住在New York的bob"<<"向居住在Las的Alice发送两日的包裹"<<"邮资为"<<pack1.cal()<<endl;
    cout<<"居住在New York的bob"<<"向居住在Las的Alice发送隔夜的包裹"<<"邮资为"<<pack2.cale()<<endl;
    return 0;
}
