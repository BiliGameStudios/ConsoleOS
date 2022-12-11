#pragma once

// include
#include <string.h>

// using
using namespace std;

// var
typedef bool flag;

string command;
flag quit = false;

// funcion
void commandEvent(string command)
{
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