#include <cstdio>
int n, p, q, s;
int main()
{
	scanf("%d", &n);

	for(int i = 0; i < n; i++)
	{
		scanf("%d%d", &p, &q);

		if( (q - p) > 1 )
		{
			s++;
		}
	}

	printf("%d", s);

	return 0;
}