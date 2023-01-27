// BusSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	
	struct Bus
	{
		string id;
		string brand;
		int lineNumber;
		int seats;
	} busses[3];

	for (int i = 0; i < sizeof(busses)/sizeof(Bus); i++)
	{	
		cin >> busses[i].id;		
		cin >> busses[i].brand;
		cin >> busses[i].lineNumber;
		cin >> busses[i].seats;
	}

	string brandToSearch;
	cout << "Enter brand to search for:" << endl;
	cin >> brandToSearch;

	for (int i = 0; i < sizeof(busses) / sizeof(Bus); i++)
	{
		if (brandToSearch == busses[i].brand)
		{
			cout << "Id  " << busses[i].id << endl;
			cout << "Line number is " << busses[i].lineNumber << endl;
			cout << "Seats are " << busses[i].seats << endl;
		}
	}

	int mostSeats = 0;

	for (int i = 0; i < sizeof(busses) / sizeof(Bus); i++)
	{
		if (busses->seats > mostSeats)
		{
			mostSeats = busses->seats;
			cout << busses->id;
		}
	}

	



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
