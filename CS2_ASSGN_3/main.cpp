#include"Appointment.h"
#include"Customer.h"
#include"Mechanic.h"
#include"Person.h"
#include"Queue.h"
int main()
{
	Mechanic workers[3];
	for (int i = 0; i < 3; i++)
	{
		int num;
		string name, ID;
		cout << "Please enter the mechanics information such as name age id :  ";
		cin >> name >> num >> ID;
		workers[i].Mechanic::Mechanic(name,ID,num);
	}
	Customer money[10];
	for (int i = 0; i < 10; i++)
	{
		int num,h,m;
		string name, ID;
		bool assigned = false;
		cout << "Please enter the customer information such as name age id appointment time(hours min):  ";
		cin >> name >> num >> ID>>h>>m;
		Appointment temp(h, m);
		money[i].Customer::Customer(name, ID, num,"",temp);
		for (int y = i%3; y >0; y++)
		{
			int x;
			for (x = 0; x < 3; x++)
			{
				if (workers[x].IsAvailable(temp))
					break;
			}
			if (x == 3)
				break;
			if (workers[y].IsAvailable(temp))
			{
				money[i].SetMID(workers[y].GetID());
				workers[y].SetApp(temp);
				assigned = true;
				break;
			}
		}
		if (!assigned)
		{
			Appointment non(-1, -1);
			money[i].SetApp(non);
		}
	}
	for (int i = 0; i < 2; i++)
	{
		money[i].PrintInfo();
	}
	/*workers[0].Mechanic::Mechanic("Mostafa", "15", 19);
	workers[1].Mechanic::Mechanic("Ahmed", "16", 20);
	workers[2].Mechanic::Mechanic("Mahmoud", "17", 18);*/
	return 0;
}