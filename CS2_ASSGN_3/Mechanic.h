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
	bool IsAvailable(Appointment) const;
	int GetCounter();
	Appointment GetApp(int);
	void SetCount(int);
	void SetApp(Appointment);
};
#endif;
