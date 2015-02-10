// Cesar Villamil
// CIS 165 Fundamentals of Programming
// April 15th, 2014
/* Employee Payroll Calculation: This program will calculate weekly
wages for each employee entered. The user will enter the employee's name, 
ID number, hours worked, and job classification.*/

//**********************Preprocessor Directives********************//

#include<fstream>
#include<iomanip>
#include<string.h>
#include<iostream>
#include<math.h>
#include<conio.h>
#include<string>


using namespace std;

//*********************main***********************//

int main()
{
	//variables:
	const int reg_hrs = 40;
	string emp_name,
		emp_hrs_mesg,
		emp_job_mesg;
	int emp_hrs_worked,
		emp_hrs_OT,
		emp_ID_num,
		emp_job_class,
		user_resp,
		cycle;
	double emp_hrly_rate,
		emp_reg_pay,
		emp_OT_pay;
	ofstream outfile;
	char user_answ;
	
	user_resp = 0;
	do {
	
		//clears screen first
		system("cls");
		//inputs
		cout<<"Please enter the name of the employee: ";
	    cin>>emp_name;
	    //getline( cin, emp_name);
	    cout<<"Please enter the ID number of the employee: ";
	    cin>>emp_ID_num;
	    cout<<"Please enter the number of hours worked for the employee:";
	    cin>>emp_hrs_worked;
	    cout<<"Please enter the job classification of the employee:";
	    cin>>emp_job_class;
	    
	    //clears screen
	    system("cls");
	
		//sets the user_resp so that it does not keep asking the user every single cycle
		if (user_resp == 0 ) {
			cout << "(1) Display output to console or (2) save output to .dta file" <<endl;
			cin >> user_resp;	
		} else if (user_resp == 1) {
			//keep it going and make user_resp == 1;
			user_resp = 1;
		} else {
			//keep it going and make user_resp == 2;
			user_resp = 2;
		}

		
		//user is prompted to output from the console or to a .dta file
		if (user_resp == 1)
			//prints to the console
			outfile.open("con");
		else
		 {
		 	//prints to a .dta file on the same directory called, 165_3_cesar_[employee initials]_v1.dta
		 	//outfile.open("165_4_cesar_MB.dta", ios::out);
		 	outfile.open("165_4_cesar.dta", std::ios_base::app); //appends additional employees to the same file
		 }
		 outfile << setiosflags(ios::showpoint | ios::fixed) << setprecision(2);
		 
		//clears screen 
		system("cls");
	    
	    //process or calculation section: 
	    /*using a switch statement in order to set
	    the hourly rate for a given job classification. 
		use 'break;' to jump out of the switch statement*/
	    switch(emp_job_class) {
	    	case 1:
	    		emp_hrly_rate = 5.50;
	    		break;
	    	case 2:
	    		emp_hrly_rate = 6.00;
	    		break;
	    	case 3:
	    		emp_hrly_rate = 7.00;
	    		break;
	    	case 4:
	    		emp_hrly_rate = 9.00;
	    		break;
	    	case 5:
	    		emp_hrly_rate = 12.00;
	    		break;
	    	default :
	    		emp_hrly_rate = 5.50;
	    }
	    
	    /*using a two way if statement to 
	    calculate regular pay */
	    if (emp_hrs_worked >= reg_hrs) {
	    	//when the employee works the exact 40 hrs or more
	    	emp_reg_pay = reg_hrs * emp_hrly_rate;
	    } else {
	    	//when the employee works less than 40 hrs
	    	emp_reg_pay = emp_hrs_worked * emp_hrly_rate;
	    }
	    
	    /*using a two way if statement to 
	    calculate overtime pay and number of OT hrs*/
	    if (emp_hrs_worked > reg_hrs) {
	    	//employee paid 1.5x regular pay
	    	emp_OT_pay = (emp_hrs_worked - reg_hrs) * 1.5 * emp_hrly_rate;
	    	emp_hrs_OT = (emp_hrs_worked - reg_hrs);
	    } else {
	    	//employee paid 0x regular pay
	    	emp_OT_pay = (emp_hrs_worked - reg_hrs) * 0 * emp_hrly_rate;
	    	emp_hrs_OT = 0;
	    }
	    
	    /*using one way if statements for generating 
		a message for any employee who 
	    works < 40 hours or > 60 hours */
	    if (emp_hrs_worked < reg_hrs) {
	    	emp_hrs_mesg = "***   Inadequate number of hours worked!   ***";
	    }
	    
	    if (emp_hrs_worked > (reg_hrs + 20)) {
	    	emp_hrs_mesg = "***   Excessive number of hours worked!   ***";
	    }
	    
	    if ((emp_job_class < 1) && (emp_job_class > 5)) {
	    	emp_job_mesg = "***   The Employee's Job Classification is in error   ***";
	    }
	    
		//output or display section
		outfile << setw(35) << "====================" << endl;
		outfile << setw(35) << "WorkHard Corporation" << endl;
		outfile << setw(35) << "====================" << endl;
		
		outfile << setw(5) << "Employee Name: " << emp_name << setw(25) << "ID Number: " << emp_ID_num << endl;
		outfile << setw(5) << "Job Classification: " << emp_job_class << setw(33) << "Hourly Rate: " << emp_hrly_rate << endl;
	
		
		outfile << setw(5) << "Total Hours Worked: " << emp_hrs_worked << setw(35) << "Overtime Hours: " << emp_hrs_OT << endl;
		outfile << setw(5) << "Regular Pay: " << emp_reg_pay << setw(36) << "Overtime Pay: " << emp_OT_pay << endl;
		outfile << endl<<endl;	
		outfile << setw(35) << "Total Earnings....... $" << (emp_reg_pay + emp_OT_pay) << endl;
		outfile << endl<<endl;
		outfile << setw(5) << emp_hrs_mesg << endl;
		outfile << setw(5) << emp_job_mesg << endl;
		
		outfile << endl<<endl;
		outfile << "*********************************************************************" << endl;
		outfile << endl<<endl;
		
		//makes sure that user enters a valid response of 'Y' or 'N'
		cycle = 1;
		do {
			if (((user_answ == 'Y') || (user_answ == 'y')) || ((user_answ == 'N') || (user_answ == 'n'))) {
				
			} else {
				if (cycle >= 2) {
					cout << "Please enter a valid response of 'Y' or 'N'" << endl;
				}
			}
			cout << "Would you like to add another employee (Y/N)?" << endl;
			cin >> user_answ;
			cycle = cycle + 1;
			
			if ((user_answ == 'Y' || user_answ == 'y') || (user_answ == 'N' || user_answ == 'n')) {
				break;
			}
			
		} while (((user_answ != 'Y') || (user_answ != 'y')) && ((user_answ != 'N') || (user_answ != 'n')));
		
		
		outfile << endl<<endl;
		outfile.close();
	
	} while (((user_answ == 'Y') || (user_answ == 'y'))); //loops again if user enters 'Y' || 'y'
	
	system("pause");
	return 0;
		
}

