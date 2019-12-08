#ifndef Package_H
#define Package_H
#include <string>
using namespace std ;
class Package
{
public:
    Package (const string &, const string &,const string &, const string &, const string &,const string &,double=0.0 ,double=0.0 ) ;//构造函数
    void setWeight (double ) ;//set函数
    void setRate (double) ;//set函数
    double getweight () ;//get函数
    double getrate () ;//get函数
    string getrname () ;//get函数
    string getsname() ;//get函数
    string getadd () ;//get函数
    string getci () ;//get函数
    string getsta () ;//get函数
    string getpos () ;//get函数
    const double calculate_Cost () ;//计算
private:
    string sender_name ;
    string Recipient_name ;
    string address ;
    string city ;
    string state ;
    string Postal_Code ;
    double weight ;
    double rate  ;
};
#endif // Package_H
