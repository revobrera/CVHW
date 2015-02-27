///* 
//=================
//Program 4.5 | #1
//=================
//*/
////1)
//
//#include <iostream>
//using namespace std;
//
//int main() {
//	char code;
//	
//	cout << "Enter a specification code: ";
//	cin >> code;
//	
//	if ((code == 'S') || (code == 's'))
//		cout << "The item is space exploration grade.";
//	else if ((code == 'M') || (code =='m'))
//		cout << "The item is military grade.";
//	else if ((code == 'C') || (code =='c'))
//		cout << "The item is commercial grade.";
//	else if ((code == 'T') || (code == 't'))
//		cout << "The item is toy grade.";
//	else	
//		cout << "An invalid code was entered.";
//	cout << endl;
//	
//	return 0;
//}

///* 
//=================
//Program 4.5 | #2
//=================
//*/
////2a)
//
//#include <iostream>
//using namespace std;
//
//int main() {
//	char code;
//	int weight;
//	int bin;
//	
//	cout << "Enter a letter grade: ";
//	cin >> grade;
//	
//	cout << "Enter weight number: ";
//	cin >> weight;
//	
//	if (grade == 'A') || (grade == 'a')
//		if (weight > 35)
//			bin = 1
//		else
//			//Do nothing...
//	//Code will execute t = s + a
//	else
//		//Do nothing...
//
//	return 0;
//}
//
////2b)
//
//#include <iostream>
//using namespace std;
//
//int main() {
//	int grade;
//	int sum;
//	int count;
//	int fail;
//	
//	cout << "Enter a number grade: ";
//	cin >> grade;
//	
//	cout << "Enter a number count: ";
//	cin >> count;
//	
//	fail = 0;
//	sum = 0;
//	if (count < 5)
//		if (grade < 50)
//			fail = fail + 1;
//		else
//			//Do nothing...
//	else
//		//Do nothing...
//	
//	
//	return 0;
//}

/* 
=================
Program 4.5 | #3
=================
*/
//3)


#include <iostream>
using namespace std;

int main()
{
	
	int digout;
	double inlbs;
	
	cout << "Enter the input weight: ";
	cin >> inlbs;
	
	if (inlbs >= 90) digout = 1111;
	if ((inlbs >= 80) && (inlbs <= 90))
		digout = 1110;
	if ((inlbs >= 70) && (inlbs <= 80)) 
		digout = 1101;
	if ((inlbs >= 60) && (inlbs >= 70)) 
		digout = 1100;
	if (inlbs < 1000) digout = 1011;
	
	cout << "The digital output is " << digout << endl;
	
	return 0;
}

