#include "stdio.h"

char s[101], c;
int i;
int main()
{

	while( (s[i]=getchar()) != '\n')
	{
		i++;
	}
	

	while( (c=getchar()) != '\n' && i >= 0)
	{
		if(c != s[--i])
		{
			printf("NO");
			return 0;
		}
	}

	printf("YES");

	return 0;
}