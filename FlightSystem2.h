// Name: Ethan Heap
// Date: 8/11/17
// Subject: Object Orientated Programming - Flight Control Simulator

#pragma once
#include "Aircraft.h"
#include <iostream>
#include <string>
#include <vector>

class FlightSystem {
private:
	std::vector<Aircraft> aircraftList_;

public:
	void AddAircraft(std::string flightNumber, std::string airline, std::string aircraftType, int groundSpeed, int altitude, std::string gridReference, int heading);

	std::vector<Aircraft> ListAllAircraft();

	std::vector<Aircraft> ListAllCruisingAircraft();

	int numAircraftInSector();

	void RemoveAircraft(std::string flightNumber);

	void ChangeHeading(std::string flightNumber, int heading);

	int GetHeading(std::string flightNumber);

	void ChangeAltitude(std::string flightNumber, int altitude);

	int GetAltitude(std::string flightNumber);

};
