/*
Title: Project 1 - Bus.cpp
Author: Edwin Khew
Description: Bus class implementation.
Date Created: 2/17/2021
*/

#include <iostream>
#include <string>
#include "Vehicle.hpp"
#include "Bus.hpp"

using namespace std;

Bus::Bus(string name, string manufacturer, double top_speed, double weight, double mpg, size_t number_seats): Vehicle(name, manufacturer, top_speed, weight, mpg, 0)
{
    number_seats_ = number_seats;
    setGarageSpaces(4);
    setNumWheels(8);
}

size_t Bus::getNumSeats() const
{
    return number_seats_;
}
