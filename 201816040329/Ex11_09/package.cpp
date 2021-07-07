#include<iostream>
#include<stdexcept>
#include"package.h"

using namespace std;

package::package(string &sname,string &rname,string &rad,string &rcity,string &rstate,int kc,double kp,double=kw)
{

}

void package::setsendername(string &sname)
{
    sname=sendername;
}

string package::getsendername()
{
    return sendername;
}
void package::setreceivername(string &rname)
{
    rname=receivername;
}

string package::getreceivername()
{
    return receivername;
}
void package::setreceiveradress(string &rad)
{
    rad=receiveradress;
}

string package::getreceiveradress()
{
    return receiveradress;
}
void package::setreceivercity(string &rcity)
{
    rcity=receivercity;
}
string package::getreceivercity()
{
    return receivercity;
}

void package::receiverstate(string &rstate)
{
    rstate=receiverstate;
}

string package::getreceiverstate()
{
    return receiverstate;
}

void package::setcode(int kc)
{
    kc=code;
}

int package::getcode()
{
    return code;
}
void package::setprice(double kp)
{
    if(kp>=0)
        kp=price;
    else
        throw invalid_argument("price shoud >=0");
}
double package::getprice()
{
    return price;
}
void package::setweight(double kw)
{
    if(kw>=0)
        kw=weight;
    else
        throw invalid_argument("weight should >=0");
}
double package::calculatecost()
{
    return getwight()*getprice();
}
