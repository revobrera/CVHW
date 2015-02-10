// Cesar Villamil
// CIS 165 Fundamentals of Programming
// March 6th, 2014
/* Mini-Calculator: This program will calculate the sum, difference
	product, whole number quotient, remainder, the real number quotient, 
	and the square root of operand1. The program should also calculate
	the value of operand2 raised to the power of 4.*/

//**********************Preprocessor Directives********************//

#include<fstream>
#include<iomanip>
#include<string>
#include<iostream>
#include<math.h>


using namespace std;

//*********************main***********************

int main()
{
	//inputs:
	int my_operand1,
		my_operand2,
		my_sum,
		my_difference,
		my_product,
		my_remainder,
		my_op2_power4,
		my_whole_quotient;
	double my_real_quotient,
		my_sqrt_op1;

	//clears screen first
	system("cls");
	//enter operands
	cout<<"Please enter value for operand 1: ";
    cin>>my_operand1;
    cout<<"Please enter value for operand 2: ";
    cin>>my_operand2;
    //clears screen again
    system("cls");
    
    //process or calculation section: 
    my_sum = my_operand1 + my_operand2;
    my_difference = my_operand1 - my_operand2;
    my_product = my_operand1 * my_operand2;
    my_remainder = my_operand2 % my_operand1;
    my_op2_power4 = pow(my_operand2, 4);
    my_whole_quotient = my_operand2/my_operand1;
    my_real_quotient = my_operand2/my_operand1;
    my_sqrt_op1 = sqrt(my_operand1);
    
    /*
    	instructions to using setw():
    		NOTE: constant is 80 since a pc screen is 80 characters wide
    		
    		Header:
    			-find total character count with spaces (totchars)
    			-80 - (totchars) = (remaining_char)
    			-(remaining_char) / (num_of_gaps) = (char_gap)
    			-(char_gap) + (totchars) = setw()
    		Body:
    			-add total number of characters including spaces in a line (totchars)
    			-add total with both left and right margins (totmarg)
    			-80 - (totmarg) = (remaining_char)
    			-(remaining_char) / (num_of_gaps) = (char_gap)
    			
    			
		Header spaces count: 
    		Mini = 4
    		Calculator = 10
    		by = 2
    		Cesar = 5
    		Villamil = 8
    		spaces = 4
    	Total with spaces = 33
    	pc screen = 80 characters wide
    	80 - 33 = 47
    	47 / 2 = 23.5 margins
    	23.5 + 33 = 56.5, rounded down to 56
    	setw for heading is 56
    
    	Operand spaces count:
    		operand 1 = 9
    		operand 2 = 9
    		set margins to 5
			5 + 9 + 9 + 5 = 30
			80 - 30 = 50
			50 / 2 = 25 gap
			operand 1 = 5 + 9 = setw(14)
			operand 2 = 25 + 9 = setw(34)
			
    	(sum to diff) spaces count:
    		Total with spaces = 3 + 10 + 7 + 14 + 9 = 43
    		Total spaces with margin = 5 + 3 + 10 + 7 + 14 + 9 + 5 = 53
    		80 - 53 = 27
    		27 / 4 = 6.75 ~6, rounded down to 6 margin gaps
    		Sum = 5 + 3 = setw(8)
    		Difference = 6 + 10 = setw(16)
    		Product = 6 + 7 = setw(13)
    		Whole Quotient = 6 + 14 = setw(20)
    		Remainder = 6 + 9 = setw(15)
    	
    	(Real Q to Op^4) spaces count:
    		Total with spaces = 13 + 24 + 27 = 64
    		Total spaces with margin = 5 + 13 + 24 + 27 + 5 = 74
    		80 - 74 = 6
    		6 / 2 = 3 margin gaps
    		Real Quotient = 5 + 13 = setw(18)
    		Square Root of Operand 1 = 3 + 24 = setw(27)
    		Operand 2 to the power of 4 = 3 + 27 = setw(30)
    */
    
	//output or display section
	cout << setw(56) << "=================================" << endl;
	cout << setw(56) << "Mini Calculator by Cesar Villamil" << endl;
	cout << setw(56) << "=================================" << endl;
	cout << setw(14) << "Operand 1" << setw(34) << "Operand 2" <<endl;
	cout << setw(14) << "_________" << setw(34) << "_________" <<endl;
	cout << setw(14) << my_operand1 << setw(34) << my_operand2 <<endl;
	cout << endl;
	cout << setw(8) << "Sum" << setw(16) << "Difference" << setw(13) << "Product" << setw(20) << "Whole Quotient" << setw(15) << "Remainder" <<endl;
	cout << setw(8) << "___" << setw(16) << "__________" << setw(13) << "_______" << setw(20) << "______________" << setw(15) << "_________" <<endl;
	cout << setw(8) << my_sum << setw(16) << my_difference << setw(13) << my_product << setw(20) << my_whole_quotient << setw(15) << my_remainder << endl;
	cout << endl;
	cout << setw(18) << "Real Quotient" << setw(27) << "Square Root of Operand 1" << setw(30) << "Operand 2 to the power of 4" <<endl;
	cout << setw(18) << "_____________" << setw(27) << "________________________" << setw(30) << "___________________________" <<endl;
	cout << setw(18) << my_real_quotient << setw(27) << my_sqrt_op1 << setw(30) << my_op2_power4 <<endl;
	
	cout<<endl<<endl;
	system("pause");
	return 0;
	
/*
1. Preprocessor directives:
	a) cout and cin: #include<iostream>
	b) manipulators without arguments: #include<iostream>
	c) manipulators with arguments: #include<iomani>
2. Name of the operators:
	a) <<: left shift
	b) >>: right shift
3. Manipulators are functions specifically designed to be 
	used in conjunction with the insertion (<<) and 
	extraction (>>) operators on stream objects
4. A sticky manipulator stays until the end of the 
	program
	
5. //USE MARGIN = 10
		//Account = 7 
		//Savings Balance = 15
		//Checking Balance = 16
		//set margins = 10
		//80 - 12= 68 chars remaining
		//68 / 2= 34 margin
	
	cout << setw(34) << "Hanover Bank" <<endl;
	cout << setw(34) << "____________" <<endl;
	cout <<endl;
	
		//Lmargin + Account + Savings Balance + Checking Balance + Rmargin 
		//10 + 7 + 15 + 16 + 10 = 58
		//80 - 58 = 22 remaining
		//22 / 2 = 11
		//17, 26, 27
	
	cout << setw(17) << "Account" << setw(26) << "Savings Balance" << setw(27) << "Checking Balance" <<endl;
	cout << setw(17) << acct_ID << setw(26) << sav_bal << setw(27) << chk_bal <<endl;
	
6. //USE MARGIN = 12
		//Employee Report = 15
		//Employee Name = 13
		//Age = 3
		//Base Income = 11
		//Total = 42
		//set margins = 12
		//Total with margins = 42 + 24 = 66
		//80 - 66 = 14
		//14 / 2 = 7 character gap
		//header: 80 - 15 = 65 / 2 = 32.5, rounding down to 32 + lmargin(12) = setw(44)
		//12 + 13 = setw(25)
		//7 + 3 = setw(10)
		//7 + 11 = setw(18)
	
	cout << setw(44) << "Employee Report" <<endl;
	cout << setw(44) << "_______________" <<endl;
	cout <<endl;
	cout << setw(25) << "Employee Name" << setw(10) << "Age" << setw(18) << "Base Income" <<endl;
	cout << setw(25) << emp_name << setw(10) << emp_age << setw(18) << emp_base_income <<endl;

7. //USE MARGIN = 8 
		//80 - 22 = 58
		//58/2 = 29
		//29 + 22 = 51

		//Peewee Football League = 22
		//Team Name = 9
		//Won = 3
		//Lost = 4
		//Tied = 4
		//Percent = 7
		//9 + 3 + 4 + 4 + 7 = 27
		//8 + 9 + 3 + 4 + 4 + 7 + 8 = 43
		//80 - 43 = 37 chars remaining
		//37 / 4 (char_gaps) = 9.25 or ~9
		
		//header = setw(58)
		
		//8 + 9 = setw(17)
		//9 + 3 = setw(12)
		//9 + 4 = setw(13)
		//9 + 4 = setw(13)
		//9 + 7 = setw(16)

	cout << setw(58) << "Peewee Football League" <<endl;
	cout << setw(58) << "______________________" <<endl;
	cout << setw(17) << "Team Name" << setw(12) << "Won" << setw(13) << "Lost" << setw(13) << "Tied" << setw(16) << "Percent" <<endl;
	cout << setw(17) << team_name << setw(12) << team_won << setw(13) << team_lost << setw(13) << team_tied << setw(16) << team_percent <<endl;

*/	
}

