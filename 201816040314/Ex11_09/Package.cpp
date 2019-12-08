//Package.cpp
#include "Package.h"
Package::Package(std::string sender02,std::string address02,std::string city02,std::string state02,std::string code02,double weight,double ounceFee)
:sender(sender02),address(address02),city(city02),state(state02),code(code02)//to initialize the data number
{
    setWeight(weight);
    setOunceFee(ounceFee);
}
Package::~Package()//destructor
{

}
double Package::calculateCost()const//to calculate the cost of the mail
{
    return getOunceFee()*getWeight();
}
void Package::setSender(std::string sender)//to set the data number sender
{
    this->sender=sender;
}
void Package::setAddress(std::string address)//to set the data number address
{
    this->address=address;
}
void Package::setCity(std::string city)//to set the data number city
{
    this->city=city;
}
void Package::setState(std::string state)//to set the data number state
{
    this->state=state;
}
void Package::setCode(std::string code)//to set the data number code
{
    this->code=code;
}
void Package::setWeight(double weight)//to set data number weight
{
    if(weight>=0)
        this->weight=weight;
    else
        this->weight=0;
}
void Package::setOunceFee(double ounceFee)//to set data number ounceFee
{
    if(ounceFee>=0)
        this->ounceFee=ounceFee;
    else
        this->ounceFee=0;
}
std::string Package::getSender()const//to return data number sender
{
    return sender;
}
std::string Package::getAddress()const//to return data number address
{
    return address;
}
std::string Package::getCity()const//to return data number city
{
    return city;
}
std::string Package::getState()const//to return data number state
{
    return state;
}
std::string Package::getCode()const//to return data number code
{
    return code;
}
double Package::getWeight()const//to return data number weight
{
    return weight;
}
double Package::getOunceFee()const//to return data number ounceFee
{
    return ounceFee;
}
void Package::print()const//to print the information of the object
{
    std::cout<<"Sender:"<<getSender()<<std::endl<<"address:"<<getAddress()<<std::endl<<"state:"<<getState()<<std::endl
        <<"code:"<<getCode()<<std::endl;
}
