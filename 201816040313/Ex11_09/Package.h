#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include <string>

class Package
{
public:
    Package(const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,
            const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,double,double);//constructor function
    void setPackageWeight(double);//设置包裹重量
    double getPackageWeight()const;//获取包裹重量
    void setPerUnitCost(double);//设置每单位费用
    double getPerUnitCost()const;//获取每单位费用
    void setsenderFirstName(const std::string &);//设置寄件人名字
    std::string getsenderFirstName()const;//获取寄件人名字
    void setsenderLastName(const std::string &);//设置寄件人姓氏
    std::string getsenderLastName()const;//获取寄件人姓氏
    void setaddresseeFirstName(const std::string &);//设置收件人名字
    std::string getaddresseeFirstName()const;//获取收件人名字
    void setaddresseeLastName(const std::string &);//设置收件人姓氏
    std::string getaddresseeLastName()const;//获取收件人姓氏
    void setsenderAddress(const std::string &);//设置寄件人地址
    std::string getsenderAddress()const;//获取寄件人地址
    void setaddresseeAddress(const std::string &);//设置收件人地址
    std::string getaddresseeAddress()const;//获取收件人地址
    void setsenderCity(const std::string &);//设置寄件人城市
    std::string getsenderCity()const;//获取寄件人城市
    void setaddresseeCity(const std::string &);//设置收件人城市
    std::string getaddresseeCity()const;//获取收件人城市
    void setsenderState(const std::string &);//设置寄件人所在州
    std::string getsenderState()const;//获取寄件人所在州
     void setaddresseeState(const std::string &);//设置收件人所在州
    std::string getaddresseeState()const;//获取收件人所在州
     void setsenderPostalCode(const std::string &);//设置寄件人邮政编码
    std::string getsenderPostalCode()const;//获取寄件人邮政编码
    void setaddresseePostalCode(const std::string &);//设置收件人邮政编码
    std::string getaddresseePostalCode()const;//获取收件人邮政编码
    double calculateCost();//计算运输费用
    void printMessage()const;//打印信息
private:

        std::string senderFirstName;//sender name
        std::string senderLastName;//sender surname
        std::string addresseeFirstName;//addressee name
        std::string addresseeLastName;//addressee surname
        std::string senderAddress;//sender address
        std::string addresseeAddress;//addressee address
        std::string senderCity;//city of sender
        std::string addresseeCity;//city of addressee
        std::string senderState;//state of sender
        std::string addresseeState;//state of addressee
        std::string senderPostalCode;//sender postal code
        std::string addresseePostalCode;//addressee postal code
        double packageWeight;
        double perUnitCost;
};


#endif // PACKAGE_H_INCLUDED
