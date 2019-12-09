#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;
class Package
{
public:
    Package( const string &, const string &, const string &, const string &,
             const string &, int=0, double=0, double=0 );
    void setJjr( const string& );
    string getJjr()const;
    void setSjr( const string& );
    string getSjr()const;
    void setSite( const string& );
    string getSite()const;
    void setCity( const string& );
    string getCity()const;
    void setState( const string& );
    string getState()const;
    void setYzbm( int );
    int getYzbm()const;
    void setWight( double );
    double getWight()const;
    void setCost( double );
    double getCost()const;
    double calculateCost()const;
    void display()const;
private:
    string jjr;//寄件人
    string sjr;//收件人
    string site;//地址
    string city;//城市
    string state;//州
    int yzbm;//邮政编码
    double wight;//包裹重量
    double cost;//花费
};

#endif // PACKAGE_H_INCLUDED
