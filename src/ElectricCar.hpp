#pragma once
#include "Car.hpp"

class ElectricCar : public Car {
public:
	ElectricCar(Color* color);

	void info() override;
};