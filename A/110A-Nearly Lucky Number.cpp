#include <cstdio>

unsigned __int64 n;
int nl;

int main()
{
	scanf("%I64d", &n);

	while(n != 0)
	{
		if(n % 10 == 7 || n % 10 == 4)
		{
			nl ++;
		}
		n /= 10;
	}

	printf( (nl == 4 || nl == 7) ? "YES" : "NO");
	return 0;
}