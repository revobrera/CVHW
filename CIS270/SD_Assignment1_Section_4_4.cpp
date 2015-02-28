/* 
=================
Exercises 4.4 | #2
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



