#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;



//global variable to increment and decrement in constructors as it is required.
int Employee::numberOfEmployees = 0;
Employee::Employee(){

}
// end constructor


Employee::~Employee(){

}
//end destructor

// writing the functions derived in header class 


// SalaryEmployee methods
SalaryEmployee::SalaryEmployee(){
	employeeID = 0;
	employeeName = "Monthly";
	numberOfEmployees++;
	income = 0.00; // format 
}
// end  salary employee constructor
//assigning default values


SalaryEmployee::~SalaryEmployee(){
	
}
// end destructor

SalaryEmployee::SalaryEmployee(string iemployeeName, int iNumber){
	employeeName = iemployeeName;
	// check if valid id number entered
	if (iNumber >= 0){
		employeeID = iNumber;
	}
	else{
		// catches exception
		cout << "employee ID number entered is invalid." << endl;
		cout << "Please enter a valid ID number" << endl;
		cin >> employeeID;
	}

	// once details are checked a new employee is added  and their income starts at 0
	numberOfEmployees++;
	income = 0.00;
}
// end


//HourlyEmployee methods
HourlyEmployee::HourlyEmployee(){
	// stating the type of the employee
	// assigning default values 
	employeeName = "Hourly";
	employeeID = 0;
	numberOfEmployees++;
	income = 0.00;
}
// end


//assign  correct values and catch errors using conditions 
HourlyEmployee::HourlyEmployee(string iemployeeName, int inumber)
{
	employeeName = iemployeeName;

	if (inumber >= 0){
		employeeID = inumber;
	}
	else{
		cout << "employee ID number entered is invalid." << endl;
		cout << "Please enter a valid ID number" << endl;
		cin >> employeeID;
	}

	numberOfEmployees++;
	income = 0.00;
}
// end


// CommissionEmployee functions:
CommissionEmployee::CommissionEmployee()
{
	employeeName = "Commission";
	employeeID = 0;
	numberOfEmployees++;
	income = 0.00;
}

CommissionEmployee::CommissionEmployee(string iname, int inum)
{
	employeeName = iname;

	if (inum >= 0){
		employeeID = inum;
	}
	else{

		cout << "employee ID number entered is invalid." << endl;
		cout << "Please enter a valid ID number" << endl;
		cin >> employeeID;
	}

	numberOfEmployees++;
	income = 0.00;
}

