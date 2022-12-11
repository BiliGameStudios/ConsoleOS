#include "Command.h"

using namespace std;

int main()
{
	// system init
	system("mode con cols=48 lines=20  ");
	welcome();

	// system
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