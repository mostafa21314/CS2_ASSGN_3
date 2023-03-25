//Mostafa Gafaar
//900214463
#pragma once
#ifndef APPOINTMENT_H
#define APPOINTMENT_H
#include<iostream>
#include<string>
using namespace std;
struct Appointment {
	int min;
	int hours;
	Appointment(int x, int y)
	{
		hours = x;
		min = y;
	}
	Appointment()
	{
		hours = -1;
		min = -1;
	}
};
#endif