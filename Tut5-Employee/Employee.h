#pragma once
using namespace std;
#include <string>

class Employee{

private:
	//none so far
protected:
	string employeeName = "";
	float income;
	int employeeID;
public:
	static int numberOfEmployees;
	Employee();
	~Employee();

	// virtual functions these will be called in each of the three classes 
	virtual string name() = 0; // returns name as a string
	virtual float salary() = 0; // returns the amount of money at the end of the month
	virtual int staffNumber() = 0; //returns a positive integer



};

// Derive 3 classes SalaryEmployee,HourlyEmployee,CommissionEmployee from Employee 


//SalaryEmployee class
class SalaryEmployee : public Employee{
private:

	float monthSalary;
public:
	SalaryEmployee();
	~SalaryEmployee();
	SalaryEmployee(string, int);
	// methods

	float setSalary(const float);// setting salary


	// over write the default values 
	string name();
	float salary();
	int staffNumber();
};


// HourlyEmployee class
class HourlyEmployee :public Employee{
private:

	float hourRate;
	int numHoursWorked;

public:

	HourlyEmployee();
	~HourlyEmployee();
	HourlyEmployee(string, int);


	// methods
	float setHourlyRate(float);// set hourly rate
	int setHoursWorked(int); // set hours worked

	// overwrite the default values 
	string name();
	float salary();
	int staffNumber();
};

//  CommissionEmployee class

class CommissionEmployee : public Employee{
private:
	float baseSalary, commissionRate, revenueGen;


public:
	CommissionEmployee();
	~CommissionEmployee();
	CommissionEmployee(string, int);


	// methods
	float setBaseSalary(float); // setting the base salary
	float setRate(float);// setting the setRate
	float setRevenue(float); // setting the revenue

	//overwrite the defaults values 
	string name();
	float salary();
	int staffNumber();
};

