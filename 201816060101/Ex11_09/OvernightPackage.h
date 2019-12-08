#include "Package.h"
using namespace std;

class OvernightPacage :public Package {
public:
	OvernightPacage(string SenderName, string SenderAddress, string SenderCity, string SenderState, string SenderPostalCode, string ReceiverName, string ReceiverAddress, string ReceiverCity, string ReceiverState, string ReceiverPostalCode, double Weight, double CostPerOunce, double ExtraCostPerOunce);
	double caculateCost();
private:
	double ExtraCostPerOunce;
};