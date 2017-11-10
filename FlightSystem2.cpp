// Name: Ethan Heap
// Date: 8/11/17
// Subject: Object Orientated Programming - Flight Control Simulator

#include "FlightSystem.h"
#include "Aircraft.h"
#include <iostream>
#include <string>
#include <vector>

void FlightSystem::AddAircraft(std::string flightNumber, std::string airline, std::string aircraftType, int groundSpeed, int altitude, std::string gridReference, int heading) {
	//Adds a new Aircraft into the system
	Aircraft airplane(flightNumber, airline, aircraftType, groundSpeed, altitude, gridReference, heading);

	bool isFound = false;
	for (unsigned int i = 0; i < aircraftList_.size(); i++) {
		if (flightNumber == aircraftList_.at(i).GetFlightNumber()) {
			isFound = true;
		}
	}
	//Aircraft is added if Flight Number does not match any existing Flight Numbers
	if (isFound == false) {
		aircraftList_.push_back(Aircraft(airplane));
	}
	//If a duplicate Flight Number exists, error message will display
	else {
		std::cout << "Error! Flight Number: " << flightNumber << " is already in the system." << std::endl;
	}

	//If two Aircrafts are in the same grid reference and within 3000 ft within eachother, an error message will display
	for (int j = 0; j < aircraftList_.size(); j++) {
		if (gridReference == aircraftList_.at(j).GetGridReference() && flightNumber != aircraftList_.at(j).GetFlightNumber()) {
			int number;
			if (altitude > aircraftList_.at(j).GetAltitude()) {
				number = altitude - aircraftList_.at(j).GetAltitude();
			}
			else if (altitude < aircraftList_.at(j).GetAltitude()) {
				number = aircraftList_.at(j).GetAltitude() - altitude;
			}
			else {
				number = 0;
			}
			if (number <= 3000) {
				std::cout << "Warning! - Aircraft collision possible between Flights" << flightNumber << " and " << aircraftList_.at(j).GetFlightNumber() << std::endl;
			}
		}
	}
}

//aircraftList_ vector is returned
std::vector<Aircraft> FlightSystem::ListAllAircraft() {
	return aircraftList_;
}

//crusingAircrafts vector is returned which contains all Aircraft at or above 30000 feet
std::vector<Aircraft> FlightSystem::ListAllCruisingAircraft() {
	std::vector<Aircraft> cruisingAircrafts_;
	//Copy all cruising aircrafts into a new vector and return it
	for (unsigned int i = 0; i < aircraftList_.size(); i++) {
		if (aircraftList_.at(i).GetAltitude() >= 30000) {
			cruisingAircrafts_.push_back(aircraftList_.at(i));
		}
	}
	return cruisingAircrafts_;
}

//Returns the number of Aircraft currently within the system.
int FlightSystem::numAircraftInSector() {
	// int numAircraft is initialised
	int numAircraft = aircraftList_.size();
	return numAircraft;
}

// A selected Aircraft is removed with a matching Flight Number that exists in the system
void FlightSystem::RemoveAircraft(std::string flightNumber) {
// Checks that a matching Flight Number exists
	bool isFound = false; 
	for (unsigned int i = 0; i < aircraftList_.size(); i++) {
		if (aircraftList_.at(i).GetFlightNumber() == flightNumber) {
			isFound = true; 
			aircraftList_.erase(aircraftList_.begin() + i);
			break;
		}
	}

	//Error message will display if Flight Number entered has no match
	if (isFound == false) {
		std::cout << "Error! Flight Number: " << flightNumber << " is not in the system" << std::endl;
	}
}

//Heading of an existing Flight Number can be changed
void FlightSystem::ChangeHeading(std::string flightNumber, int heading) {
	bool isFound = false;    

	for (unsigned int i = 0; i < aircraftList_.size(); i++) {
		if (aircraftList_.at(i).GetFlightNumber() == flightNumber) {
			isFound = true;   

//Update the flight heading
			aircraftList_.at(i).SetHeading(heading);

//Displays UI message to indicate successful change of heading
			std::cout << "Heading of Flight Number: " << aircraftList_.at(i).GetFlightNumber() << " has been changed to " << heading << std::endl;

			break;
		}
	}

	//Error message is displayed if Flight Number does not match
	if (isFound == false) {
		std::cout << "Error! Flight: " << flightNumber << " is not in the system" << std::endl;
	}
}
   // Returns a heading
int FlightSystem::GetHeading(std::string flightNumber) {
	bool isFlightInSystem = false; 

	for (unsigned int i = 0; i < aircraftList_.size(); i++) {
		if (aircraftList_.at(i).GetFlightNumber() == flightNumber) {
			isFlightInSystem = true; 

			return aircraftList_.at(i).GetHeading();
			break;
		}
	}

	//Error message is displayed if Flight Number does not match
	if (isFlightInSystem == false) {
		std::cout << "Error! Flight: " << flightNumber << " is not in the system" << std::endl;
		return -1;
	}
}

// Altitude of an existing Flight Number can be changed
void FlightSystem::ChangeAltitude(std::string flightNumber, int altitude) {
	bool isFlightInSystem = false;  
	for (int i = 0; i < aircraftList_.size(); i++) {
		if (aircraftList_.at(i).GetFlightNumber() == flightNumber) {
			isFlightInSystem = true;  
			aircraftList_.at(i).SetAltitude(altitude);
// Displays a UI to indicate successful Altitude change
			std::cout << "Altitude of Flight Number: " << flightNumber << " has been changed to " << altitude << std::endl;

// After Altitude has been changed, if two Aircrafts are in the same grid reference and within 3000 ft within eachother, an error message will display
			for (int j = 0; j < aircraftList_.size(); j++) {
				if (aircraftList_.at(i).GetGridReference() == aircraftList_.at(j).GetGridReference() && aircraftList_.at(i).GetFlightNumber() != aircraftList_.at(j).GetFlightNumber()) {
					int number;
					if (altitude > aircraftList_.at(j).GetAltitude()) {
						number = altitude - aircraftList_.at(j).GetAltitude();
					}
					else if (altitude < aircraftList_.at(j).GetAltitude()) {
						number = aircraftList_.at(j).GetAltitude() - altitude;
					}
					else {
						number = 0;
					}
					if (number <= 3000) {
						std::cout << "Warning - Aircraft collision possible between Flights: " << aircraftList_.at(i).GetFlightNumber() << " and " << aircraftList_.at(j).GetFlightNumber() << std::endl;
					}
				}
			}
		}
	}

	// Error message is displayed if Flight Number does not match
	if (isFlightInSystem == false) {
		std::cout << "Error! Flight: " << flightNumber << " is not in the system" << std::endl;
	}
}

// Returns an Altitude value to matched Flight Number
int FlightSystem::GetAltitude(std::string flightNumber) {
	bool isFlightInSystem = false; 

	for (unsigned int i = 0; i < aircraftList_.size(); i++) {
		if (aircraftList_.at(i).GetFlightNumber() == flightNumber) {
			isFlightInSystem = true;   

			return aircraftList_.at(i).GetAltitude();
			break;
		}
	}

	// Error message is displayed if Flight Number does not match
	if (isFlightInSystem == false) {
		std::cout << "Error! Flight Number: " << flightNumber << " is not in the system" << std::endl;
		return -1;
	}
}
