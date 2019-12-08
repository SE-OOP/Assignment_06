//Assigement_11-09
//class Package

#include <iostream>
#include <stdexcept>

#include "Package.h"


using namespace std;

Package:: Package( string Onebody,string Twobody,string Address, string City, string Zhou,  string Number,double Price,double Weight )
{
    setOneName(Onebody);
    setTwoName(Twobody);
    setCellectNumber(Number);
    setAddress(Address);
    setCity(City);
    setZhou(Zhou);
    setPackagePrice(Price);
    setPackageWeight(Weight);
}
    void  Package:: setOneName(string Onebody)
    {
        onebody=Onebody;
    }
    string Package:: getOneName()
    {
        return onebody;
    }

    void   Package::setTwoName(string Twobody)
    {
        twobody=Twobody;
    }
    string Package::getTwoName()
    {
        return twobody;
    }

    void   Package::setAddress(string Address )
    {
        address=Address;
    }
    string Package::getAddress()
    {
        return address;
    }

    void   Package::setCity(string City)
    {
        city=City;
    }
    string Package::getCity()
    {
        return city;
    }

    void   Package::setZhou(string Zhou)
    {
        zhou=Zhou;
    }
    string Package::getZhou()
    {
        return zhou;
    }

    void   Package::setCellectNumber(string Number)
    {
        cellectnumber=Number;
    }
    string Package::getCellectNumber()
    {
        return cellectnumber;
    }

    void   Package::setPackagePrice(double Price)
    {
        if(Price>0.0)
            price=Price;
        else
            throw invalid_argument("Price must be >=0");
    }
    double Package::getPackagePrice()//return Price
    {
        return price;
    }

    void   Package::setPackageWeight(double Weight)
    {
        if(Weight>=0.0)
            weight=Weight;
        else
            throw invalid_argument("weight must be >=0");
    }
    double Package::getPackageWeight()//return Weight
    {
        return weight;
    }

    double Package::calculateCost()//计算需要钱数
    {
        return getPackagePrice()*getPackageWeight();
    }
    void Package::print()
    {
      cout<<"寄件人："<<getOneName()
        <<"\n收件人："<<getTwoName()
        <<"\n地址："<<getAddress()
        <<"\n所在城市："<<getCity()
        <<"\n州："<<getZhou()
        <<"\n邮政编码："<<getCellectNumber()
        <<"\n物品的重量："<<getPackageWeight()
        <<"\n价格"<<getPackagePrice()
        <<"\n所需钱数："<<  calculateCost( );
        cout<<endl;
    }

