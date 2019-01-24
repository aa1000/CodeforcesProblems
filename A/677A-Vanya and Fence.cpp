#include <cstdio>

int main()
{
	int n, h, a;
	scanf("%d%d", &n, &h);

	int sum = 0;
	while (n--)
	{
		scanf("%d", &a);
		sum += a > h ? 2 : 1;
	}

	printf("%d", sum);

	return 0;
}