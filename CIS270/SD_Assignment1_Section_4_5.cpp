/* 
=================
Section 4.5 | #7
=================
*/
//7)

#include <cmath>
#include <string>
#include <iostream>
using namespace std;

int main() {
	
	char unitSystem;
	float c; //conversion factor
		//.278 m-hr/km-s or 1.47 ft-hr/mi-sec
	float v; //speed
	float t; //reaction time in seconds
	float g; //acceleration caused by gravity
		//9.81 m/s^2 or 32.2 ft/sec^2
	float f; //road's coeeficient of friction
	float G; //road's grade as a decimal
	float SSD; // Stopping Distance
	string unitStr; // feet or meters
	
	
	cout << "This program is a Stopping Sight Distance(SSD) calculator:" << endl;
	cout << "Please select a unit system to use." << endl;
	cout << "Enter (1) for metric system or (2) for U.S. customary units: " << endl;
	cin >> unitSystem;
	
	switch (unitSystem) {
		case '1':
			c = .278f;
			g = 9.81f;
			unitStr = "meters";
			break;
		case '2':
			c = 1.47f;
			g = 32.2f;
			unitStr = "feet";
			break;
		default:
			cout << "Invalid entry: " << unitSystem << "... exiting" << endl;
			break;
	}
	
	cout << "Enter number value for speed: ";
	cin >> v;
	
	cout << "Enter number value for reaction time in seconds: ";
	cin >> t;

	cout << "Enter number value for the road's coeficient of friction: ";
	cin >> f;

	cout << "Enter number value for the road grade as a decimal: ";
	cin >> G;
	
	//SSD EQUATION
	SSD = c * pow(v, 2);
		//cout << "SSD: " << SSD << endl;
	SSD = SSD/(2 * g * (f + G));
		//cout << "SSD: " << SSD << endl;
	SSD = SSD + v * t;
		//cout << "SSD: " << SSD << endl;
	SSD = c * (SSD);
		cout << "SSD: " << SSD << " " << unitStr << endl;
	

	return 0;
}


