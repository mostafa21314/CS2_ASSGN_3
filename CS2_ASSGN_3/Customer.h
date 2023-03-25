//Mostafa Gafaar
//900214463
#pragma once
#ifndef CUSTOMER_H
#define CUSTOMER_H
#include<iostream>
#include<string>
#include"Person.h"
#include"Appointment.h"
using namespace std;
class Customer : public Person
{
private:
	string MechanicID;
	Appointment app;
public:
	virtual void PrintInfo() const override;
	void SetMID(string);
	void SetApp(Appointment);
	string GetMID() const;
	Appointment GetApp() const;
	bool operator<(Customer) const;
	bool operator>(Customer) const;
	bool operator==(Customer) const;

};
#endif;

