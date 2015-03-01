/* 
=================
Section 4.4 | #2
=================
*/
//2)

#include <iostream>
using namespace std;

int main() {
	int factor;
	float pressure;
	
	cout << "Enter a number factor: ";
	cin >> factor;
	
	switch (factor) {
		case 1:
			pressure = 25.0f;
			break;
		case 2:
			pressure = 36.0f;
			break;
		case 3:
			pressure = 45.0f;
			break;
		default:
			//Any number other than 1, 2, or 3
			pressure = 49.0f;
	}
	
	cout << "The factor: " << factor << " Pressure is: " << pressure << endl;
	return 0;
}

/* 
=================
Section 4.4 | #4
=================
*/
4)

#include<iostream>
using namespace std;

int main()
{
	char code;
	
	cout << "Enter a specification code: ";
	cin >> code;
	
	switch (code) {
		case 'S':
			cout << "The item is space exploration grade.";
			break;
		case 'M':
			cout << "The item is military grade.";
			break;
		case 'C':
			cout << "The item is commercial grade";
			break;
		case 'T':
			cout << "The item is toy grade.";
			break;
		default:
			cout << "An invalid code was entered.";
			cout << endl;
	}
		
	
	//return 0;
}
