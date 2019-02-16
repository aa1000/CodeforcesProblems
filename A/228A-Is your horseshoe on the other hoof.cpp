#include <iostream>

using namespace std;

int main()
{
	int NumberOfShoesToBuy = 0;

	int InputColors[4];

	// Take input in a loop and increment the shoes counter if there is a matching color in previous input.
	for (int i = 0; i < 4; i++)
	{
		cin >> InputColors[i];

		// Count the number of previous occurrences of that number (color), if they are more than 0 and the number is not unique,
		// then the horse needs to buy a new shoe.
		int ShoesColorSimilarityCounter = 0;
		for (int j = 0; j < i; j++)
		{
			if (InputColors[j] == InputColors[i])
				ShoesColorSimilarityCounter++;
		}

		if (ShoesColorSimilarityCounter > 0)
			NumberOfShoesToBuy++;
	}

	// The number of shoes the horse needs to buy is the number of shoes with matching colors - 1
	// The horse will need to buy only 3 shoes if he has 4 matching ones.
	cout << NumberOfShoesToBuy;

	return 0;
}