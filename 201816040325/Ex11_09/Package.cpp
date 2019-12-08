#include "Package.h"
#include <iostream>
using namespace std;
Package::Package(const  string s,const  string r,const string sa,const string ra,
                const  string sc,const string rc, const string ss, const string rs,
                 const string sp,const string rp,const double w,const double o)
:sender(s),recipient(r),senderAddress(sa),recipientAddress(ra),senderCity(sc),recipientCity(rc),
senderState(ss),recipientState(rs),senderPostcode(sp),recipientPostcode(rp)
  {
        if(w>0)
        {//如果总重量大于0，则初始化weight，否则报错
            weight=w;
        }
        else
        {
            throw invalid_argument("Package's weight should be positive.");
        }

        if(o>0)
        {//如果盎司大于0，则初始化ounce，否则报错
            ounce=o;
        }
        else
        {
            throw invalid_argument("Package's ounce should be positive.");
        }

    }

double Package::calculateCost()
{
    return weight*ounce;//计算总价钱
}

