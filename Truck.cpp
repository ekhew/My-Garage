/*
Title: Project 1 - Truck.cpp
Author: Edwin Khew
Description: Truck class implementation.
Date Created: 2/17/2021
*/

#include <iostream>
#include <string>
#include "Vehicle.hpp"
#include "Truck.hpp"

using namespace std;

Truck::Truck(string name, string manufacturer, double top_speed, double weight, double mpg, double cargo_capacity): Vehicle(name, manufacturer, top_speed, weight, mpg, 0)
{
	cargo_capacity_ = cargo_capacity;
	setGarageSpaces(8);
	setNumWheels(18);
}

bool Truck::add_cargo(double weight_of_cargo)
{
	if(weight_of_cargo <= cargo_capacity_) //if the weight of cargo does not exceed the cargo capacity
	{
		weight_of_held_cargo_ = weight_of_held_cargo_ + weight_of_cargo; //add the cargo to total weight
		return true;
	}
	else
	{
		return false;
	}
}

bool Truck::clear()
{
	if(weight_of_held_cargo_ != 0)
	{
		weight_of_held_cargo_ = 0;
		return true;
	}
	else
	{
		return false;
	}
}

double Truck::getCargoCapacity() const
{
	return cargo_capacity_;
}

double Truck::getHeldCargoWeight() const
{
	return weight_of_held_cargo_;
}
