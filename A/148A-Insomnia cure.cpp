#include <cstdio>

int k, l, m, n, d, cnt;
int main()
{
	scanf("%d", &k);
	scanf("%d", &l);
	scanf("%d", &m);
	scanf("%d", &n);
	scanf("%d", &d);

	while(d)
	{
		if( d % k == 0 || d % l == 0 ||	d % m == 0 || d % n == 0)
		{
			cnt++;
		}

		d--;
	}

	printf("%d", cnt);
	return 0;
}