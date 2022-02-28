#include <iostream>

using namespace std;

int main()
{
	int numberChoice;
	bool numberEntered = false;
	bool wait = false;

	cout << "Enter a number from 1-10\n";

	while (!numberEntered && !wait)
	{
		wait = true;

		cin >> numberChoice;

		if (numberChoice < 1 || numberChoice > 10)
		{
			cout << "Please enter a valid number\n";

			wait = false;
		}
		else
		{
			cout << "Thank you!\n";
			cout << "Number entered: " << numberChoice;

			numberEntered = true;
		}
	}
}