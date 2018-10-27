#include "stdio.h"
#include <ctype.h>

int main()
{
	char str[101];
	scanf("%s", str);

	if(str[1] == '\0')
	{
		if(str[0] >= 'a' && str[0] <= 'z')
		{
			 str[0] = toupper(str[0]);
		}
		else
		{
			 str[0] = tolower(str[0]);
		}
		printf("%c", str[0]);
		return 0;
	}

	bool RestCaps = true;

	int i = 1;
	while (str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			RestCaps = false;
			break;
		}
		i++;
	}

	if(RestCaps)
	{
		if(str[0] >= 'a' && str[0] <= 'z')
		{
			str[0] = toupper(str[0]);
			i = 1;
		}
		else
		{
			i = 0;
		}
		while (str[i] != '\0')
		{
			str[i] = tolower(str[i]);
			i++;
		}


		
	}

	
	


	printf("%s", str);

	return 0;
}