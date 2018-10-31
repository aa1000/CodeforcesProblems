#include <cstdio>

int x;
int main()
{
	scanf("%d", &x);

	int cnt = 0;


	int n = 5;
	while (x)
	{
		int t = x / n;

		if (t > 0)
		{
			cnt += t;
			x -= t * n;
		}

		n--;
	}
	

	printf("%d", cnt);
	return 0;
}