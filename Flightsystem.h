//Ethan Heap
//01/11/17
//Flight Control Assignment OOP

#pragma once

#include<iostream>
#include<string>
#include<vector>
#include"Aircraft.h"

class Flightsystem {

private:

	std::string addAircraft_;
	std::string removeAircraft_;
	std::string listAllAircraft_;
	std::string listAllCruisingAircraft_;
	std::string changeHeading_;
	std::string getHeading_;
	int changeAltitude_;
	int getAltitude_;
	int numAircraftInSector_;
	std::vector<Aircraft> aircraft_;
	std::vector<Aircraft> aircraftList_;

public:

	Flightsystem();
	Flightsystem(std::vector<Aircraft> aircraft_, std::vector<Aircraft> aircraftList_, std::string addAircraft_, std::string removeAircraft_, std::string listAllAircraft_,
		std::string listAllCruisingAircraft_, std::string changeHeading_, std::string getHeading_, int changeAltitude_, int getAltitude_,
		int numAircraftInSector_);
	~Flightsystem();

	void SetchangeAltitude_(int changeAltitude);
	int GetchangeAltitude_() const;

	void SetgetAltitude_(int getAltitude);
	int GetgetAltitude_() const;

	void SetnumAircraftInSector_(int numAircraftInSector);
	int GetnumAircraftInSector_() const;

	void SetaddAircraft_(std::string addAircraft);
	std::string GetaddAircraft_()  const;

	void SetremoveAircraft_(std::string removeAircraft);
	std::string GetremoveAircraft_() const;

	void SetlistAllAircraft_(std::string listAllAircraft);
	std::string GetlistAllAircraft_() const;

	void SetlistAllCruisingAircraft_(std::string listAllCruisingAircraft);
	std::string GetlistAllCruisingAircraft_() const;

	void SetchangeHeading_(std::string changeHeading);
	std::string GetchangeHeading_() const;

	void SetgetHeading_(std::string getHeading);
	std::string GetgetHeading_() const;

}
