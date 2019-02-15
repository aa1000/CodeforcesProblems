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

	// Try to divide the input into 2 numbers
	int N = 4;
	int M = InputInt - 4;

	//// check if the input can be evenly divided into two composite numbers
	//if ( (InputInt / 2.f) ==  N && IsComposite(N))
	//{
	//	cout << N << " " << M;
	//}
	//else
	//{
	//	// If the input was odd, we need to add the fraction part that was truncated in int division
	//	if (! (InputInt % 2 == 0) )
	//		N++;

	//	// If it can't be evenly divided then we can start adding one to one of the factors
	//	// And subtracting one from the other, if the result is 2 composite numbers, then that is our output


	//}

	while ( !(IsComposite(N) && IsComposite(M)) )
	{
		N++;
		M--;
	} 

	cout << N << " " << M;

	return 0;
}