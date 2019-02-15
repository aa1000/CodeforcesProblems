#include <iostream>

using namespace std;

int main() 
{
	// String length.
	int n;
	cin >> n;

	// character string to read.
	char InputString[100];
	cin >> InputString;

	// bool array to detect if a letter has occurred before, default to false.
	bool Alphabet[26] = { false };

	// Every time we encounter a unique character we will increase this sum and if we hit 26 then it's a pangram.
	int SumOfUniqueCharaters = 0;

	while (n--)
	{
		// turn all letters into lower case.
		InputString[n] = tolower(InputString[n]);

		// Map the ASCII code of the character to an index of the bool array ( 'a' = 0 ).
		int ASCIIToIndex = InputString[n] - 'a';

		if (!Alphabet[ASCIIToIndex])
		{
			// If there was no previous occurrence of this character then increment the sum and not that we encountered it.
			Alphabet[ASCIIToIndex] = true;
			SumOfUniqueCharaters++;
		}
	}

	if (SumOfUniqueCharaters == 26)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}