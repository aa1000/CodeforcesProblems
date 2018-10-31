#include <cstdio>

__int64 n, n_odd, n_even;
int main()
{
	scanf("%I64d", &n);

	n_odd = ( (n - 1) / 2 ) + 1;
	n_even = n - n_odd;

	printf("%I64d", ((n_even + 1) * n_even) - (n_odd * n_odd) );

	return 0;
}