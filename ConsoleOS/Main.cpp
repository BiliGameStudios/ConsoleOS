#include <iostream>
#include "Command.h"

using namespace std;

int main()
{
	while (true)
	{
		cout << "<<<";
		cin >> command;
		commandEvent(command);
		if (quit)
		{
			break;
		}
	}

	return 0;
}