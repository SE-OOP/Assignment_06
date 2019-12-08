#include "TwoDayPackage.h"

TwoDayPacage::TwoDayPacage(string SenderName, string SenderAddress, string SenderCity, string SenderState, string SenderPostalCode, string ReceiverName, string ReceiverAddress, string ReceiverCity, string ReceiverState, string ReceiverPostalCode, double Weight, double CostPerOunce, double FlatCharge) :Package(SenderName, SenderAddress, SenderCity, SenderState, SenderPostalCode, ReceiverName, ReceiverAddress, ReceiverCity, ReceiverState, ReceiverPostalCode, Weight, CostPerOunce), FlatCharge(FlatCharge) {}

double TwoDayPacage::caculateCost() {
	return Package::caculateCost() + FlatCharge;
}