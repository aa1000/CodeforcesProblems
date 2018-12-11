#include <cstdio>


int main()
{
	int n, m;
	scanf("%d%d", &n, &m);

	int NumberOfMoves = m < n ? m : n;

	printf( NumberOfMoves % 2 == 0 ? "Malvika" : "Akshat");

	return 0;
}