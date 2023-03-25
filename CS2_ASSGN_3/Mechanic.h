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
	int counter;
	Appointment* apps;
public:
	Mechanic();
	Mechanic(string, string, int);
	void PrintInfo() const;
	bool IsAvailable(Appointment) const;
	int GetCounter() const;
	Appointment GetApp(int) const;
	void SetCount(int);
	void SetApp(Appointment);
};
#endif;
