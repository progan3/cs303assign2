#pragma once
#include <iostream>
using namespace std;
class Employee {
private:
	int salary; //yearly or weekly salary
	int healthInsurance; 
	int hoursWorked; //hours worked for the week
	int hourlyRate; //money earned per hour
	int vacation;
public:
	Employee();
	Employee(int sal, int health);
	Employee(int hour, int rate, int v);
	void calcSalary();
	void calcHealth();
	void vacationHours();
};

class Professional : public Employee {
private:
	int vacation_days;
public:
	Professional();
	Professional(int salary, int healthInsurance, int vacation_days);
};

class Unprofessional : public Employee {
private:
	string type;
public:
	Unprofessional();
	Unprofessional(string t, int hour, int rate, int v);
};