#ifndef AIRCONDITIONER_H_INCLUDED
#define AIRCONDITIONER_H_INCLUDED

class AirConditioner {
	int temperature;
	bool itsOn = false;

	public:

	AirConditioner(int initialTemperature) {
		if(initialTemperature >= 18) {
			temperature = initialTemperature;
		}
		else {
			throw "Error: A temperatura inicial precisa ser maior ou igual a 18.";
		}
	}

	int getTemperature() { return temperature; }

	void on() {
		itsOn = true;
	}

	void off() {
		itsOn = false;
	}

	void changeTemperature(bool increase) {
		if (itsOn == true && increase == 1) {
			temperature++;
		}
		else if (itsOn == true && increase == 0 && temperature != 18) {
			temperature--;
		}
		else{
			throw "Error: Erro ao mudar a temperatura.";
		}
	}
};


#endif // AIRCONDITIONER_H_INCLUDED
