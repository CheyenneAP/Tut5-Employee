#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;

//global variable to increment and decrement in constructors as it is required.
int Employee::numberOfEmployees = 0;
Employee::Employee(){}


Employee::~Employee(){}
// writing the functions derived in header class 


// SalaryEmployee methods
SalaryEmployee::SalaryEmployee(){
	employeeID = 0;
	employeeName = "Monthly";
	numberOfEmployees++;
	income = 0.00; // format 
}
// end


SalaryEmployee::~SalaryEmployee(){numberOfEmployees--;}
// end



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

	// once details are checked a new employee is added  nd their income starts at 0
	numberOfEmployees++;
	income = 0.00;
}
// end



//HourlyEmployee methods
HourlyEmployee::HourlyEmployee(){
	// type of employee
	// assign default values 
	employeeName = "Hourly";
	employeeID = 0;
	numberOfEmployees++;
	income = 0.00;
}
// end

HourlyEmployee::HourlyEmployee(string iemployeeName, int inumber){
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
CommissionEmployee::CommissionEmployee(){
	// type of employee
	// assign default values 
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





//  setting and getting values for the three classes
//using accessor and mutator methods
float SalaryEmployee::setSalary(const float iIncome){
	monthSalary = iIncome;
	return monthSalary;
}

float SalaryEmployee::salary(){return monthSalary;}

string SalaryEmployee::name(){return employeeName;}

int SalaryEmployee::staffNumber(){return employeeID;}

// 
HourlyEmployee::~HourlyEmployee(){numberOfEmployees--;}

float HourlyEmployee::setHourlyRate(float iHS){
	hourRate = iHS;
	return hourRate;
}

int HourlyEmployee::setHoursWorked(int iHr){
	numHoursWorked = iHr;
	return numHoursWorked;
}

float HourlyEmployee::salary(){
	income = hourRate*numHoursWorked;
	return income;
}

string HourlyEmployee::name(){return employeeName;}

int HourlyEmployee::staffNumber(){return employeeID;}

// getting and setting values in the Commissionemployee class

CommissionEmployee::~CommissionEmployee(){
	numberOfEmployees--;
}

float CommissionEmployee::setBaseSalary(float iBSal){
	baseSalary = iBSal;
	return baseSalary;
}

float CommissionEmployee::setRate(float irate){
	commissionRate = irate;
	return commissionRate;
}

float CommissionEmployee::setRevenue(float iReven){revenueGen = iReven;return revenueGen;}

float CommissionEmployee::salary(){ income = baseSalary + commissionRate*revenueGen; return income;}

string CommissionEmployee::name(){return employeeName;}

int CommissionEmployee::staffNumber(){return employeeID;}