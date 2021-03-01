/*
Title: Project 1 - Truck.hpp
Author: Edwin Khew
Description: Truck class declaration.
Date Created: 2/17/2021
*/

#ifndef TRUCK_H_
#define TRUCK_H_

#include <iostream>
#include <string>
#include "Vehicle.hpp"

using namespace std;

class Truck: public Vehicle
{
public:
    /**
            Parameterized Constructor
            @param name : name/model of said truck
            @param manufacturer : name of the manufacturer
            @param top_speed : a double letting us know the fastest speed of the vehicle in Miles Per Hour
            @param weight : weight of the truck pounds
            @param mpg : miles per gallon, how many miles your truck gets on a single gallon
            @param cargo_capacity : how much cargo the truck can hold
    */
    Truck(std::string name, std::string manufacturer, double top_speed, double weight, double mpg, double cargo_capacity);
    /**
            Adding cargo to the truck
            @param weight_of_cargo : weight of cargo to be added to the truck
            @post : returns true if the cargo was successfully added to weight_of_held_cargo_, returns false otherwise
    */
    bool add_cargo(double weight_of_cargo);
    /**
            Clearing the cargo from the truck by setting it to 0
            @post : returns true if the cargo was successfully cleared (set to 0), returns false otherwise
    */
    bool clear();
    double getCargoCapacity() const; //returns cargo_capacity_
    double getHeldCargoWeight() const; //returns weight_of_held_cargo_
private:
    double cargo_capacity_;
    double weight_of_held_cargo_;
};

#endif
