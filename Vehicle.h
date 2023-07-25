#pragma once
#ifndef VEHICLE_H
#define VEHICLE_H
#include <string>
#include <iostream>
using namespace std;

class Vehicle {	// parent class to all vehicles

protected:
	string manufacturer;
	int yearBuilt;

public:

	Vehicle();
	Vehicle(const string& m, int yB);
	virtual ~Vehicle() {}; // destructor

	void setManufacturer(const string& m);

	void setYearBuilt(int yB);

	string getManufacturer();

	int getYearBuilt();

	virtual void displayInfo() const;

};

#endif

