#ifndef PACKAGE_H
#define PACKAGE_H


class Package
{
public:
    Package(string ,string,string,string,string,string,string,string,string,string,double = 0.0 ,double = 0.0);
    void setSenderName(string);
    string getSenderName();

    void setSenderCity(string);
    string getSenderCity();

    void setSenderState(string);
    string getSenderState();

    void setSenderAddress(string);
    string getSenderAddress();

    void setSenderZipcode(string);
    string getSenderZipcode();

    void setReciverName(string);
    string getReciverName();

    void setReciverCity(string);
    string getReciverCity();

    void setReciverState(string);
    string getReciverState();

    void setReciverAddress(string);
    string getReciverAddress();

    void setReciverZipcode(string);
    string getReciverZipcode();

    void setWeight(double);
    double getWeight();

    void setPackageweight(double);
    double getPackageweight();

    void setfee(double);
    double getfee();

    double calculateCost();
    void print()const;

private:
    string SenderName;
    string SenderCity;
    string SenderState;
    string SenderAddress;
    string SenderZipcode;
    string ReciverName;
    string ReciverCity;
    string ReciverState;
    string ReciverAddress;
    string ReciverZipcode;
    double weight;
    double fee;

};
#endif
