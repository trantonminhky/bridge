#include <iostream>
#include "ConventionalCar.hpp"
#include "ElectricCar.hpp"
#include "Red.hpp"
#include "Blue.hpp"

int main() {
	Color* color1 = new Red();
	Car* car1 = new ConventionalCar(color1);

	Color* color2 = new Blue();
	Car* car2 = new ElectricCar(color2);

	car1->info();
	car2->info();

	delete color1;
	delete car1;
	delete color2;
	delete car2;

	return 0;
}