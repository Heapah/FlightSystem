// Name: Ethan Heap
// Date: 8/11/17
// Subject: Object Orientated Programming - Flight Control Simulator

#include "Aircraft.h"
#include "FlightSystem.h"

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
// List of Aircraft variables
	string flightNumber;
	string airline;
	string aircraftType;
	string gridReference;
	int groundSpeed;
	int altitude;
	int heading;

	//user input variable
	char useroption;

	FlightSystem airplane;

	do {

	// Main Title Screen

		cout << "\nFlight Traffic Control Simulator\n" << endl;

		cout << "Please use the key specified to progress, or enter X to end the program." << endl;

		cout << endl << "Add / Remove Aircraft Options" << endl;
		cout << "Add new aircraft - N" << endl;
		cout << "Remove an aircraft - R\n" << endl;

		cout << "Aircraft List Options" << endl;
		cout << "List of all aircrafts - L" << endl;
		cout << "List of cruising aircrafts - C" << endl;
		cout << "Number of aircrafts currently within the system - S\n" << endl;

		cout << "Aircraft Heading Operations Options" << endl;
		cout << "Change the Heading of an aircraft - H" << endl;
		cout << "Find the Heading of an aircraft - h" << endl;
		cout << endl;

		cout << "Aircraft Altitude Options" << endl;
		cout << "Change the altitude of an aircraft - A" << endl;
		cout << "Find the altitude of an aircraft - a" << endl;
		cout << endl;

		cin >> useroption;

		//check user puts in valid input
		if (!(useroption == 'N' || useroption == 'R' || useroption == 'L' || useroption == 'C' || useroption == 'S' || useroption == 'H' || useroption == 'h' || useroption == 'A' || useroption == 'a' || useroption == 'X')) {
			while (!(useroption == 'N' || useroption == 'R' || useroption == 'L' || useroption == 'C' || useroption == 'S' || useroption == 'H' || useroption == 'h' || useroption == 'A' || useroption == 'a' || useroption == 'X')) {
				cout << endl << "Invalid input! Please use the key specified to navigate the menu." << endl;
				cin >> useroption;
				cout << endl;
				if (useroption == 'N' || useroption == 'R' || useroption == 'L' || useroption == 'C' || useroption == 'S' || useroption == 'H' || useroption == 'h' || useroption == 'A' || useroption == 'a' || useroption == 'X') {
					break;
				}
			}
		}

		// Adds new object
		if (useroption == 'N') {
			cout << endl << "- New Aircraft -" << endl;

			cout << "Flight number: ";
			cin >> flightNumber;

			cout << endl << "Airline: ";
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			getline(cin, airline);
			// Airline string validation: Minimum character size 4, Maximum character size 20 
			if (!(airline.length() >= 4 && airline.length() <= 20)) {
				do {
					cout << endl << "Please enter a valid airline name, between 4 and 20 characters. Airline: ";
					cin.clear();
					cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
					getline(cin, airline);
					if (airline.length() >= 4 && airline.length() <= 20) {
						break;
					}
				} while (airline.length() >= 4 && airline.length() <= 20);

				if (airline.length() >= 4 && airline.length() <= 20) {
					break;
				}
			}

			cout << endl << "Aircraft type: ";
			cin >> aircraftType;

			cout << endl << "Ground speed: ";
			cin >> groundSpeed;
			// groundSpeed validation: min value 0, max value 800
			if (groundSpeed > 800 || groundSpeed < 0) {
				do {
					cout << endl << "Please enter a valid speed between 0 and 800. Ground speed: ";
					cin >> groundSpeed;
				} while (groundSpeed > 800 || groundSpeed < 0);
			}

			cout << endl << "Altitude: ";
			cin >> altitude;
			// altitude validation: min value 0, max value 60,000
			if (altitude > 60000 || altitude < 0) {
				do {
					cout << endl << "Enter valid altitude between 0 - 60,000. Altitude: ";
					cin >> altitude;
				} while (altitude > 60000 || altitude < 0);
			}

			cout << endl << "Grid reference: ";
			cin >> gridReference;

			cout << endl << "Heading: ";
			cin >> heading;
			// Heading validation: Minimum value of 0, Maximum value of 360
			if (heading > 360 || heading < 0) {
				do {
					cout << endl << "Please enter valid heading between 0 and 360. Heading: ";
					cin >> heading;
				} while (heading > 360 || heading < 0);
			}

			airplane.AddAircraft(flightNumber, airline, aircraftType, groundSpeed, altitude, gridReference, heading);

			cout << "\nEnter X to end the program, or Y to continue: " << endl;
			cin >> useroption;
		}

		//delete aircraft
		if (useroption == 'R') {
			cout << endl << "- Remove Aircraft -" << endl;

			cout << "Enter the flight number of the aircraft you wish to delete from the system: ";

			cin >> flightNumber;

			airplane.RemoveAircraft(flightNumber);

			cout << "\nEnter X to end the program, or Y to continue: " << endl;
			cin >> useroption;
		}

		//Prints a list of all aircrafts to console
		if (useroption == 'L') {
			cout << endl << "- List Of All Aircrafts -" << endl;

			std::vector<Aircraft> aircraftList(airplane.ListAllAircraft());

			cout << "Flight Number" << setw(15) << "Airline" << setw(15) << "Aircraft Type" << setw(15) << "Grid Reference" << setw(15) << "Ground Speed" << setw(15) << "Altitude" << setw(15) << "Heading" << setw(15);

			int tempListSize = aircraftList.size();
			for (int i = 0; i < tempListSize; i++) {
				cout << aircraftList.at(i).GetFlightNumber() << setw(15);
				cout << aircraftList.at(i).GetAirline() << setw(15);
				cout << aircraftList.at(i).GetAircraftType() << setw(15);
				cout << aircraftList.at(i).GetGridReference() << setw(15);
				cout << aircraftList.at(i).GetGroundSpeed() << setw(15);
				cout << aircraftList.at(i).GetAltitude() << setw(15);	
				cout << aircraftList.at(i).GetHeading() << setw(15) << endl;
			}

			cout << "Enter X to end the program, or Y to continue: " << endl;
			cin >> useroption;
		}

		//print list of cruising aircrafts to console
		if (useroption == 'C') {
			cout << endl << "- List Of Cruising Aircrafts (>= 30,000 ft) -" << endl;

			cout << "Flight Number" << setw(15) << "Airline" << setw(15) << "Aircraft Type" << setw(15) << "Grid Reference" << setw(15) << "Ground Speed" << setw(15) << "Altitude" << setw(15) << "Heading" << setw(15);

			std::vector<Aircraft> cruisingAircrafts(airplane.ListAllCruisingAircraft());

			int tempListSize = cruisingAircrafts.size();

			for (int i = 0; i < tempListSize; i++) {
				cout << cruisingAircrafts.at(i).GetFlightNumber() << setw(15);
				cout << cruisingAircrafts.at(i).GetAirline() << setw(15);
				cout << cruisingAircrafts.at(i).GetAircraftType() << setw(15);
				cout << cruisingAircrafts.at(i).GetGridReference() << setw(15);
				cout << cruisingAircrafts.at(i).GetGroundSpeed() << setw(15);
				cout << cruisingAircrafts.at(i).GetAltitude() << setw(15);
				cout << cruisingAircrafts.at(i).GetHeading() << setw(15) << endl;
			}

			cout << "Enter X to end the program, or Y to continue: " << endl;
			cin >> useroption;
		}

		// Return number of Aircrafts in the sector
		if (useroption == 'S') {
			cout << endl << "Number of Aircrafts in the system" << endl;

			cout << "Number of Aircrafts currently in the sector: " << airplane.numAircraftInSector() << endl;

			cout << "Enter X to end the program, or Y to continue: " << endl;
			cin >> useroption;
		}

		//  Change Heading of Aircraft by Flight Number
		if (useroption == 'H') {
			cout << endl << "- Change Aircraft Heading -" << endl;

			cout << "Enter the Flight Number of the aircraft: ";

			cin >> flightNumber;

			cout << endl << "Enter the new Heading for the aircraft: ";

			cin >> heading;

			airplane.ChangeHeading(flightNumber, heading);

			cout << "Enter X to end the program, or Y to continue: " << endl;
			cin >> useroption;
		}

		//find heading of aircraft by flight number
		if (useroption == 'h') {
			cout << endl << "- Find Aircraft Heading -" << endl;

			cout << "Enter the Flight Number of the aircraft: ";

			cin >> flightNumber;

			cout << endl << "Heading of flight number " << flightNumber << " is: " << airplane.GetHeading(flightNumber) << endl;

			cout << "Enter X to end the program, or Y to continue: " << endl;
			cin >> useroption;
		}

		//change altitude of aircraft by flight number
		if (useroption == 'A') {
			cout << endl << "- Change Aircraft Altitude -" << endl;

			cout << "Enter the Flight Number of the aircraft: ";

			cin >> flightNumber;

			cout << endl << "Enter the new Altitude for the aircraft: ";

			cin >> altitude;

			airplane.ChangeAltitude(flightNumber, altitude);

			cout << "Enter X to end the program, or Y to continue: " << endl;
			cin >> useroption;
		}

		//find altitude of aircraft by flight number
		if (useroption == 'a') {
			cout << endl << "- Find Aircraft Altitude -" << endl;

			cout << "Enter the Flight Number of the aircraft: ";

			cin >> flightNumber;

			cout << endl << "Altitude of flight number " << flightNumber << " is: " << airplane.GetAltitude(flightNumber) << endl;

			cout << "Enter X to end the program, or Y to continue: " << endl;
			cin >> useroption;
		}
	} while (useroption != 'X');
	return 0;
}
