#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;
int main(){


	// assigning values for employees
	HourlyEmployee *eHr = new HourlyEmployee("Thykara", 214584562);
	SalaryEmployee *eSal = new SalaryEmployee("Cheyenne", 214513360);
	CommissionEmployee *eCo = new CommissionEmployee("Raina", 214563254);

	// pointer for array
	Employee *arrayMkr[3];
	// set salary
	eSal->setSalary(20000);
	//set hourly attributes
	eHr->setHourlyRate(15000);
	eHr->setHoursWorked(20);
	// set commission atributes
	eCo->setBaseSalary(5000);
	eCo->setRate(0.40);
	eCo->setRevenue(12000.6);
}