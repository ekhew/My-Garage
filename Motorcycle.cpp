/*
Title: Project 1 - Motorcycle.cpp
Author: Edwin Khew
Description: Motorcycle class implementation.
Date Created: 2/17/2021
*/

#include <iostream>
#include <string>
#include "Vehicle.hpp"
#include "Motorcycle.hpp"

using namespace std;

Motorcycle::Motorcycle(string name, string manufacturer, double top_speed, double weight, double mpg): Vehicle(name, manufacturer, top_speed, weight, mpg, 0)
{
    setGarageSpaces(1);
    setNumWheels(2);
}
