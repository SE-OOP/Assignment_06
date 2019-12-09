
#include <string>

#include "OvernightPackage.h"

using namespace std;
OvernightPackage::OvernightPackage(const string &send,const string &receipt,const string &add,const string &cit,const string &sta,const string &code,double we,double fe,double ac)    //寄件人，收件人，地址，城市，所在州，邮政编码,重量，每盎司价格 ,额外费用 
					:Package(send,receipt,add,cit,sta,code,we,fe)
{
	setAdditionalCosts(ac);
} 
void OvernightPackage::setAdditionalCosts(double ac)//set 额外费用
{
	additionalcosts=ac;
}
double OvernightPackage::getAdditionalCosts()
{
	return additionalcosts;
}
double OvernightPackage::CalculateCost()
{
	return getWeight()*(getFee()+getAdditionalCosts());
}
