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
	Truck() : Vehicle() {	// default constructor
		towingCapacity = 0.0;
	}
	
	Truck(double tC, const string& m, int yB) : Vehicle(m, yB) {	// input constructor
		towingCapacity = tC;

	}

	void setTruck(double tC) {
		towingCapacity = tC;
	}

	double getTruck() {
		return towingCapacity;
	}

	void displayInfo() const override {
		cout << "Manufacturer: " << manufacturer << "." << endl;
		cout << "Built: " << yearBuilt << ". " << endl;
		cout << "Towing capacity: " << towingCapacity << ". " << endl;

	}

};
#endif