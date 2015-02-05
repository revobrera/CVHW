//Cesar Villamil
//CIS 165 Fundamentals of Programming
//April 22nd, 2014
//Looping structures with arrays

#include <fstream>
#include <stdio.h>      
#include <stdlib.h>
#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

int main() {
	//variables
	int inVal[10],
		inMax,
		inMin,
		inTot,
		k,
		arrlen;
	
	//clears the screen
	system("cls");
	
	//ask the user to input 5 values
	for (k = 0; k < 6; k++) {
		if (k == 5) {
			break;
		}
		cout << "Please enter the value for # " << k << endl;
		cin >> inVal[k];
	}
	
	k = 0; //reset k
	
	//finding the maximum number
	inMax = inVal[0];
	for (k = 0; k < 5; k++) {
		if (inVal[k] > inMax)
			inMax = inVal[k];
			//cout << "The maximum number is " << inVal[k] << endl;
	}
	
	k = 0; //reset k
	
	//finding the minimum number
	inMin = inVal[0];
	for (k = 0; k < 5; k++) {			
		if (inVal[k] < inMin)
			inMin = inVal[k];
			//cout << "The minimum number is " << inVal[k] << endl;	
	}
	
	
	k = 0; //reset k
	
	//do {
		//cout << inVal[k] << " ";
		//k++;
	//} while (k < 5);
	
	while (k < 5) {
		cout << inVal[k] << " ";
		k++;
	}
	
	
	k = 0; //reset k
	inTot = 0; //resets the totals
	
	//find the totals for all 5 numbers
	do {
		inTot = inTot + inVal[k];
		//cout << "The totals: " << inTot << endl;
		//cout << "k loop: " << k << endl;
		k++;
	} while (k < 5);
	
	ofstream outfile;
	outfile.open("165_5_cesar.dta");
	//displaying the values on the text
	outfile << endl;
	outfile << setw(35) << "Integer Report" << endl;
	outfile << endl;
	outfile << setw(5) << "Input Values: " << inVal[0] << setw(8) << inVal[1] << setw(10) << inVal[2] << setw(10) << inVal[3] << setw(10) << inVal[4] << setw(10) << endl;
	outfile << setw(5) << "Minimum: " << setw(10) << inMin << endl;
	outfile << setw(5) << "Maximum: " << setw(8) << inMax << endl;
	outfile << setw(5) << "Total Value: " << setw(5) << inTot << endl;
	outfile.close();
	
	
	//displaying the values on the console
	cout << endl;
	cout << setw(35) << "Integer Report" << endl;
	cout << endl;
	cout << setw(5) << "Input Values: " << inVal[0] << setw(8) << inVal[1] << setw(10) << inVal[2] << setw(10) << inVal[3] << setw(10) << inVal[4] << setw(10) << endl;
	cout << setw(5) << "Minimum: " << setw(10) << inMin << endl;
	cout << setw(5) << "Maximum: " << setw(8) << inMax << endl;
	cout << setw(5) << "Total Value: " << setw(5) << inTot << endl;
	
	system("Pause");
	return 0;
}
