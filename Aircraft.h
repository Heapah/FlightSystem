// Ethan Heap
// 01/11/17
// Flight Control Assignment OOP

#pragma once

#include<iostream>
#include<string>

class Aircraft {
	
private:

std::string flightNumber_;
std::string airline_;
std::string aircraftType_;
int groundSpeed_;
int altitude_;
std::string gridReference_;
int heading_;

public:

Aircraft();
Aircraft(std::string flightNumber, std::string airline, std::string aircraftType, int groundspeed, int altitude, string gridReference, int heading);
void SetFlightNumber(std::string flightNumber);
std::string GetFlightNumber();
void SetAirline(std::string airline);
std::string GetAirline();
void SetAircraftType(std::string aircraftType);
std::string GetAircraftType();
void SetGroundSpeed(int groundSpeed);
int GetGroundSpeed();
void SetAltitude(int altitude);
int GetAltitude();
void SetGridReference(std::string girdReference);
std::string GetGridReference();
void SetHeading(int heading);
int GetHeading();
};

