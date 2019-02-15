#include <iostream>

using namespace std;

bool IsComposite(int N)
{
	// any number less than 4 is not composite (or equal to 5)
	if (N < 4 || N == 5)
		return false;

	// if the number can be divided by 2, 3 or 5, then it's composite.
	// Most - if not all- composite numbers should be dividable by 2, 3 or 5 .. ?
	if (N % 2 == 0 || N % 3 == 0 || N % 5 == 0)
		return true;
	else
		return false;
}
int main()
{
	int InputInt;
	cin >> InputInt;

	// Try to factorize the input into 2 numbers one of them being 4 since 4 is the smallest composite number.
	int N = 4;
	int M = InputInt - 4;

	// Check if both factors are composite.
	// If they are not composite, increment one factor while decreasing the other till we reach 2 composite factors.
	while ( !(IsComposite(N) && IsComposite(M)) )
	{
		N++;
		M--;
	} 

	cout << N << " " << M;

	return 0;
}
