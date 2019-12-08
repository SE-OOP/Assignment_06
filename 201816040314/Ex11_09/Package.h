#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include <iostream>
class Package
{

public:
    Package(std::string ,std::string ,std::string ,std::string ,std::string ,double ,double );//constructor with seven parameter
    ~Package();//destructor
    double calculateCost()const;// the function is to calculate the cost
    void setSender(std::string);
    void setAddress(std::string);
    void setCity(std::string);
    void setState(std::string);
    void setCode(std::string);
    void setWeight(double);
    void setOunceFee(double);
    std::string getSender()const;
    std::string getAddress()const;
    std::string getCity()const;
    std::string getState()const;
    std::string getCode()const;
    double getWeight()const;
    double getOunceFee()const;
    void print()const;
private:
    std::string sender;
    std::string address;
    std::string city;
    std::string state;
    std::string code;
    double weight;
    double ounceFee;
};


#endif // PACKAGE_H_INCLUDED
