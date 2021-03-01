/*
Title: Project 1 - Garage.hpp
Author: Edwin Khew
Description: Garage class declaration.
Date Created: 2/17/2021
*/

#ifndef GARAGE_H_
#define GARAGE_H_

#include <iostream>
#include <string>
#include "Vehicle.hpp"

using namespace std;

class Garage
{
public:
    /* Parameterized constructor with a default argument for capacity of 12 */
    Garage(size_t capacity = 12);
    bool addVehicle(Vehicle to_add); //add a vehicle to the garage
    bool removeVehicle(Vehicle to_remove); //remove an existing vehicle from the garage
    bool swapVehicles(Vehicle swap_in, Vehicle swap_out); //swap out a vehicle that is in the garage with a new one that is not in the garage.
    bool isFull() const; //check if all the slots in the garage are filled
    void display() const; //display the manufacturer and name of each vehicle in the garage once
    size_t getGarageCapacity() const; //returns capacity_
    size_t getNumVehicles() const; //returns num_vehicles_

private:
    /**
        Changes the contents of arr_ to have all non-null vehicles strictly at the
        end of the array and all inserted vehicles at the beginning of the array.
    */
    void arrange();
    Vehicle *arr_;        //a pointer to an array of vehicles
    size_t capacity_;     //the number of vehicle slots in the caller
    size_t num_vehicles_; //the number of occupied vehicle slots in the caller
};

#endif
