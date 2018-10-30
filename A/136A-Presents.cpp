#include <cstdio>

int n, a, out[101];
int main()
{
	scanf("%d", &n);

	for(int i = 1; i <= n; i++)
	{
		scanf("%d", &a);
		out[a] = i;
	}

	for(int i = 1; i <= n; i++)
	{
		printf("%d ", out[i]);
	}

	return 0;
}