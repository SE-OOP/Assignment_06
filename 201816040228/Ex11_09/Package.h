//Package class.
#include <string>
#ifndef PACKAGE_H
#define PACKAGE_H
using namespace std;

class Package
{
public:
   Package( string , string, string, string, string, string , double = 0.0, double = 0.0);//定义成员函数并初始化
   void setSenderName( string  );
   string getSenderName() const;

   void setRecipientName( string  );
   string getRecipientName() const;

   void setAddressees( string  );
   string getAddressees() const;

   void setCity( string  );
   string getCity() const;

   void setState( string  );
   string getState() const;

   void setPostalcode( string  );
   string getPostalcode() const;

   void setWeight( double );
   double getWeight() const;

   void setFee( double );
   double getFee() const;

   double calculateCost() const;

private:
   string senderName;//寄件人姓名
   string recipientName;//收件人姓名
   string addressees;//收货地址
   string city;//城市
   string state;//州
   string postalcode;//邮政编码
   double weight;//包裹重量
   double fee;//每盎司费用
}; // end class Package

#endif
