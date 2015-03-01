/* 
======================
Chapter 4 Summary | #9
======================
*/
//9)

#include <iostream>
using namespace std;

int main() {
	
	int inputNum;
	int divNum;
	
	cout << "This program identifies if the input number is odd or even" << endl;
	cout << "Please enter a whole number: " << endl;
	cin >> inputNum;
	cout << "Please enter divisible number: " << endl;
	cin >> divNum;
	
	
  	if ( inputNum % 2 == 0 )
       cout << inputNum << " is an even number. " << endl;
  	else   
       cout << inputNum << " is an odd number. " << endl;
  	
  	
  	
	if ( inputNum % divNum == 0 )
       cout << inputNum << " is divisible by " << divNum << endl;	
  	else   
       cout << inputNum << " is not divisible by " << divNum << endl;	
	

	return 0;
}


