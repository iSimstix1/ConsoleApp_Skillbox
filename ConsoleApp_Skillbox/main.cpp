#include <iostream>
#include <string>
#include <ctime>
#include <cmath>

// Task 1
class Car {
private:

	double maxSpeedCar;
	double weightCar;
	std::string colorCar;

public:

	void SetCharacteristicCar(double setMaxSpeedCar, double setWeightCar, std::string setColorCar) {
		maxSpeedCar = setMaxSpeedCar;
		weightCar = setWeightCar;
		colorCar = setColorCar;
	}
	void GetCharacteristicCar() {
		std::cout << "Weight car: " << weightCar << std::endl;
		std::cout << "Maximum speed car: " << maxSpeedCar << std::endl;
		std::cout << "Color car: " << colorCar << std::endl;
	}
};

// Task 2
class Vector {
private:

	double x;
	double y;
	double z;

	double LengthVector;

public:
	Vector() : x(3), y(4), z(0), LengthVector(0) {}
	Vector(double _x, double _y, double _z, double _LengthVector) : x(_x), y(_y), z(_z), LengthVector(_LengthVector){}

	void Show() {
		std::cout << std::endl;
		std::cout << "x = " << x << std::endl;
		std::cout << "y = " << y << std::endl;
		std::cout << "z = " << z << std::endl;
	}

	// Get vector by module
	double Length() {
		LengthVector = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
		return LengthVector;
	}

};

int main() {
	Car instanceCar;
	instanceCar.SetCharacteristicCar(170, 1550, "White");
	instanceCar.GetCharacteristicCar();

	Vector instanceVector;
	instanceVector.Show();
	std::cout << "\nVector length (by module) = " << instanceVector.Length();
	

	std::cout << std::endl;
	return 0;
}