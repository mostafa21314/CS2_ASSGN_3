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
	/*workers[0].Mechanic::Mechanic("Mostafa", "15", 19);
	workers[1].Mechanic::Mechanic("Ahmed", "16", 20);
	workers[2].Mechanic::Mechanic("Mahmoud", "17", 18);*/
	return 0;
}