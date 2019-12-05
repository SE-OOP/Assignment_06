#ifndef PACKAGE_H
#define PACKAGE_H
class Package
{
public:
    Package(string,string,string,string,string,string,string,string,string,string,double,double);
    double calculateCost();
    void print();
private:
    string recipient;//收件人
    string sendername;//寄件人
    string sendaddress;//寄件人地址
    string recipientaddress;//收件人地址
    string sendcity;//寄件人城市
    string recipientcity;//收件人城市
    string sendstate;//寄件人所在省
    string recipientstate;//收件人所在省
   string sendzipcode;//寄件人所在地区邮政编码
   string recipientzipcode;//收件人所在地区邮政编码
 protected:
   double weight;//重量
   double pay;//每盎司费用

};
#endif // PACKAGE_H
