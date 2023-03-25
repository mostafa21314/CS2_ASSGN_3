#include "Person.h"
Person::Person() {
	SetAge(0);
	SetName("");
	SetID("");
}
void Person::SetID(string s)
{
	this->id = s;
}
void Person::SetAge(int x)
{
	this->age = x;
}
void Person::SetName(string n)
{
	this->name = n;
}
int Person::GetAge() const
{
	return this->age;
}
string Person::GetID() const
{
	return this->id;
}
string Person::GetName() const
{
	return this->name;
}
