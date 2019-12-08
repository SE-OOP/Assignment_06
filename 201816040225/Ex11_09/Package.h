//Package.h
#ifndef PACKAGE_H
#define PACKAGE_H
#include <string>

class Package//define 
{
    public:
    Package( const std::string &, const std::string &, const std::string &,const std::string &, const std::string &,const std::string &,
            double=0.0,double=0.0);//constructor

            void setSend(const std::string &);
            std::string getSend()const;//function send receive name

            void setReceived(const std::string &);
            std::string getReceived()const;

            void setHome(const std::string &);
            std::string getHome()const;//get the address

            void setCity(const std::string &);
            std::string getCity()const;

            void setState(const std::string &);
            std::string getState()const;//the address

            void setMember(const std::string &);
            std::string getMember()const;//the code

            void setWeight(double);
            double getWeight()const;//the weights

            void setFee(double);
            double getFee()const;//the fees

            double calculateCost()const;//calculate function
    private://data member
        std::string name1;
        std::string name2;
        std::string address;
        std::string city;
        std::string state;
        std::string code;
        double weight;
        double fee;

};
#endif // PACKAGE_H
