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

	Vehicle() {	// default constructor
		manufacturer = "";
		yearBuilt = 0;
	}
	
	Vehicle(const string& m, int yB) {	// constructor to be used with children classes
		manufacturer = m;
		yearBuilt = yB;
	}

	virtual ~Vehicle() {}; // destructor

	void setManufacturer(const string& m) {
		manufacturer = m;

	}

	void setYearBuilt(int yB) {
		yearBuilt = yB;
	}

	string getManufacturer() {
		return manufacturer;
	}

	int getYearBuilt() {
		return yearBuilt;
	}

	virtual void displayInfo() const {	// output information
		cout << "Manufacturer: " << manufacturer << "." << endl;
		cout << "Built: " << yearBuilt << ". " << endl;
	}

};

#endif

