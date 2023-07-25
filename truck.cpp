#include "TRUCK.h"
#include <string>
#include <iostream>
using namespace std;

Truck::Truck() : Vehicle() {	// default constructor
	towingCapacity = 0.0;
}

Truck::Truck(double tC, const string& m, int yB) : Vehicle(m, yB) {	// input constructor
	towingCapacity = tC;

}

void Truck::setTruck(double tC) {
	towingCapacity = tC;
}

double Truck::getTruck() {
	return towingCapacity;
}

void Truck::displayInfo() const {
	cout << "Manufacturer: " << manufacturer << "." << endl;
	cout << "Built: " << yearBuilt << ". " << endl;
	cout << "Towing capacity: " << towingCapacity << ". " << endl;

}