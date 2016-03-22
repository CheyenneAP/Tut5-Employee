#pragma once
using namespace std;
#include <string>

class Employee{

protected:
	string employeeName = "";
		  float salary;
		  int numberOfEmployees;
public:
	static int numberOfEmployees;
	Employee();
	~Employee();

	// virtual functions
	virtual float salary() = 0; // returns the amount of money at the end of the month
	virtual int staffNumber() = 0; //returns a positive integer
	virtual string name() = 0; // returns name as a string
	
	
};

