//Name: Ethan Heap

//Date: 01/11/17

//Subject: OOP - Flight Control Assignment



#include"Aircraft.h"

#include<iostream>

#include<string>

#include<vector>

#include"Flightsystem.h"

#include<iomanip>

using namespace std;



int main() {

	std::string flightNumber_;

	std::string airline_;

	std::string aircraftType_;

	std::string grid_;

	int speed_ = 0;

	int altitude_ = 0;

	int heading_ = 0;

	int useroption;

	bool menu = true;

	Flightsystem s1(std::string flightNumber, std::string airline, std::string aircraftType, std::string grid,
		int speed, int altitude, int heading, int useroption);

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

		std::cin >> useroption;
		switch (useroption) {

		case 1:

			// Data of the Aircraft is selected and added to the system

		{
			std::cout << "Add an Aircraft to the system." << std::endl;
			std::cout << "Please enter the Flight Number." << std::endl;
			std::cin >> flightNumber_;
			std::cout << "Please enter the Airline." << std::endl;
			std::cin >> airline_;
			std::cout << "Please enter the type of Aircraft." << std::endl;
			std::cin >> aircraftType_;
			std::cout << "Please enter the grid reference of the Aircraft." << std::endl;
			std::cin >> gridReference_;
			std::cout << "Please enter the ground speed of the Aircraft." << std::endl;
			std::cin >> groundSpeed_;
			std::cout << "Please enter the altitude of the Aircraft." << std::endl;
			std::cin >> altitude_;
			std::cout << "Please enter the heading of the Aircraft." << std::endl;
			std::cin >> heading_;

			// Validation

			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			if (!(airline.length() >= 4 && airline.length() <= 20)) {
				getline(cin, airline);
				do {
					cout << endl << "Please enter a valid airline name between 4 and 20 characters. Airline: ";
					cin.clear();
					cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					getline(cin, airline);
					if (airline.length() >= 4 && airline.length() <= 20) {
						break;
					}
				} while (airline.length() >= 4 && airline.length() <= 20);

				if (airline.length() >= 4 && airline.length <= 20) {
					break;
					cout << endl << "Please enter the Aircraft Type: ";
			cin >> aircraftType_;

			cout << endl << "Please enter the Speed of the Aircraft: ";
			cin >> speed_;
			// groundSpeed validation: min value 0, max value 800
			if (speed_ < 0 || speed_ > 800) {
				do {
					cout << endl << "Please enter a valid speed between 0 - 800. Speed: ";
					cin >> speed_;
				} while (speed_ < 0 || speed_ > 800);
			}

			cout << endl << "Please enter the Altitude of the Aircraft: ";
			cin >> altitude_;
			// altitude validation: min value 0, max value 60,000
			if (altitude_ < 0 || altitude_ > 60000) {
				do {
					cout << endl << "Please enter a valid Altitude between 0 - 60,000. Altitude: ";
					cin >> altitude_;
				} while (altitude_ < 0 || altitude_ > 60000);
			}

			cout << endl << "Please enter the Grid: ";
			cin >> grid_;
			
			cout << endl << "Heading: ";
			cin >> heading_;
			// heading validation: min value 0, max value 360
			if (heading_ < 0 || heading_ > 360) {
				do {
					cout << endl << "Enter valid heading between 0 - 360. Heading: ";
					cin >> heading_;
				} while (heading_ < 0 || heading_ > 360);
			}

				}
			}


		case 2:

			// The heading of the Aircraft can be changed
		{
			cout << endl << "- Change Aircraft Heading -" << endl;

			cout << "Enter the Flight Number of the aircraft: ";

			cin >> flightNumber_;

			cout << endl << "Enter the new Heading for the aircraft: ";
			
			cin >> heading_;

			s1.ChangeHeading(flightNumber_, heading_);

			break;
		}
		case 3:

			// The Altitude of the Aircraft can be changed
		{
			cout << endl << "- Change Aircraft Altitude -" << endl;

			cout << "Enter the Flight Number of the aircraft: ";

			cin >> flightNumber_;

			cout << endl << "Enter the new Altitude for the aircraft: ";

			cin >> altitude_;

			s1.ChangeAltitude(flightNumber_, altitude_);

			break;
		
		}

		case 4:

			// A selected Aircraft can be removed from the system

		{
			cout << endl << "Remove an Aircraft from the system" << endl;

			cout << "Please enter the Flight Number of the Aircraft to delete from the system: ";

			cin >> flightNumber_;

			s1.RemoveAircraft(flightNumber_);
		
			break;

		}

		case 5:

			// Creates a list of all Aircrafts in the system
		{
			std::cout << "List of all Aircrafts in the system" << std::endl;
			std::vector <Aircraft> list;
			list = s1.listAllAircraft();
			std::cout << "Flight Number" << setw(10) << "Airline" << setw(10) << "Aircraft Type" << setw(10) << "Grid" << setw(10) << "Speed" << setw(10) << "Altitude" << setw(10) << "Heading" << std::endl;

			std::vector<Aircraft> cruisingAircrafts(s1.ListAllCruisingAircraft());

			int tempListSize = cruisingAircrafts.size();

			for (int i = 0; i < tempListSize; i++) {
				cout << cruisingAircrafts.at(i).GetFlightNumber() << setw(15);
				cout << cruisingAircrafts.at(i).GetAirline() << setw(15);
				cout << cruisingAircrafts.at(i).GetAircraftType() << setw(15);
				cout << cruisingAircrafts.at(i).GetSpeed() << setw(15);
				cout << cruisingAircrafts.at(i).GetAltitude() << setw(15);
				cout << cruisingAircrafts.at(i).GetGrid() << setw(15);
				cout << cruisingAircrafts.at(i).GetHeading() << setw(15) << endl;
				break;
			}
		case 6:

			// Creates a list of Aircrafts at or above a selected altitude in the system
		{
			cout << endl << "List of all Cruising Aircrafts in the system" << endl;

			cout << "Flight Number" << setw(10) << "Airline" << setw(10) << "Aircraft Type" << setw(10) << "Grid" << setw(10) << "Speed" << setw(10) << "Altitude" << setw(10) << "Heading" << setw(10);

			std::vector<Aircraft> cruisingAircrafts(s1.ListAllCruisingAircraft());

			int tempListSize = cruisingAircrafts.size();

			for (int i = 0; i < tempListSize; i++) {
				cout << cruisingAircrafts.at(i).GetFlightNumber() << setw(10);
				cout << cruisingAircrafts.at(i).GetAirline() << setw(10);
				cout << cruisingAircrafts.at(i).GetAircraftType() << setw(10);
				cout << cruisingAircrafts.at(i).GetSpeed() << setw(10);
				cout << cruisingAircrafts.at(i).GetAltitude() << setw(10);
				cout << cruisingAircrafts.at(i).GetGrid() << setw(10);
				cout << cruisingAircrafts.at(i).GetHeading() << setw(10) << endl;

				break;
			}

		case 7:

			// Creates a list of Aircrafts in the sector
		{
			cout << endl << "The number of Aircrafts in the Sector." << endl;

			cout << "The number of Aircrafts currently in the Sector is: " << s1.numAircraftInSector() << endl;

			break;

		}

		case 8:

			// Shuts down the system


