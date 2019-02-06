#include <iostream>

using namespace std;

int main()
{
	int n, h[30], g[30];

	cin >> n;

	// Input all host team colors and guest team colors into separate arrays
	for (int i = 0; i < n; i++)
	{
		cin >> h[i] >> g[i];
	}

	int TotalColorChange = 0;

	// For every host team color, loop over all guest team colors and check if they are matching.
	// If they match then the host team would have to change so we increment the counter.
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (h[i] == g[j])
				TotalColorChange++;
		}
	}

	cout << TotalColorChange;

	return 0;
}