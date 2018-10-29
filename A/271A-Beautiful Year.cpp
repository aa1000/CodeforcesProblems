#include <cstdio>

int y;

int main()
{
	scanf("%d", &y);

	for( y ++ ; y <= 9012; y++)
	{
		int num = y;
		bool visited [10] = {false};
		while(num != 0)
		{
			if(visited[num % 10])
			{
				break;
			}
			visited[num % 10] = true;
			num /= 10;
		}

		if(num == 0)
		{
			printf("%d", y);
			break;
		}
	}
	return 0;
}