/*
Title: Project 1 - Garage.cpp
Author: Edwin Khew
Description: Garage class implementation.
Date Created: 2/17/2021
*/

#include <iostream>
#include "Garage.hpp"
#include "Vehicle.hpp"
#include "cmath"

using namespace std;

namespace null
{
    Vehicle v;
}

void Garage::arrange()
{
    Vehicle *new_arr = new Vehicle[capacity_];
    int null_count = 0;

    for(int i = 0; i <= capacity_; i++)
    {
        if(arr_[i] == null::v) //if an empty spot (null) is found, increment the null counter
        {
            null_count++;
        }
        else if(arr_[i] != null::v && i < capacity_) //if a non-empty (non-null) spot is found
        {
            new_arr[i - null_count] = arr_[i]; //move i in new_arr back the number of
        }                                      //nulls found and set it to the current arr_ i
    }

    arr_ = new_arr; //repoint arr_ to the new arranged array
}

Garage::Garage(size_t capacity)
{
    arr_ = new Vehicle[capacity];
    capacity_ = capacity;
    num_vehicles_ = 0;
}

bool Garage::addVehicle(Vehicle to_add)
{
    if(num_vehicles_ + to_add.getSpaces() > capacity_) //if there is not enough open slots for the new vehicle, return false
    {
        return false;
    }
    else if(isFull()) //if the garage is full, return false
    {
        return false;
    }
    else
    {
        for(int i = 0; i <= capacity_; i++) //loop through the entire garage array
        {
            if(arr_[i] == null::v) //once the first empty (null) spot is found, add the new vehicle
            {
                //from the first empty spot found, add the vehicle to the array until it fills up the necessary number of spots.
                for(int j = i; j < i + to_add.getSpaces(); j++)
                {
                    arr_[j] = to_add;
                }
                num_vehicles_ += to_add.getSpaces(); //increment the number of garage slots taken up

                return true;
            }
        }
    }
}

bool Garage::removeVehicle(Vehicle to_remove)
{
    bool vehicle_found = false;

    //loop through the occupied garage slots and look for a vehicle with a name that matches the vehicle to be removed
    for(int i = 0; i <= num_vehicles_; i++)
    {
        if(arr_[i].getName() == to_remove.getName()) //set vehicle_found to true if a match was found
        {
            vehicle_found = true;
        }
    }

    if(num_vehicles_ == 0) //no vehicles in the garage
    {
        return false;
    }
    else if(vehicle_found == false) //vehicle was not found in the garage
    {
        return false;
    }
    else
    {
        for(int i = 0; i <= num_vehicles_; i++)
        {
            if(arr_[i].getName() == to_remove.getName())
            {
                //starting from the first slot that the vehicle occupies to the last slot that the vehicle occupies, set those slots to null.
                for(int j = i; j <= i + (to_remove.getSpaces() - 1); j++)
                {
                    arr_[j] = null::v;
                }
            }
        }

        num_vehicles_ -= to_remove.getSpaces(); //decrement the number of slots taken up

        arrange(); //remove 'holes' in the garage spaces
        return true;
    }
}

bool Garage::swapVehicles(Vehicle swap_in, Vehicle swap_out)
{
    if(num_vehicles_ + swap_in.getSpaces() > capacity_) //if there is not enough open slots for the new vehicle, return false
    {
        return false;
    }
    else if(isFull()) //if the garage is full, return false
    {
        return false;
    }
    else
    {
        removeVehicle(swap_out); //remove the old vehicle from its spot(s) in the garage
        addVehicle(swap_in); //replace it with the new vehicle

        return true;
    }
}

bool Garage::isFull() const
{
    if(num_vehicles_ == capacity_) //if number of garage slots occupied == total garage slots available, return true
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Garage::display() const
{
    string vehicle_found = "";

    for(int i = 0; i < num_vehicles_; i++) //loop through all the occupied garage slots
    {
        if(arr_[i].getName() != vehicle_found) //if the name of the current vehicle != vehicle_found, it means it has not already been printed
        {
            if(i != num_vehicles_) //if the current vehicle slot is not the last slot, print an endl at the end
            {
                cout << arr_[i].getManufacturer() << " " << arr_[i].getName() << endl;
                vehicle_found = arr_[i].getName(); //set vehicle_found to the name of the vehicle that was just printed
            }
            else if(i == num_vehicles_) //if the current vehicle slot is the last slot, do not print an endl at the end
            {
                cout << arr_[i].getManufacturer() << " " << arr_[i].getName();
            }
        }
    }
}

size_t Garage::getGarageCapacity() const
{
    return capacity_;
}

size_t Garage::getNumVehicles() const
{
    return num_vehicles_;
}

