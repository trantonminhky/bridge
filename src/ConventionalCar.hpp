#pragma once
#include "Car.hpp"

class ConventionalCar : public Car {
public:
	ConventionalCar(Color* color);	

	void info() override;
};