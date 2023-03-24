//Mostafa Gafaar
//900214463
#pragma once
#ifndef PERSON_H
#define PERSON_H
#include<iostream>
#include<string>
using namespace std;
class Person
{
private:
	string name;
	string id;
	int age;
	Person();
	void SetID(string);
	void SetName(string);
	void SetAge(int);
	int GetAge();
	string GetName();
	string GetID();
	virtual void PrintInfo();
};
#endif

