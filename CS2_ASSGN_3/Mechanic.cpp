#include "Mechanic.h"
Mechanic::Mechanic(string n, string i, int a)
{
	this->Person::Person(n,i,a);
	this->SetCount(0);
	this->apps = new Appointment[24];//the maximum number of appointments a mechanic can have is 24
}
Mechanic::Mechanic()
{
	this->SetCount(0);
	this->apps = new Appointment[24];
	this->Person::Person();
}
Appointment Mechanic::GetApp(int x) const
{
	return this->apps[x];
}
int Mechanic::GetCounter() const
{
	return this->counter;
}
bool Mechanic::IsAvailable(Appointment test) const
{
	if (this->GetCounter() == 24)
		return 0;
	for (int i = 0; i < this->GetCounter(); i++)
	{
		if ((test.hours == this->GetApp(i).hours) && (test.min == this->GetApp(i).min))
			return 0;
	}
	return 1;
}
void Mechanic::SetApp(Appointment temp)
{
	if (counter == 0)
	{
		this->counter = 1;
		apps[0] = temp;
	}
	else
		if (counter != 24)
			this->apps[counter++];
		else
			cout << "The mechanic is fully booked" << endl;

}
void Mechanic::SetCount(int x)
{
	counter = x;
}
void Mechanic::PrintInfo() const//prints all the appointments the mechanic have and their times
{
	cout << "Mechanic Name is " << this->GetName() << endl;
	cout << "Mechanic Age is " << this->GetAge() << endl;
	cout << "Mechanic ID is " << this->GetID() << endl;
	for (int i = 0; i < this->GetCounter(); i++)
	{
		cout<<"The Mechanic has an appointment at "<< this->GetApp(i).hours << ":" << this->GetApp(i).min << endl;
	}


}

