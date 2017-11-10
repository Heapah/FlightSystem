// Name: Ethan Heap
// Date: 8/11/17
// Subject: Object Orientated Programming - Flight Control Simulator



#pragma once
#include <iostream>
#include <string>
#include <vector>

class Aircraft {
private:
	std::string flightNumber_;
	std::string airline_;
	std::string aircraftType_;
	std::string gridReference_;
	int groundSpeed_;
	int altitude_;
	int heading_;

public:
	//default and custom constructors
	Aircraft();
	Aircraft(std::string flightNumber, std::string airline, std::string aircraftType, int groundspeed, int altitude, std::string gridReference, int heading);

	//Getters and Setters
	void SetFlightNumber(std::string flightNumber);
	std::string GetFlightNumber() const;

	void SetAirline(std::string airline);
	std::string GetAirline() const;

	void SetAircraftType(std::string aircraftType);
	std::string GetAircraftType() const;

	void SetGroundSpeed(int groundSpeed);
	int GetGroundSpeed() const;

	void SetAltitude(int altitude);
	int GetAltitude() const;

	void SetGridReference(std::string gridReference);
	std::string GetGridReference() const;

	void SetHeading(int heading);
	int GetHeading() const;
};
