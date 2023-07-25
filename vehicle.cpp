#include "VEHICLE.h"
#include <string>
#include <iostream>
using namespace std;

Vehicle::Vehicle() {	// default constructor
	manufacturer = "";
	yearBuilt = 0;
}

Vehicle::Vehicle(const string& m, int yB) {	// constructor to be used with children classes
	manufacturer = m;
	yearBuilt = yB;
}

void Vehicle::setManufacturer(const string& m) {
	manufacturer = m;
}

void Vehicle::setYearBuilt(int yB) {
	yearBuilt = yB;
}

string Vehicle::getManufacturer() {
	return manufacturer;
}

int Vehicle::getYearBuilt() {
	return yearBuilt;
}

void Vehicle::displayInfo() const {	// output information
	cout << "Manufacturer: " << manufacturer << "." << endl;
	cout << "Built: " << yearBuilt << ". " << endl;
}