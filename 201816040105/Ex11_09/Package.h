#ifndef PACKAGE_H
#define PACKAGE_H
#include <string>
using namespace std;

class Package
{
	public:
		Package(const string&,const string&,const string&,const string&,const string&,const string&,double,double);
		double calculateCost();
		void setSenderName(const string&);
		string getSenderName();
		void setRecipientName(const string&);
		string getRecipientName();
		void setAddress(const string&);
		string getAddress();
		void setCity(const string&);
		string getCity();
		void setState(const string&);
		string getState();
		void setPostCode(const string&);
		string getPostCode();
		void setWeight(double);
		double getWeight();
		void setFee(double);
		double getFee();
		void print();
	private:
		string senderName;
		string recipientName;
		string address;
		string city;
		string state;
		string postCode;
		double weight;
		double fee;
};

#endif
