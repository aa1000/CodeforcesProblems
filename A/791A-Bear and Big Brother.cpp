#include <iostream>

using namespace std;

int main()
{
	int LimakWeight, BobWeight;

	cin >> LimakWeight >> BobWeight;

	int NumberOfYears = 0;

	while (LimakWeight <= BobWeight)
	{
		NumberOfYears++;

		LimakWeight = LimakWeight * NumberOfYears * 3;
		BobWeight = BobWeight * NumberOfYears * 2;

	}

	cout << NumberOfYears;

	return 0;
}