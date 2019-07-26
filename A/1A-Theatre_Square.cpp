#include "stdio.h"


int main()
{
	int n, m, a;
	scanf("%d%d%d", &n, &m, &a);

	// if the size is 1 then we can just return the area
	if(a == 1)
	{
		// has to be an unsigned long long / int64 because the result can be more than 10e18
		printf("%I64u", (unsigned __int64) n * m);
		return 0;
	}
	// check how many tile sides can fit into the square side n
	float n_num = (float)n / a;
	// if there is a fraction then just add 1 and remove the fraction because we can only have full tiles
	long int_n_num = (int) n_num;
	if(n_num != int_n_num)
		int_n_num++;

	// check how many tile sides can fit into the square side m
	float m_num = (float)m / a;
	// if there is a fraction then just add 1 and remove the fraction because we can only have full tiles
	int int_m_num = (int)m_num;
	if (m_num != int_m_num)
		int_m_num++;

	// the number we need would be the product of how many tiles sides can fill each square side
	printf("%I64u",(unsigned __int64) int_n_num * int_m_num);

	return 0;
}