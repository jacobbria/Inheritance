// Jacob Bria
// CIS 1202
// 07/24/23

#include <iostream>
#include "VEHICLE.h"
#include "CAR.h"
#include "TRUCK.h"
#include <string>

using namespace std;

// prototypes
Vehicle getVehicle();
void displayVehicle(Vehicle);


int main()
{
    Vehicle vehicle = getVehicle(); // get Vehicle information and store in vehicle object

    displayVehicle(vehicle);

    
}

Vehicle getVehicle() {  // get vehicle information for  user
    
    string inputManufactor;
    int inputYearBuilt;

    
    cout << "Enter Vehicle's manufacturer: ";
    getline(cin, inputManufactor);

    cout << "Enter year Vehicle was built: ";
    cin >> inputYearBuilt;

    Vehicle vehicle(inputManufactor, inputYearBuilt);
    return vehicle;

}

void displayVehicle(Vehicle vehicle) {  // display the vehicle information

    vehicle.displayInfo();  // call the function from vehicle object aka parent class

}
