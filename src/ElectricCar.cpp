#include "ElectricCar.hpp"

ElectricCar::ElectricCar(Color* color) : Car(color) {}

void ElectricCar::info() {
	std::cout << "This is a " << color->getColor() << " Electric Car\n";
}