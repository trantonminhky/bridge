#pragma once
#include "Color.hpp"
#include <iostream>

class Car {
public:
	Car(Color* color);

	virtual void info() = 0;

protected:
	Color* color;
};