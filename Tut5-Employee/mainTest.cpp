#include "Employee.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	float income;
	// assigning values for employees

	SalaryEmployee *eSal = new SalaryEmployee("Cheyenne", 214513360);
	HourlyEmployee *eHr = new HourlyEmployee("Thykara", 214584562);
	CommissionEmployee *eCo = new CommissionEmployee("Raina", 214563254);

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

	//fill array with  3 objects
	arrayMkr[0] = eSal;
	arrayMkr[1] = eHr;
	arrayMkr[2] = eCo;

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

	cout << "_____________________________________________________________________________________________________________________" << endl;

	if ((arrayMkr[0]->salary()) > (arrayMkr[1]->salary())){
		cout << "Congrads " << arrayMkr[0]->name() << " You are the Employee of the month " << "You will get the dayoff" << endl;
		
	}
	else{
		cout << " Congrads " << arrayMkr[1]->name() << " You are the Employee of the month:)" << "You will get the day off" << endl;
		
	}
	cout << endl;

	//dismissal condition
	cout << "Sorry " << arrayMkr[2]->name() << " you have been dismissed because you have been slacking!!! " << endl;
	cout << endl;
	//remove the dismissed employee
	delete arrayMkr[2];
	cout << "Number of employees after the cut : " << Employee::numberOfEmployees - 1 << endl;
	cout << endl;

}
