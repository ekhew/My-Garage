/*
Title: Project 1 - Bus.hpp
Author: Edwin Khew
Description: Bus class declaration.
Date Created: 2/17/2021
*/

#ifndef BUS_
#define BUS_

#include <iostream>
#include <string>
#include "Vehicle.hpp"

using namespace std;

class Bus: public Vehicle
{
public:
    /**
            Parameterized Constructor
            @param name : name/model of motorcycle
            @param manufacturer : name of the manufacturer
            @param top_speed : a double letting us know the fastest speed of the vehicle in Miles Per Hour
            @param weight : weight of the motorcycle in pounds
            @param mpg : miles per gallon, how many miles the motorcycle gets on a single gallon
            @param number_seats : number of seats in the bus
    */
    Bus(std::string name, std::string manufacturer, double top_speed, double weight, double mpg, size_t number_seats);
    size_t getNumSeats() const; //returns the number of seats in the bus
private:
    double number_seats_;
};

#endif
