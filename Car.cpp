/*
Title: Project 1 - Car.cpp
Author: Edwin Khew
Description: Car class implementation.
Date Created: 2/17/2021
*/

#include <iostream>
#include <string>
#include "Vehicle.hpp"
#include "Car.hpp"

using namespace std;

Car::Car(string name, string manufacturer, double top_speed, double weight, double mpg): Vehicle(name, manufacturer, top_speed, weight, mpg, 0)
{
    setGarageSpaces(2);
    setNumWheels(4);
}

