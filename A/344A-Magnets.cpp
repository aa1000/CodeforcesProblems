#include <cstdio>

int main()
{
	int n;
	scanf("%d", &n);

	int groups = 1;
	int PrevM, M;

	scanf("%d", &M);
	PrevM = M;
	n--;

	while(n--)
	{
		scanf("%d", &M);
		if(M != PrevM)
			groups++;

		PrevM = M;
	}

	printf("%d", groups);

	return 0;
}