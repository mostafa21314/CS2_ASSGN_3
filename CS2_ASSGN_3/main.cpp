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
	workers[0].Mechanic::Mechanic("Mostafa", "15", 19);
	workers[1].Mechanic::Mechanic("Ahmed", "16", 20);
	workers[2].Mechanic::Mechanic("Mahmoud", "17", 18);
	/*for (int i = 0; i < Mnum; i++)
	{
		int num;
		string name, ID;
		cout << "Please enter the mechanics information such as name age id :  ";
		cin >> name >> num >> ID;
		workers[i].Mechanic::Mechanic(name,ID,num);
	}*/
	Customer money[Cnum];
	for (int i = 0; i < Cnum; i++)
	{
		int num,h,m;
		string name, ID;
		cout << "Please enter the customer information such as name age id appointment time(hours min):  ";
		cin >> name >> num >> ID>>h>>m;
		Appointment temp(h, m);
		money[i].Customer::Customer(name, ID, num,"",temp);
		int x=0;
		for (x = 0; x < Mnum; x++)
		{
			if (workers[x].IsAvailable(temp))
				break;
		}
		if (x == Mnum)
		{
			Appointment non(-1, -1);
			money[i].SetApp(non);
		}
		else
		{
			for (int y = i % Mnum; y > -3; y++)
			{
				if (workers[y].IsAvailable(temp))
				{
					money[i].SetMID(workers[y].GetID());
					workers[y].SetApp(temp);
					break;
				}
			}
		}
	}
	Queue<Customer> line(Cnum);
	/*for (int x = 0; x < Cnum; x++)
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
			customers.push(money[x]);
	}*/

	/*for (int i = 0; i < Cnum; i++)
	{
		customers.pop().PrintInfo();
	}*/
	return 0;
}