#pragma once
#pragma once
#ifndef MECHANIC_H
#define MECHANIC_H
#include"Person.h"
#include"Appointment.h"
using namespace std;
class Mechanic : public Person
{
private:
	int counter;//the number of appointments this mechanic have
	Appointment* apps;//an array of appointments this mechanic have
public:
	Mechanic();//default constructor for the mechanic
	Mechanic(string, string, int);//intial value constructor with the information of the mechanic directly assigned
	void PrintInfo() const;//the pure virtual function prints the information of the mechanic including his appointments
	bool IsAvailable(Appointment) const;//checks if a mechanic is available at a certain time
	int GetCounter() const;//returns the number of appointments the mechanic have
	Appointment GetApp(int) const;//returns the appoiintment a mechanic have at a certain index in the array
	void SetCount(int);//sets the number of appointments a mechanic have(not sure what iam gonna use it for but its just here at the time)
	void SetApp(Appointment);//sets an appointments for a mechanic as long as he is free at that time and didnt reach his maximum of 24 appointments per day
};
#endif;
