#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int a = 0, d = 0;
	char c;

	while (n--)
	{
		cin >> c;

		if (c == 'A')
			a++;
		else
			d++;

	}

	if (a > d)
		cout << "Anton";
	else if (d > a)
		cout << "Danik";
	else
		cout << "Friendship";

	return 0;
}