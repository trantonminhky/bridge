#include "ConventionalCar.hpp"

ConventionalCar::ConventionalCar(Color* color) : Car(color) {}

void ConventionalCar::info() {
	std::cout << "This is a " << color->getColor() << " Conventional Car\n";
}