#include<iostream>
#include<string>
using namespace std;
#include "Customer.h"
void Customer::Printinfo() const
{
	cout << "Customer Name is " << this->GetName() << endl;
	cout << "Customer Age is " << this->GetAge() << endl;
	cout << "Customer ID is " << this->GetID() << endl;
	cout << "Customer has an Appointment at " << this->GetApp().hours << ":" << this->GetApp().min << endl;
	cout << "The Mechanic Assigned to this customer has ID " << this->GetMID() << endl;
}
void Customer::SetMID(string id)
{
	this->MechanicID = id;
}
void Customer::SetApp(Appointment test)
{
	this->app = test;
}
string Customer::GetMID() const
{
	return this->MechanicID;
}
Appointment Customer::GetApp() const
{
	return this->app;
}
bool operator<(Customer compare) const
{

}
bool operator>(Customer compare) const
{

}
bool operator==(Customer compare) const
{

}
