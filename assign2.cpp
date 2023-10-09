#include "assign2.h";


Employee::Employee() { //initializes all variables in employee as zero
	salary = 0;
	healthInsurance = 0;
	hoursWorked = 0;
	hourlyRate = 0;
	vacation = 0;
}
Employee::Employee(int sal, int health) { //initialization for professional
	salary = sal;
	healthInsurance = health;
	hoursWorked = 0;
	hourlyRate = 0;
	vacation = 0;
}
Employee::Employee(int hour, int rate, int v) { //initialization for unprofessional
	hoursWorked = hour;
	hourlyRate = rate;
	vacation = v;
	salary = 0;
	healthInsurance = 0;
}
void Employee::calcSalary() { //calculates salary for unprofessional
	salary = hoursWorked * hourlyRate;
	cout << salary << endl; //prints to show calculation was correct
}
void Employee::calcHealth() { //calculates health insurance for unprofessional
	healthInsurance = hoursWorked * 50;
	cout << healthInsurance << endl; //prints to show calculation was correct
}
void Employee::vacationHours() { //calculates vacation hours earned that week for unprofessional
	vacation = hoursWorked / 10;
	cout << vacation; //prints to show calculation was correct
}
Professional::Professional() { //initialization function
	vacation_days = 0;

}
Professional::Professional(int sal, int health, int v) :Employee(sal, health) { //initializes professional
	vacation_days = v;
}
Unprofessional::Unprofessional() { //initialization function
	type = "";
}
Unprofessional::Unprofessional(string t, int hour, int rate, int v) :Employee(hour, rate, v) { //initializes unprofessional
	type = t;
}



int main() {
	Professional a(70000, 50000, 10); //professional employee
	Unprofessional b("u", 50, 10, 0); //unprofessional employee
	b.calcSalary();
	b.calcHealth();
	b.vacationHours();

}