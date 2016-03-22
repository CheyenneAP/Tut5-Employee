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



	//fill array with  3 objects
	arrayMkr[0] = eSal;
	arrayMkr[1] = eHr;
	arrayMkr[2] = eCo;

	// set salary
	eSal->setSalary(20000);
	//set hourly attributes
	eHr->setHourlyRate(15000);
	eHr->setHoursWorked(20);
	// set commission atributes
	eCo->setBaseSalary(5000);
	eCo->setRate(0.40);
	eCo->setRevenue(12000.6);



	//display employee and salary details
	cout << endl;
	cout << "Salary employee: " << eSal->name() << " " << eSal->staffNumber() << " -- " << eSal->name() << ", your income is " << arrayMkr[0]->salary() << " a month" << endl;
	cout << endl;

	cout << "Hourly employee: " << eHr->name() << " " << eHr->staffNumber() << " -- " << eHr->name() << ", your income is " << arrayMkr[1]->salary() << " a month" << endl;
	cout << endl;
	cout << "Commission employee: " << eCo->name() << " " << eCo->staffNumber() << " -- " << eCo->name() << ", your income is " << arrayMkr[2]->salary() << " a month" << endl;
	cout << endl;

	cout << "_____________________________________________________________________________________________________________________" << endl;
	cout << "Total number of employees: " << Employee::numberOfEmployees << endl;
	cout << endl;

	int sumIncome = 0;

	// find total accumulated salary
	for (int i = 0; i<3; i++){
		sumIncome = sumIncome + (arrayMkr[i]->salary());
	}

	cout << "The total accumulated  salary for employees is : " << sumIncome << endl;
	cout << endl;



}