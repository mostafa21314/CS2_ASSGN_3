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
public:
	Person();
	void SetID(string);//function to set the ID
	void SetName(string);//function to set the name
	void SetAge(int);//function ot set the age
	int GetAge() const;//function to return the age
	string GetName() const;//function to return the name
	string GetID() const;//function to return the id
	virtual void PrintInfo() const = 0;//this will be the pure virtual function
};
#endif

