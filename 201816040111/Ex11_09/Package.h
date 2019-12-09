#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include <string>

class Package
{
public:
    Package( const std::string& , const std::string& , const std::string& , const std::string& , const std::string& ,
            const std::string& , const std::string& , const std::string& , const std::string& , const std::string& ,
            double , double );
    void setsenderName( const std::string& );
    std::string getsenderName();

    void setsenderAddress( const std::string& );
    std::string getsenderAddress();

    void setsenderCity( const std::string& );
    std::string getsenderCity();

    void setsenderState( const std::string& );
    std::string getsenderState();

    void setsenderPostalCode( const std::string& );
    std::string getsenderPostalCode();

    void setrecipientName( const std::string& );
    std::string getrecipientName();

    void setrecipientAddress( const std::string& );
    std::string getrecipientAddress();

    void setrecipientCity( const std::string& );
    std::string getrecipientCity();

    void setrecipientState( const std::string& );
    std::string getrecipientState();

    void setrecipientPostalCode( const std::string& );
    std::string getrecipientPostalCode();

    void setpackageWeight( double );
    double getpackageWeight();

    void setcostPerOunce( double );
    double getcostPerOunce();

    double calculateCost() ;

    void print() ;
private:
    std::string senderName;
    std::string senderAddress;
    std::string senderCity;
    std::string senderState;
    std::string senderPostalCode;
    std::string recipientName;
    std::string recipientAddress;
    std::string recipientCity;
    std::string recipientState;
    std::string recipientPostalCode;
    double packageWeight;
    double costPerOunce;
};


#endif // PACKAGE_H_INCLUDED
