#include <cstdio>

int n, a, b, cnt;
int main()
{
	scanf("%d", &n);

	int max = 1;
	while(n--)
	{
		scanf("%d", &b);
		if(b < a)
		{
			cnt = 1;
		}
		else
		{
			cnt++;
			
			if(cnt > max)
			{
				max = cnt;
			}
		}

		a = b;
	}

	printf("%d", max);
	return 0;
}