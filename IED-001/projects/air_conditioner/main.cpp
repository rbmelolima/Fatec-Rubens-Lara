#include <iostream>
#include "AirConditioner.h"

using namespace std;

int main()
{
	try {
		AirConditioner equipment = AirConditioner(18);
		cout << "Temperatura: " << equipment.getTemperature() << endl;

		equipment.on();

		for(int i = 0; i < 12; i++) {
			equipment.changeTemperature(1);
		}

		cout << "Temperatura: " << equipment.getTemperature() << endl;

		equipment.off();
		equipment.changeTemperature(1);

		cout << "Temperatura: " << equipment.getTemperature() << endl;

		return 0;
	} catch (char const* e) {
			cout << e << endl;
			return -1;
	}
}

