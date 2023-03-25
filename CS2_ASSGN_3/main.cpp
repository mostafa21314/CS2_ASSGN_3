#include"Appointment.h"
#include"Customer.h"
#include"Mechanic.h"
#include"Person.h"
#include"Queue.h"
int main()
{
	const int Mnum = 3;
	const int Cnum = 5;
	Mechanic workers[Mnum];
	for (int i = 0; i < Mnum; i++)
	{
		int num;
		string name, ID;
		cout << "Please enter the mechanics information such as name age id :  ";
		cin >> name >> num >> ID;
		workers[i].Mechanic::Mechanic(name,ID,num);
	}
	Customer money[Cnum];
	for (int i = 0; i < Cnum; i++)
	{
		int num,h,m;
		string name, ID;
		bool assigned = false;
		cout << "Please enter the customer information such as name age id appointment time(hours min):  ";
		cin >> name >> num >> ID>>h>>m;
		Appointment temp(h, m);
		money[i].Customer::Customer(name, ID, num,"",temp);
		for (int y = i%Mnum; y >0; y++)
		{
			int x;
			for (x = 0; x < Mnum; x++)
			{
				if (workers[x].IsAvailable(temp))
					break;
			}
			if (x == Mnum)
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
	for (int i = 0; i < Cnum; i++)
	{
		money[i].PrintInfo();
	}
	/*workers[0].Mechanic::Mechanic("Mostafa", "15", 19);
	workers[1].Mechanic::Mechanic("Ahmed", "16", 20);
	workers[2].Mechanic::Mechanic("Mahmoud", "17", 18);*/
	return 0;
}