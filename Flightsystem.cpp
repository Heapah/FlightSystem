//Ethan Heap

//01/11/17

//Flight Control Assignment OOP



#pragma once



#include<iostream>

#include<string>

#include<vector>

#include"Flightsystem.h"



Flightsystem::~Flightsystem()

{

}



//Getters and Setters for Flightsystem



Flightsystem::Flightsystem(std::vector<Aircraft> aircraft, std::vector<Aircraft> aircraftList, std::string addAircraft, std::string removeAircraft, std::string listAllAircraft,

	std::string listAllCruisingAircraft, std::string changeHeading, std::string getHeading, int changeAltitude, int getAltitude, int numAircraftInSector) :

	addAircraft_{ addAircraft }, removeAircraft_{ removeAircraft }, listAllAircraft_{ listAllAircraft }, listAllCruisingAircraft_{ listAllCruisingAircraft },

	changeHeading_{ changeHeading }, getHeading_{ getHeading }, changeAltitude_{ changeAltitude }, getAltitude_{ getAltitude }, numAircraftInSector_{ numAircraftInSector } {}



void Flightsystem::SetaddAircraft_(std::string addAircraft) {

	addAircraft_ = addAircraft;

}

std::string Flightsystem::GetaddAircraft_() const {

	return addAircraft_;

}





void Flightsystem::SetremoveAircraft_(std::string removeAircraft) {

	removeAircraft_ = removeAircraft;

}

std::string Flightsystem::GetremoveAircraft_() const {

	return removeAircraft_;

}





void Flightsystem::SetlistAllAircraft_(std::string listAllAircraft) {

	listAllAircraft_ = listAllAircraft;

}

std::string Flightsystem::GetlistAllAircraft_() const {

	return listAllAircraft_;

}





void Flightsystem::SetlistAllCruisingAircraft_(std::string listAllCruisingAircraft) {

	listAllCruisingAircraft_ = listAllCruisingAircraft;

}

std::string Flightsystem::GetlistAllCruisingAircraft_() const {

	return listAllCruisingAircraft_;

}





void Flightsystem::SetchangeHeading_(std::string changeHeading) {

	changeHeading_ = changeHeading;

}

std::string Flightsystem::GetchangeHeading_() const {

	return changeHeading_;

}





void Flightsystem::SetgetHeading_(std::string getHeading) {

	getHeading_ = getHeading;

}

std::string Flightsystem::GetgetHeading_() const {

	return getHeading_;

}





void Flightsystem::SetchangeAltitude_(int changeAltitude) {

	changeAltitude_ = changeAltitude;

}

int Flightsystem::GetchangeAltitude_() const {

	return changeAltitude_;

}





void Flightsystem::SetgetAltitude_(int getAltitude) {

	getAltitude_ = getAltitude;

}

int Flightsystem::GetgetAltitude_() const {

	return getAltitude_;

}





void Flightsystem::SetnumAircraftInSector_(int numAircraftInSector) {

	numAircraftInSector_ = numAircraftInSector;

}

int Flightsystem::GetnumAircraftInSector_() const {

	return numAircraftInSector_;

}

// Adding an Aircraft to the list

void Flightsystem::addAircraft_(std::string flightNumber, std::string airline, std::string airlineType, int altitude, int groundSpeed, std::string gridReference, int heading) {
	Aircraft A(flightNumber, airline, airlineType, altitude, groundSpeed, gridReference, heading);
}

bool isFound = false
for (int i = 0; i < aircraftList_.size(); i++) {
	if (aircraftList_[i].GetFlightNumber() == flightNumber) {
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

std::vector<Aircraft> Flightsystem:: listAllAircraft_
