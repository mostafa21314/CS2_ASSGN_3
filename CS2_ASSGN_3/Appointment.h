//Mostafa Gafaar
//900214463
#pragma once
#ifndef APPOINTMENT_H
#define APPOINTMENT_H
#include<iostream>
#include<string>
using namespace std;
struct Appointment {
	int min;// stores the minutes
	int hours;//stores the hours
	Appointment(int x, int y)//easier way to initialize an appointment than to individually assign the hours and minitues
	{
		hours = x;
		min = y;
	}
	Appointment()//default constructor for an appointment without known time
	{
		hours = -1;
		min = -1;
	}
};
#endif