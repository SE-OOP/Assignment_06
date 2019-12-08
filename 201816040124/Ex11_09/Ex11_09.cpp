#include<iostream>
using namespace std;
#include"OvernightPackage.h"
#include"Package.h"
#include"TwoDayPackage.h"
#include <iomanip>

int main()
{
    /*分别创建每种Package的对象*/
    Package package1("a","b","c","d","e","f","g","h","i","j",5,4);
    TwoDayPackage package2("aa","bb","cc","dd","ee","ff","gg","hh","ii","jj",3,8,2);
    OvernightPackage package3("aaa","bbb","ccc","ddd","eee","fff","ggg","hhh","iii","jjj",2,4,6);
    cout << fixed << setprecision( 2 );//输出两位小数
    /*分别测试每种Package的calculateCost成员函数*/
    cout<<package1.calculateCost()<<endl;
    cout<<package2.calculateCost()<<endl;
    cout<<package3.calculateCost()<<endl;

    return 0;
}//主函数结束
