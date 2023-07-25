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
Car getCar();
void displayCar(Car);
Truck getTruck();
void displayTruck(Truck);


int main()
{
    Vehicle vehicle = getVehicle(); // get Vehicle information and store in vehicle object

    displayVehicle(vehicle);    // display the input vehicle information

    Car car = getCar();

    displayCar(car);

    Truck truck = getTruck();

}

Vehicle getVehicle() {  // get vehicle information for  user
    
    string inputManufactor;
    int inputYearBuilt;

    
    cout << "Enter Vehicle's manufacturer: ";
    getline(cin, inputManufactor);

    cout << "Enter year Vehicle was built: ";
    cin >> inputYearBuilt;
    
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // debugging issue with incorrect user input (update: it worked)

    Vehicle vehicle(inputManufactor, inputYearBuilt);
    return vehicle;

}

void displayVehicle(Vehicle vehicle) {  // display the vehicle information

    vehicle.displayInfo();  // call the function from vehicle object aka parent class

}

Car getCar() {
    
    int doors;
    string inputManufactor;
    int inputYearBuilt;


    cout << "Enter Vehicle's manufacturer: ";
    getline(cin, inputManufactor);

    cout << "Enter year Vehicle was built: ";
    cin >> inputYearBuilt;

    cout << "Number of doors on car: ";
    cin >> doors;

    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // eat the floating newline


    Car car(doors, inputManufactor, inputYearBuilt);    // instantiate a new car to store the input
    return car; // return the input car obj to main
}

void displayCar(Car car) {

    car.displayInfo();

}

Truck getTruck() {
    double towCapacity;
    string inputManufactor;
    int inputYearBuilt;


    cout << "Enter Vehicle's manufacturer: ";
    getline(cin, inputManufactor);

    cout << "Enter year Vehicle was built: ";
    cin >> inputYearBuilt;

    cout << "Enter towing capacity of truck in lb: ";
    cin >> towCapacity;

    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // eat newline


    Truck truck(towCapacity, inputManufactor, inputYearBuilt);    // instantiate a new truck to store the input
    return truck; // return the input car obj to main


}