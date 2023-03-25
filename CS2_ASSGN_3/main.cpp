#include"Appointment.h"
#include"Customer.h"
#include"Mechanic.h"
#include"Person.h"
#include"Queue.h"
#include<iostream>
using namespace std;
int main()
{
	const int Mnum = 3;//number of mechanics in the workshop
	const int Cnum = 5;//number of customers in the workshop
	Mechanic workers[Mnum];
	workers[0].Mechanic::Mechanic("Mostafa", "15", 19);
	workers[1].Mechanic::Mechanic("Ahmed", "16", 20);
	workers[2].Mechanic::Mechanic("Mahmoud", "17", 18);
	/*for (int i = 0; i < Mnum; i++)//loop for the user to enter the data of the mechanic, a similar loop can be implemented for customers
	{
		int num;
		string name, ID;
		cout << "Please enter the mechanics information such as name age id :  ";
		cin >> name >> num >> ID;
		workers[i].Mechanic::Mechanic(name,ID,num);
	}*/
	Customer money[Cnum];//array of customers declared
	for (int i = 0; i < Cnum; i++)//loop to let the user enter the information of the customer, the loop assigns the appropriate mechanic to the customer
	{
		int num,h,m;
		string name, ID;
		cout << "Please enter the customer information such as name age id appointment time(hours min):  ";
		cin >> name >> num >> ID>>h>>m;
		Appointment temp(h, m);//the appointments the customer needs
		money[i].Customer::Customer(name, ID, num,"",temp);
		int x=0;
		for (x = 0; x < Mnum; x++)//makes sure that theres at least 1 mechanic available at the appointment time the customer chose
		{
			if (workers[x].IsAvailable(temp))
				break;
		}
		if (x == Mnum)//if no mechanic was available at that time the appointment is changed to -1:-1 which triggers an output of no mechanic was availabe when print infor is used
		{
			Appointment non(-1, -1);
			money[i].SetApp(non);
		}
		else//else means theres at least one mechanic available therefore the customer will be assigned to the appropriate mechanic
		{
			for (int y = i % Mnum; y > -3; y++)//the % makes sure the customers loop back to the start of the mechanics if customers are more than the mechanics
			{
				if (workers[y].IsAvailable(temp))//assigns the appropriate mechanic to the customer
				{
					money[i].SetMID(workers[y].GetID());
					workers[y].SetApp(temp);
					break;
				}
			}
		}
	}
	Queue<Customer> line(Cnum);//queue of customers
	for (int x = 0; x < Cnum; x++)//loop to bubble sort the queue so that the customer with the earlier appointment is in front
	{
			for (int j = x + 1; j < Cnum; j++)
			{
				if (money[j] < money[x])
				{
					Customer temp = money[j];
					money[j] = money[x];
					money[x] = temp;
				}
			}
			line.push(money[x]);
	}

	for (int i = 0; i < Cnum; i++)//loop to cout the queue status
	{
		Customer test = line.pop();
		string Mechname="";
		for (int i = 0; i < Mnum; i++)
		{
			if (test.GetMID() == workers[i].GetID())
				Mechname = workers[i].GetName();
		}
		if (Mechname == "")
			cout << "Mr " << test.GetName() << " Appointment was cancelled because no mechanic was available " << endl;
		else
		cout << "Mr " << test.GetName() << " Has an Appointment at " << test.GetApp().hours << ":" << test.GetApp().min << " with Mr " <<Mechname << endl;
	}
	return 0;
}