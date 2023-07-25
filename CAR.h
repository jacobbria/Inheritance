#pragma once

#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"
#include <string>
#include <iostream>
using namespace std;


class Car : public Vehicle { // car class, a child of Vehicle

private:
	int numOfDoors;

public:

	Car() : Vehicle() {	// default constructor
		numOfDoors = 0;
	}

	Car(int doors, const string& m, int yB) : Vehicle(m, yB) {	// constructor based on user input
		numOfDoors = doors;

	}

	void setCar(int doors){	// setter for num of doors
		numOfDoors = doors;
	}

	int getDoors() {	// getter for doors
		return numOfDoors;
	}

	void displayInfo()	const override {	// override the parent class function
		cout << "Manufacturer: " << manufacturer << "." << endl;
		cout << "Built: " << yearBuilt << ". " << endl;
		cout << "Number of doors: " << numOfDoors << ". " << endl;
	}


};

#endif