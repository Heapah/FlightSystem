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

