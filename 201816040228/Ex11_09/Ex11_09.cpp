#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

int main()
{
    Package m("1 "," 1" ," 1"," 1"," 1"," 1",1.0,2.0);//建立Package类的对象m
    TwoDayPackage n(" 1"," 1"," 1"," 1"," 1"," 1",1.0,2.0,2.0);//建立TwoDayPackage类的对象m
    OvernightPackage a(" 1"," 1"," 1"," 1"," 1"," 1",1.0,2.0,2.0);//建立OvernightPackage类的对象m

    string sssendername;
    cout << " SenderName :  ";
    cin >> sssendername;


    string rrrecipientName;
    cout << " RecipientName :  ";
    cin >> rrrecipientName;

    string aaaddressees;
    cout << " Addressees :  ";
    cin >> aaaddressees;


    string cccity;
    cout << " City :  ";
    cin >> cccity;

    string ssstate;
    cout << " State :  ";
    cin >> ssstate;

    string pppostalcode;
    cout << " Postalcode :  ";
    cin >> pppostalcode;

    double wwweight;
    cout << " Weight :  ";
    cin >> wwweight;

    double fffee;
    cout << " Fee : ";
    cin >> fffee;

    double ppingjifei;
    cout << " Pingjifei : ";
    cin >> ppingjifei;

    double eextrafee;
    cout << " Extrafee : ";
    cin >> eextrafee;

    m.setWeight(wwweight);
    m.setFee(fffee);

    n.setWeight(wwweight);
    n.setFee(fffee);
    n.setPingJiFei(ppingjifei);

    a.setWeight(wwweight);
    a.setFee(fffee);
    a.setExtraFee(eextrafee);


   cout << m.calculateCost() << endl;//计算基类的费用
   cout << n.calculateCost() << endl;//计算增加额外费用后的费用
   cout << a.calculateCost() << endl;//计算增加额外盎司后的费用

}

