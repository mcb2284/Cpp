#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include "PoliceOfficer.h"
using namespace std;

int main()
{
	ParkingTicket *ticket = nullptr;

	ParkedCar car("Volkswagen", "1972", "Red", "147RHZM", 125);

	ParkingMeter meter(60);

	PoliceOfficer officer("Joe Friday", "4788");
	

	

	ticket = officer.patrol(car, meter);


	if (ticket != nullptr)
	{
		cout << officer;

		cout << *ticket;

		delete ticket;
		ticket = nullptr;
	
	}
	else
		cout << "No crimes were committed.\n";
	

	return 0;
}