#include "Package.h"
using namespace std;

class TwoDayPacage :public Package {
public:
	TwoDayPacage(string SenderName, string SenderAddress, string SenderCity, string SenderState, string SenderPostalCode, string ReceiverName, string ReceiverAddress, string ReceiverCity, string ReceiverState, string ReceiverPostalCode, double Weight, double CostPerOunce, double FlatCharge);
	double caculateCost();
private:
	double FlatCharge;
};