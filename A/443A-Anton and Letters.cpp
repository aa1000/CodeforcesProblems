#include <iostream>
#include <set>

using namespace std;

int main()
{
	/* Sets has only unique members,
	 * so we can add all the small English letters we encounter to a set and print the size of it */
	
	set<char> Letters;
	char InputLetter;

	// Keep reading input until we meet a closing curly braces
	while (cin >> InputLetter && InputLetter != '}')
	{
		// Add the input to the set if it is a part of the small case English alphabet
		if (InputLetter >= 'a' && InputLetter <= 'z')
			Letters.insert(InputLetter);
	}
	
	cout << Letters.size();

	return 0;
}
