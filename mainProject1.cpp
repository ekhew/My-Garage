/*
Title: Project 1 - mainProject1.cpp
Author: Edwin Khew
Description: Main.cpp file for project 1 (used for testing).
Date Created: 2/17/2021
*/

#include <iostream>
#include <string>
#include "Vehicle.hpp"
#include "Car.hpp"
#include "Motorcycle.hpp"
#include "Bus.hpp"
#include "Truck.hpp"
#include "Garage.hpp"

using namespace std;

int main()
{
	/*
		Cars
	*/
	Car myCar("M4", "BMW", 155, 3830, 20); //name, manufacturer, top_speed, weight, mpg, curr_gas_amt

	cout << "Car: " << endl;
	cout << "   Name: " << myCar.getName() << endl;
	cout << "   Manufacturer: " << myCar.getManufacturer() << endl;
	cout << "   Top Speed: " << myCar.getTopSpeed() << endl;
	cout << "   Weight: " << myCar.getWeight() << endl;
	cout << "   Miles per Gallon: " << myCar.getMilesPerGallon() << endl;
	cout << "   Current Amount of Gas: " << myCar.getCurrentAmountGas() << endl;
	cout << "   Wheels: " << myCar.getNumWheels() << endl;
	cout << "   Garage Positions: " << myCar.getGaragePositions() << endl << endl;

	/*
		Motorcycles
	*/
	Motorcycle myMotor("Ninja", "Kawasaki", 152, 514, 37); //name, manufacturer, top_speed, weight, mpg, curr_gas_amt

	cout << "Motorcycle: " << endl;
	cout << "   Name: " << myMotor.getName() << endl;
	cout << "   Manufacturer: " << myMotor.getManufacturer() << endl;
	cout << "   Top Speed: " << myMotor.getTopSpeed() << endl;
	cout << "   Weight: " << myMotor.getWeight() << endl;
	cout << "   Miles per Gallon: " << myMotor.getMilesPerGallon() << endl;
	cout << "   Current Amount of Gas: " << myMotor.getCurrentAmountGas() << endl;
	cout << "   Wheels: " << myMotor.getNumWheels() << endl;
	cout << "   Garage Positions: " << myMotor.getGaragePositions() << endl << endl;

	/*
		Buses
	*/
	Bus myBus("eCitaro", "Mercedes", 80, 40100, 33, 58); //name, manufacturer, top_speed, weight, mpg, curr_gas_amt, number_seats

	cout << "Bus: " << endl;
	cout << "   Name: " << myBus.getName() << endl;
	cout << "   Manufacturer: " << myBus.getManufacturer() << endl;
	cout << "   Top Speed: " << myBus.getTopSpeed() << endl;
	cout << "   Weight: " << myBus.getWeight() << endl;
	cout << "   Miles per Gallon: " << myBus.getMilesPerGallon() << endl;
	cout << "   Current Amount of Gas: " << myBus.getCurrentAmountGas() << endl;
	cout << "   Number of Seats: " << myBus.getNumSeats() << endl;
	cout << "   Wheels: " << myBus.getNumWheels() << endl;
	cout << "   Garage Positions: " << myBus.getGaragePositions() << endl << endl;

	/*
		Trucks
	*/
	Truck myTruck("Optimus", "Peterbilt", 110, 50500, 35, 200); //name, manufacturer, top_speed, weight, mpg, curr_gas_amt, cargo_capacity_

	cout << "Truck: " << endl;
	cout << "   Name: " << myTruck.getName() << endl;
	cout << "   Manufacturer: " << myTruck.getManufacturer() << endl;
	cout << "   Top Speed: " << myTruck.getTopSpeed() << endl;
	cout << "   Weight: " << myTruck.getWeight() << endl;
	cout << "   Miles per Gallon: " << myTruck.getMilesPerGallon() << endl;
	cout << "   Current Amount of Gas: " << myTruck.getCurrentAmountGas() << endl;
	cout << "   Cargo Capacity: " << myTruck.getCargoCapacity() << endl;
	cout << "   Wheels: " << myTruck.getNumWheels() << endl;
	cout << "   Garage Positions: " << myTruck.getGaragePositions() << endl << endl;

	/*
		My Garage
	*/
	Garage myGarage(12); //with specified parameter, garage will be of the specified size
	//Garage myGarage; //no parameter, so default parameter called, default garage size is 12

	cout << "Garage: " << endl;
	cout << "   Total Capacity: " << myGarage.getGarageCapacity() << endl;

	myGarage.addVehicle(myCar);
	myGarage.addVehicle(myBus);
	myGarage.addVehicle(myMotor);
	myGarage.addVehicle(myCar2);
	myGarage.addVehicle(myMotor2);
	//myGarage.addVehicle(myCar3);
	myGarage.swapVehicles(myCar3, myCar);
	//myGarage.removeVehicle(myBus);
	//myGarage.removeVehicle(myCar3);

	cout << "   Capacity Occupied: " << myGarage.getNumVehicles() << endl << endl;

	for(int i = 0; i < myGarage.getGarageCapacity(); i++)
	{
		cout << "   Slot " << i + 1 << ": " << myGarage.arr_[i].getName() << endl;
	}

	//myGarage.display();
}



/*	GETTERS:
	double getTopSpeed() const;          // returns top_speed_
 	size_t getWheels() const;            // returns wheels_
    double getWeight() const;            // returns weight_
    double getMilesPerGallon() const;    // returns milesPerGallon_
    size_t getGaragePositions() const;   // returns garagePositions_
    double getDistanceTraveled() const;  // returns distance_traveled_
    double getCurrentAmountGas() const;  // return how much gas we currently have
    std::string getName() const;         // returns name_
    std::string getManufacturer() const; // returns manufacturer_
    void turn(float degrees);            // adds to current direction
    std::string getDirection();          // gets current direction of vehicle based on degrees
    const size_t getSpaces() const;      // returns garage_spaces_
    const size_t getNumWheels() const;   // sets the number of wheels the vehicle has
*/
