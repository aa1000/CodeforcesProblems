#include "stdio.h"


int main()
{
	char str[101];
	scanf("%s", &str);

	int i = 0;
	while (str[i] != '\0')
	{
		char c = str[i];
		if (c == 'H' || c == 'Q' || c == '9')
		{
			printf("YES");
			return 0;
		}
		i++;
	}

	printf("NO");

	return 0;
}