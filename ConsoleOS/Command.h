#pragma once

// include
#include <iostream>

// using
using namespace std;

// var
typedef bool flag;

string command;
flag quit = false;

// funcion
void welcome()
{
	cout << "================================================" << endl;
	cout << "====    ===    ==  === ==   ===   == ====     ==" << endl;
	cout << "=== ====== ==== = = == = ===== === = ==== ======" << endl;
	cout << "== ======= ==== = = == = ===== === = ====    ===" << endl;
	cout << "== ======= ==== = == = ==   == === = ==== ======" << endl;
	cout << "=== ====== ==== = == = ===== = === = ==== ======" << endl;
	cout << "====    ===    == ===  ==   ===   ==    =     ==" << endl;
	cout << "=============== Operating System ===============" << endl << endl;

	cout << "System is booting, please wait..." << endl;

	for (long long i = 0; i <= 10000000000LL; i++)
	{
		continue;
	}

	system("cls");
}

void commandEvent(string command)
{
	//shutdown system
	if (command == "exit" || command == "quit" || command == "shutdown")
	{
		cout << "System is shutting down, please wait..." << endl;
		for (long long i = 0; i <= 10000000000LL; i++)
		{
			continue;
		}
		quit = true;
	}
}