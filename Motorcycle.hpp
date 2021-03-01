/*
Title: Project 1 - Motorcycle.hpp
Author: Edwin Khew
Description: Motorcycle class declaration.
Date Created: 2/17/2021
*/

#ifndef MOTORCYCLE_H_
#define MOTORCYCLE_H_

#include <iostream>
#include <string>
#include "Vehicle.hpp"

using namespace std;

class Motorcycle: public Vehicle
{
public:
    /**
            Parameterized Constructor
            @param name : name/model of motorcycle
            @param manufacturer : name of the manufacturer
            @param top_speed : a double letting us know the fastest speed of the vehicle in Miles Per Hour
            @param weight : weight of the motorcycle in pounds
            @param mpg : miles per gallon, how many miles the motorcycle gets on a single gallon
    */
    Motorcycle(std::string name, std::string manufacturer, double top_speed, double weight, double mpg);
};

#endif
