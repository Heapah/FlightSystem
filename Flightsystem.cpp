//Ethan Heap

//01/11/17

//Flight Control Assignment OOP



#pragma once

#include"Flightsystem.h"

#include"Aircraft.h"

#include<iostream>

#include<string>

#include<vector>




// Adding an Aircraft to the list

void Flightsystem::addAircraft_(std::string flightNumber, std::string airline, std::string airlineType, int altitude, int speed, std::string grid, int heading) {
	Aircraft s1(flightNumber, airline, airlineType, altitude, speed, grid, heading);
}


bool isFound = false;
for (int i = 0; i < aircraftList_.size(); i++) {
	if (aircraftList_.at(i).GetFlightNumber()) {
		isFound = true;

	}
}


if (isFound == true) {
	std::cout << "Flight " << flightNumber << " is already in the system" << std::endl;
}
else {
	aircraftList_.push_back(Aircraft(s1));
	std::cout << "You have added Flight: " << flightNumber << " to the system" << std::endl;
}
}

std::vector<Aircraft> Flightsystem::listAllAircraft() {
	return aircraftList;
}

// Listing all Aircrafts in the system

std::vector<Aircraft> Flightsystem::ListAllAircraft_() {
	return aircraftList_;

// Listing all Cruising Aircrafts in the system

	std::vector<Aircraft> Flightsystem::listAllCruisingAircraft_() {
		for (unsigned int i = 0; i < aircraftList_.size(); i++) {
			if (aircraftList_.at(i).GetAltitude() >= 30000) {
				cruisingAircrafts_.push_back(aircraftList_.at(i));
			}
		}
		return cruisingAircrafts_;
	}


// Removing an Aircraft from the system

std::vector <Aircraft>

for (int i = 0; i < aircraftList.size(); i++) {

// If the Flight Number entered by the user matches an existing Flight Number, it is removed

	if (aircraftList_[i].GetFlightNumber() == flightNumber) {
		aircraftList_.erase(aircraftList_begin() + i);
	}

// If the Flight Number entered by the user does not match  any existing Flight Numbers, an error appears

	else if (i + 1 == aircraftList_.size() + 1) {
		std::cout << "Flight Number: " << flightNumber << " is not in the system.";
		return;


// Changing the Heading of an existing Aircraft

		void changeHeading(std::string flightNumber, int heading) {
			for (int i = 0; i < aircraftList_.size(); i++) {
// The Aircraft in the system with a matching Flight Number is found
				if (aircraftList_[i].GetFlightNumber() == flightNumber) {
// The Aircraft's new heading is input by the user
					aircraftList_[i].SetHeading(heading);
// The Aircraft's new heading is displayed on the interface
					std::cout << "The heading of Flight Number: " << flightNumber << " has been changed to " << aircraftList_[i].GetHeading() << std::endl;
				}
// If Aircraft is not in the system, an error message appears
				else if (i == aircraftList_.size() - 1) {
					std::cout << "Flight Number: " << flightNumber << " is not in the system." << std::endl;
					return;
				}
			}
		}


// Getting the Heading of an existing Aircraft

		int GetHeading(std::string flightNumber) {
			for (int i = 0; i < aircraftList_.size(); i++) {
// The Aircraft in the system with a matching Flight Number is found
				if (aircraftList_[i].GetFlightNumber() == flightNumber) {
					return aircaftList_[i].GetHeading();
				}
// If Aircraft is not in the system, an error message appears
				else if (i == aircraftList_.size() - 1) {
					std::cout << "Flight Number: " << flightNumber << " is not in the system." << std::endl;

				}
			}
		}


// Changing the Altitude of an existing Aircraft

		void ChangeHeading(std::string flightNumber) {
			for (int i = 0; i < aircraftList.size(); i++) {
// The Aircraft in the system with a matching Flight Number is Found
		    if (aircraftList_[i].GetFlightNumber() == flightNumber) {
// The Aircraft's new Altitude is input by the user
			aircraftList_[i]SetAltitude(altitude)
// The Aircraft's new Altitude is displayed on the interface
			std::cout << "The Altitude of Flight Number: " << flightNumber << " has been changed to " << aircraftList_[i].GetAltitude << std::endl;
// If Aircraft is not in the system, an error message appears
			else if (i == aircraftList_.size() - 1) {
			std::cout << "Flight Number: " << flightNumber << " is not in the system." << std::endl;
			return;
// Warning for Collision 
			for (int h = 0; h < aircraftList_.size(); h++) {
				if (aircraftList_.at(i).GetGridReference() == aircraftList_.at(h).GetGrid() && aircraftList_.at(i).GetFlightNumber() != aircraftList_.at(j).GetFlightNumber()) {
					int number;
					if (altitude > aircraftList_.at(h).GetAltitude()) {
						number = altitude - aircraftList_.at(h).GetAltitude();
					}
					else if (altitude < aircraftList_.at(h).GetAltitude()) {
						number = aircraftList_.at(h).GetAltitude() - altitude;
					}
					else {
						number = 0;
					}
					if (number <= 3000) {
						std::cout << "Warning - Aircraft collision possible between " << aircraftList_.at(i).GetFlightNumber() << " and " << aircraftList_.at(h).GetFlightNumber() << std::endl;
					}
				}
			}
				}
				}
			}


// Getting the Altitude of an existing Aircraft

			int GetAltitude(std::string flightNumber) {
				for (int i = 0; i < aircraftList_.size(); i++) {
// The Aircraft in the system with a matching Flight Number is found
				if (aircraftList_[i].GetFlightNymber() == flightNumber) {
				return aircaftList_[i].GetAltitude();
					}
// If Aircraft is not in the system, an error message appears
				else if (i == aircraftList_.size() - 1) {
				std::cout << "Flight Number: " << flightNumber << " is not in the system." << std::endl;

					}
				}
			}

// Listing the number of Aircrafts in the sector

			Flightsystem::NumAircraftInSector_() {
				numOfAircraft = size(aircraftList_);
				return numOfAircraft;
			}
				

   
