#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int KiritoStrength, NumberOfDragons;
	cin >> KiritoStrength >> NumberOfDragons;

	// Store all dragon strengths and strength gains in a vector
	vector < pair<int, int> > Dragons;

	for (int i = 0; i < NumberOfDragons; i++)
	{
		pair<int, int> DragonStrengthAndGain;
		cin >> DragonStrengthAndGain.first >> DragonStrengthAndGain.second;
		Dragons.push_back(DragonStrengthAndGain);
	}

	// Sort them so we know Kirito would always fight the dragons in the ascending order of their strength
	// This means that he can get the max strength gain from dragons and if he reaches the end of the array, he wins the level.
	sort(Dragons.begin(), Dragons.end());

	int i = 0;
	for (; i < NumberOfDragons; i++)
	{
		if (KiritoStrength > Dragons[i].first)
		{
			KiritoStrength += Dragons[i].second;
		}
		else
		{
			break;
		}
	}

	if (i == NumberOfDragons)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}