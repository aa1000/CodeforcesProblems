#include <cstdio>
#include <algorithm>

int n, m, f[1000];
int main()
{
	scanf("%d%d", &n, &m);

	for(int i = 0; i < m; i++)
	{
		scanf("%d", f + i);
	}

	std::sort(f, f + m);

	int min = f[n - 1] - f[0];

	for(int i = 1; i <= m - n; i++)
	{
		int diff = f[i + n - 1] - f[i];
		if( diff < min )
		{
			min = diff;
		}
	}

	printf("%d", min);
	return 0;
}