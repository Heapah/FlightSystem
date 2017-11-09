
//Name: Ethan Heap

//Date: 01/11/17

//Subject: OOP - Flight Control Assignment



#include<iostream>

#include<string>

#include<vector>

#include"Flightsystem.h"

#include"Aircraft.h"

using namespace std;



int main() {

	std::string flightNumber_;

	std::string airline_;

	std::string aircraftType_;

	std::string gridReference_;

	int groundSpeed_ = 0;

	int altitude_ = 0;

	int heading_ = 0;

	int useroption;

	bool menu = true;

	Flightsystem s1(std::string flightNumber, std::string airline, std::string aircraftType, std::string gridReference,
		int groundSpeed, int altitude, int heading, int useroption);

	do
	{
	// The following options are printed for the user to select from

		std::cout << "Please select one of the following options." << std::endl;
		std::cout << "1.) Add an Aircraft to the system." << std::endl;
		std::cout << "2.) Change the heading of an Aircraft." << std::endl;
		std::cout << "3.) Change the altitude of an Aircraft." << std::endl;
		std::cout << "4.) Remove an Aircraft from the system." << std::endl;
		std::cout << "5.) List every Aircraft in the system." << std::endl;
		std::cout << "6.) List every Aircraft 30,000 feet or higher in the system." << std::endl;
		std::cout << "7.) List every Aircraft in the sector." << std::endl;
		std::cout << "8.) Close down the system." << std::endl;

			
	}
	
	std::cin >> useroption;
	switch (useroption) {
	
	
	case 1:
	
	// Data of the Aircraft is selected and added to the system

	{
		std::cout << "Add an Aircraft to the system." std::endl;
		std::cout << "Please enter the Flight Number." std::endl;
		std::cin >> flightNumber_;
		std::cout << "Please enter the Airline." std::endl;
		std::cin >> airline_;
		std::cout << "Please enter the type of Aircraft." std::endl;
		std::cin >> aircraftType_;
		std::cout << "Please enter the grid reference of the Aircraft."
		std::cin >> gridReference_;
		std::cout << "Please enter the ground speed of the Aircraft." std::endl;
		std::cin >> groundSpeed_;
		std::cout << "Please enter the altitude of the Aircraft." std::endl;
		std::cin >> altitude_;
		std::cout << "Please enter the heading of the Aircraft." std::endl;
		std::cin >> heading_;

	}
	}


	case 2:

	// The heading of the Aircraft can be changed

	case 3:

	// The Altitude of the Aircraft can be changed

	case 4:

	// A selected Aircraft can be removed from the system

	case 5:

	// Creates a list of all Aircrafts in the system

		std::cout << "List of all Aircrafts in the system" << std::endl;
		std::vector <Aircraft> list;
		list = s1.listAllAircraft();
		std::cout << "Flight Number      Airline      Aircraft Type      Grid Reference      Ground Speed      Altitude      Heading" std::endl;



	case 6:

	// Creates a list of Aircrafts at or above a selected altitude in the system

	case 7:

	// Creates a list of Aircrafts in the sector

	case 8:

	// Shuts down the system











}
