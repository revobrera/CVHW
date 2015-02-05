// Cesar Villamil
// CIS 165 Fundamentals of Programming
// February 25th, 2014
// This program will calculate the total cost and balance due on an invoice for number of prints ordered.

//**********************Preprocessor Directives********************//
#include<fstream>
#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
#include<stdlib.h>

using namespace std;

//*********************main***********************
int main()
{
    //constants:
    const double tax_rate = 0.07,
        photo_reprints = 0.50;      //cost per reprint = 0.50 cents
    
    //customer's bill:
    char customer_name[35],         // Jonas Quin
        date_of_order[12];          // 1/27/2012
    int num_photos_submitted,       // 4
        num_reprints_ordered,       // 8
        totnum_reprints_made;
    double total_bill,
    	   tot_cost_reprint,
    	   taxes;
    //The following 2 variables below are constants
        //tax
        //price per reprint
    
    //input section:
    system("cls");
    cout<<"Please enter customer name: ";
    cin>>customer_name;
    cout<<"Please enter today's date: ";
    cin>>date_of_order;
    cout<<"Please enter number of photos submitted: ";
    cin>>num_photos_submitted;
    cout<<"Please enter number of reprints ordered: ";
    cin>>num_reprints_ordered;
    
    //process or calculation section:
    totnum_reprints_made = num_photos_submitted * num_reprints_ordered;
    tot_cost_reprint = totnum_reprints_made * photo_reprints;
    taxes = tot_cost_reprint * tax_rate;
    total_bill = tot_cost_reprint + taxes;

	//output or display section: 
	//when inputting commands using spaces will automatically enter the next entry for the next variable.
	//For example: Jonas 1/27/2014 4 8 
	system("cls");
	cout<<"MOREPRINTS Photo Store"<<endl<<endl;
	cout<<"|||||||||||||||||||||||"<<endl<<endl;
	cout<<"Date: "<<date_of_order<<endl;
	cout<<"Customer Name: "<<customer_name<<endl;
	cout<<"Number of photos submitted: "<<num_photos_submitted<<endl;
	cout<<"Number of reprints ordered: "<<num_reprints_ordered<<endl;
	cout<<"Total number of reprints made: "<<totnum_reprints_made<<endl<<endl;
	cout<<"|||||||||||||||||||||||"<<endl<<endl;
	cout<<"Subtotal: $"<<tot_cost_reprint<<endl;
	cout<<"Taxes: $"<<taxes<<endl;
	cout<<"Total Balance Due: $"<<total_bill<<endl;
	
	cout<<endl<<endl;
	system("pause");
	return 0;
}
   
