#include <cstdio>
//#include <set>
//#include <numeric>
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//
//	std::set<int> levels;
//	
//	int p;
//	scanf("%d", &p);
//
//	while(p--)
//	{
//		int temp;
//		scanf("%d", &temp);
//		levels.insert(temp);
//	}
//
//	scanf("%d", &p);
//
//	while (p--)
//	{
//		int temp;
//		scanf("%d", &temp);
//		levels.insert(temp);
//	}
//
//	int sum1 = std::accumulate(levels.begin(), levels.end(), 0);
//	int sum2 = n*(1 + n) / 2;
//
//
//	printf(sum1 >= sum2 ? "I become the guy." : "Oh, my keyboard!");
//
//	return 0;
//}

int levels[100];
 int main()
{
	int n;
	scanf("%d", &n);

	int SumLevels = 0;
	for(int i = 0; i < 2; i++)
	{
		int p;
		scanf("%d", &p);

		while (p--)
		{
			int idx;
			scanf("%d", &idx);
			if(!levels[idx])
				SumLevels++;

			levels[idx] = 1;
		}

	}

	printf(SumLevels == n ? "I become the guy." : "Oh, my keyboard!");

	return 0;
}