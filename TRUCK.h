#pragma once
#ifndef TRUCK_h
#define TRUCK_h
#include "Vehicle.h"
#include <string>
#include <iostream>

class Truck : public Vehicle {

private:
	double towingCapacity;
public: 
	Truck();
	
	Truck(double tC, const string& m, int yB);

	void setTruck(double tC);
	
	double getTruck();

	void displayInfo() const override;
};
#endif