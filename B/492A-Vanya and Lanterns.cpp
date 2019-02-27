#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
	int NumberOfLanterns, LengthOfTheStreet;
	cin >> NumberOfLanterns >> LengthOfTheStreet;

	int Lanterns[1000];

	for (int i = 0; i < NumberOfLanterns; i++)
	{
		cin >> Lanterns[i];
	}

	// Sort all lanterns according to their position in the street
	sort(Lanterns, Lanterns + NumberOfLanterns);

	// Now we will loop over all the lanterns to find the largest distance between two lanterns,
	// or if the the distance between a lantern and the start or the end of the street is largest than half of the max distance between two lanterns
	int CurrentLanternPoint = Lanterns[0];

	// Set double the distance between the first lantern and the start as the first max and see if there is a larger distance.
	int LastLanternPoint = 0;
	int MaxDistanceBetweenLanterns = (CurrentLanternPoint - LastLanternPoint) * 2;

	for (int i = 0; i < NumberOfLanterns; i++)
	{
		CurrentLanternPoint = Lanterns[i];
		if ((CurrentLanternPoint - LastLanternPoint) > MaxDistanceBetweenLanterns)
		{
			MaxDistanceBetweenLanterns = CurrentLanternPoint - LastLanternPoint;
		}
		LastLanternPoint = CurrentLanternPoint;
	}

	// See if the distance between the last lantern and the end of the street is larger than the largest distance between two lanterns
	// (or larger than the distance between the first lantern and the beginning of the street).
	if ((LengthOfTheStreet - LastLanternPoint) * 2 > MaxDistanceBetweenLanterns)
	{
		MaxDistanceBetweenLanterns = (LengthOfTheStreet - LastLanternPoint) * 2;
	}

	// Make the out stream print floats with a fixed 10 decimal places of precision.
	cout << fixed;
	cout << setprecision(10);
	// The largest radius of light needed would be half of the largest distance between two lanterns,
	// or the distance between a lantern and the start or end of the street if those are larger than half of the largest distance between two lanterns.
	cout << (double)MaxDistanceBetweenLanterns / 2.0;

	return 0;
}