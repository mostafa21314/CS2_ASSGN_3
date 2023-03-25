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
	Customer();//default constructor for a customer
	Customer(string, Appointment);//initial value constructor when only the name and appointments time is known
	Customer(string, string, int, string, Appointment);//initial value constructor to a customer with known name,age,id,MID, and appointment
	virtual void PrintInfo() const;//the virtual function that must be implemented prints the info of the customer including their appointment time
	void SetMID(string);//sets a mechanical with a unique ID to handle the customer
	void SetApp(Appointment);//sets the appointment of the customer(can be used as an indicator that no mechanic was available to this customer)
	string GetMID() const;//returns the id of the mechanic assigned to this cutomer
	Appointment GetApp() const;//returns the appointment time of this customer
	bool operator<(const Customer&) const;//overloads the < operator to compare between the appointment times of 2 customers
	bool operator>(const Customer&) const;//overloads the > operator to compare between the appointment times of 2 customers
	bool operator==(const Customer&) const;//overloads the == operator to compare between the appointment times of 2 customers

};
#endif;

