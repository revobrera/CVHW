/* 
=================
Program 4.5 | #1
=================
*/
//1)

#include <iostream>
using namespace std;

int main() {
	char code;
	
	cout << "Enter a specification code: ";
	cin >> code;
	
	if ((code == 'S') || (code == 's'))
		cout << "The item is space exploration grade.";
	else if ((code == 'M') || (code =='m'))
		cout << "The item is military grade.";
	else if ((code == 'C') || (code =='c'))
		cout << "The item is commercial grade.";
	else if ((code == 'T') || (code == 't'))
		cout << "The item is toy grade.";
	else	
		cout << "An invalid code was entered.";
	cout << endl;
	
	return 0;
}
