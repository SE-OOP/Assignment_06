//Package.cpp
// Member-function definitions for class Package.
#include <iostream>
#include <stdexcept>
using namespace std;

#include "Package.h" // include definition of class Package

// Package constructor initializes data member
Package::Package( string sendername, string recipientname,
                 string aaddressees, string ccity,
                 string sstate, string ppostalcode, double wweight, double ffee)
{
    setSenderName( sendername );
    setRecipientName( recipientname );
    setAddressees(  aaddressees );
    setCity( ccity  );
    setState( sstate  );
    setPostalcode( ppostalcode );
    setWeight( wweight );
    setFee( ffee);

} // end Package constructor

void Package::setSenderName( string sendername  )
{
    senderName=sendername;
} // end function
string Package::getSenderName() const
{
    return senderName;
}


void Package::setRecipientName( string recipientname  )
{
    recipientName=recipientname;
} // end function
string Package::getRecipientName() const
{
    return recipientName;
}


void Package::setAddressees(  string aaddressees )
{
    addressees=aaddressees;
} // end function

string Package::getAddressees() const
{
    return addressees;
}

void Package::setCity( string ccity  )
{
    city=ccity;
} // end function

string Package::getCity() const
{
    return city;
}


void Package::setState( string sstate  )
{
    state=sstate;
} // end function

string Package::getState() const
{
    return state;
}


void Package::setPostalcode( string ppostalcode  )
{
    postalcode=ppostalcode;
} // end function

string Package::getPostalcode() const
{
    return postalcode;
}





void Package::setWeight( double wweight)
{
    if(wweight>=0.0)
    {
        weight=wweight;
    }
    else
        throw invalid_argument(" weight must be >= 0.0 ");
}
double Package::getWeight() const
{
    return weight;
}


void Package::setFee( double ffee)
{
    if(ffee>=0.0)
    {
        fee=ffee;
    }
    else
        throw invalid_argument(" fee must be >= 0.0 ");

}
double Package::getFee() const
{
    return fee;
}

double Package::calculateCost() const//计算基础费用
{
   return  getFee() * getWeight();
}






