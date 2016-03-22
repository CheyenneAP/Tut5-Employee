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
