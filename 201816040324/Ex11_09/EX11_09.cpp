#include <iostream>
#include "Package.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"
#include <string>
using namespace std;

int main()
{
    OvernightPackage  op ("bob", "mike", "rode1", "beijing", "hebei", "030511", 10, 2, 1) ;//创建对象
    TwoDayPackage tp ("ala", "lily", "rode2", "shanghai", "zhejiang", "030512", 20, 1, 10) ;
    op.print() ;
    tp.print() ;
    return 0;
}//测试函数
