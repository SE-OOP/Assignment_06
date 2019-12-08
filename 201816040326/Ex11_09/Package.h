#include <iostream>
#include<string>
using namespace std;

class Package
{
public:
    Package(string,string,string,string,string,string,double,double);
    double calculate_Cost();
    double getweight();
    double getcost();
private:
    string sender_name;//寄件人姓名
    string recipient_name;//收件人姓名
    string address;//地址
    string city;//所在城市
    string state;//所在州
    string postalcode;//邮编
    double parcel_weight;//快递重量
    double cost_per_ounce;//每盎司快递所需运费
};


