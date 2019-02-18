#include <iostream>
#include <string>
using namespace std;

int main()
{
	int NumberOfLayers;
	cin >> NumberOfLayers;

	// Having the feeling layers in an array makes it possible to use the mod operator instead of an if statement and
	// work with any number of states not just two but they have to be shifted by one position to the right
	// a.k.a the last index has to be the first
	// ex. if we have 2 layers then 1 % 2 is 1 which is hate and 2 % 2 is 0 which is love
	string FeelingLayers[2] = { "I love ", "I hate " };

	string Feelings = "";

	// Loop for the number of layers and add the feeling layers concatenating a "that" in the end if it's not the last layer
	for(int i = 1; i <= NumberOfLayers; i++)
	{
		Feelings += FeelingLayers[i % 2];

		if (i < NumberOfLayers)
			Feelings += "that ";
	}

	// Add an it in the end to finish the sentence and print it out
	cout << Feelings + "it";

	return 0;
}