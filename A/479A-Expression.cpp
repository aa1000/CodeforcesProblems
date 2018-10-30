#include <cstdio>

int a, b, c, mx;
int main()
{
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	mx = a + b  + c;
	
	if ( (a * b * c) > mx)
	{
		mx = a * b * c;
	}

	if( ((a + b) * c) > mx )
	{
		mx = (a + b) * c;
	}

	if( (a * (b + c)) > mx )
	{
		mx = a * (b + c);
	}

	printf("%d", mx);
	return 0;
}