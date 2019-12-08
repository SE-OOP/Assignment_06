#include "Package.h"

Package::Package(string SenderName, string SenderAddress, string SenderCity, string SenderState, string SenderPostalCode, string ReceiverName, string ReceiverAddress, string ReceiverCity, string ReceiverState, string ReceiverPostalCode, double Weight, double CostPerOunce) :SenderName(SenderName), SenderAddress(SenderAddress), SenderCity(SenderCity), SenderState(SenderState), SenderPostalCode(SenderPostalCode), ReceiverName(ReceiverName), ReceiverAddress(ReceiverAddress), ReceiverCity(ReceiverCity), ReceiverState(ReceiverState), ReceiverPostalCode(ReceiverPostalCode) {
	this->Weight = 0;
	this->CostPerOunce = 0;
	if (Weight > 0) this->Weight = Weight;
	if (CostPerOunce > 0) this->CostPerOunce = CostPerOunce;
}

double Package::caculateCost() {
	return Weight * CostPerOunce;
}

double Package::getCostPerOunce() { return CostPerOunce; }

double Package::getWeight() { return Weight; }