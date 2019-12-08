#include "OvernightPackage.h"

OvernightPacage::OvernightPacage(string SenderName, string SenderAddress, string SenderCity, string SenderState, string SenderPostalCode, string ReceiverName, string ReceiverAddress, string ReceiverCity, string ReceiverState, string ReceiverPostalCode, double Weight, double CostPerOunce, double ExtraCostPerOunce) :Package(SenderName, SenderAddress, SenderCity, SenderState, SenderPostalCode, ReceiverName, ReceiverAddress, ReceiverCity, ReceiverState, ReceiverPostalCode, Weight, CostPerOunce), ExtraCostPerOunce(ExtraCostPerOunce) {}

double OvernightPacage::caculateCost() {
	return getWeight() *(getCostPerOunce() + ExtraCostPerOunce);
}