#include <iostream>

using namespace std;

int main()
{
	int NumberOfHouses, NumberOfTasks;
	cin >> NumberOfHouses >> NumberOfTasks;

	unsigned long long TimeUnitsNeeded = 0;

	int HouseNumberForIthTask;

	int LastStopHouseNumber = 1;
	for (int i = 0; i < NumberOfTasks; i++)
	{
		cin >> HouseNumberForIthTask;
		// This gives us the number of steps between two numbers in a circular repeating series.
		TimeUnitsNeeded += ( (HouseNumberForIthTask - LastStopHouseNumber) + NumberOfHouses ) % NumberOfHouses;

		LastStopHouseNumber = HouseNumberForIthTask;
	}

	cout << TimeUnitsNeeded;

	return 0;
}