#include <iostream>

using namespace std;

class Package{
public:
    Package(char , char , char , char , int , double , double ) ;
    void setAdress(char);
    char getAddress();
    void setName(char);
    char getName();
    void setCity(char);
    char getCity();
    void setState(char);
    char getState();
    void setZipCode(int);
    int getZipCode();
    void setHeavy(double);
    double getHeavy();
    void setFee(double);
    double getFee();
    double CalculateCost();
private:
    double Heavy , Fee ;
    char Name , Address , City , State ;
    int Zipcode ;
};
