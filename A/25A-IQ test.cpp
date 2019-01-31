#include <cstdio>

int main()
{
	int n, a[100], sum = 0, min, max;

	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", a + i);
		a[i] = a[i] % 2;
		sum += a[i];
	}

	min = max = a[0];

	int maxidx = 0;
	int minidx = 0;

	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			maxidx = i;
		}

		if (a[i] < min)
		{
			min = a[i];
			minidx = i;
		}
	}

	if (sum / (float)n > 0.5)
		printf("%d", minidx+1);
	else
		printf("%d", maxidx+1);

	return 0;
}