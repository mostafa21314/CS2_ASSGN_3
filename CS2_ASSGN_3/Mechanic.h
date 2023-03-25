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
	int counter=0;
	Appointment* apps;
public:
	void PrintInfo() const;
	bool IsAvailable(Appointment) const;
	int GetCounter() const;
	Appointment GetApp(int) const;
	void SetCount(int);
	void SetApp(Appointment);
};
#endif;
