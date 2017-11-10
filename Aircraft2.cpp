// Name: Ethan Heap
// Date: 8/11/17
// Subject: Object Orientated Programming - Flight Control Simulator

#include "Aircraft.h"

//default Aircraft constructor
Aircraft::Aircraft()
{
}

//Custom Aircraft constructor
Aircraft::Aircraft(std::string flightNumber, std::string airline, std::string aircraftType, int groundSpeed, int altitude, std::string gridReference, int heading)
{

	flightNumber_ = flightNumber;
	airline_ = airline;
	aircraftType_ = aircraftType;
	gridReference_ = gridReference;
	groundSpeed_ = groundSpeed;
	altitude_ = altitude;
	heading_ = heading;
}

//Getters and Setters

//Flight Number - Setters and Getters

void Aircraft::SetFlightNumber(std::string flightNumber)
{
	flightNumber_ = flightNumber;
}

std::string Aircraft::GetFlightNumber() const
{
	return flightNumber_;
}

//Airline - Setters and Getters

void Aircraft::SetAirline(std::string airline)
{
	airline_ = airline;
}

std::string Aircraft::GetAirline() const
{
	return airline_;
}

//Aircraft Type - Setters and Getters

void Aircraft::SetAircraftType(std::string aircraftType)
{
	aircraftType_ = aircraftType;
}

std::string Aircraft::GetAircraftType() const
{
	return aircraftType_;
}

//Grid Reference - Setters and Getters

void Aircraft::SetGridReference(std::string gridReference)
{
	gridReference_ = gridReference;
}

//Ground Speed - Setters and Getters

void Aircraft::SetGroundSpeed(int groundSpeed)
{
	groundSpeed_ = groundSpeed;
}

int Aircraft::GetGroundSpeed() const
{
	return groundSpeed_;
}

//Altitude - Setters and Getters

void Aircraft::SetAltitude(int altitude)
{
	altitude_ = altitude;
}

int Aircraft::GetAltitude() const
{
	return altitude_;
}

std::string Aircraft::GetGridReference() const
{
	return gridReference_;
}

//Heading - Setters and Getters
void Aircraft::SetHeading(int heading)
{
	heading_ = heading;
}

int Aircraft::GetHeading() const
{
	return heading_;
}
