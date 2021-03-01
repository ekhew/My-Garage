/*
Title: Project 1 - Car.hpp
Author: Edwin Khew
Description: Car class declaration.
Date Created: 2/17/2021
*/

#ifndef CAR_H_
#define CAR_H_

#include <iostream>
#include <string>
#include "Vehicle.hpp"

using namespace std;

class Car: public Vehicle
{
public:
    /**
            Parameterized Constructor
            @param name : name/model of car
            @param manufacturer : name of the manufacturer
            @param top_speed : a double letting us know the fastest speed of the vehicle in Miles Per Hour
            @param weight : weight of the car in pounds
            @param mpg : miles per gallon, how many miles the car gets on a single gallon
    */
    Car(std::string name, std::string manufacturer, double top_speed, double weight, double mpg);
};

#endif
