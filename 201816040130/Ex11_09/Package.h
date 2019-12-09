#ifndef Package_h
#define Package_h
#include <string>

class Package  //define class of Package
{
public:
    Package(const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,const std::string &,double,double);
    double calculateCost();  //declare the function to calculateCost
    void setWeight(double);
    void setFee(double);
    double getWeight();  //declare the function to get weight
    double getFee();
private:
    std::string senderName;  //data member senderName
    std::string receiverName;
    std::string address;
    std::string city;
    std::string state;
    std::string postCode;
    double weight;
    double fee;
};
#endif // Package_h
