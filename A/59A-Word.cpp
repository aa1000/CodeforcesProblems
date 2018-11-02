#include <cstdio>

char c, s[101];
int up, lo, i, off;
int main()
{
	while( (c=getchar()) != '\n')
	{
		if(c >= 'a' && c <= 'z')
			lo++;
		else
			up++;

		s[i] = c;
		i++;
	}

	for(int j = 0; j < i; j++)
	{
		if (lo >= up)
		{
			if (s[j] >= 'A' && s[j] <= 'Z')
				s[j] -= 'A' - 'a';
		}
		else
		{
			if (s[j] >= 'a' && s[j] <= 'z')
				s[j] -= 'a' - 'A';
		}

		putchar(s[j]);
	}

	return 0;
}