#include <cstdio>
__int64 n, k, mid;
int main()
{
	scanf("%I64d%I64d", &n, &k);

	mid = n / 2;

	if(n % 2 != 0)
	{
		mid++;
	}

	if(k <= mid)
	{
		printf("%I64d", (2*k) - 1);
	}
	else
	{
		printf("%I64d", 2 * (k - mid) );
	}

	return 0;
}