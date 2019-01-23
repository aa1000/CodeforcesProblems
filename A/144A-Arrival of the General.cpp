#include <cstdio>
#include <algorithm>

using namespace std;

typedef std::reverse_iterator<int*> Rev;
int main()
{
	int n;
	int a[100];

	

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", a + i);
	}

	int max_pos = distance(a, max_element(a, a + n));
	

	int s = 0;

	while (max_pos > 0)
	{
		swap(a[max_pos], a[max_pos - 1]);
		s++;
		max_pos--;
	}

	int min_pos = Rev(a) -  min_element( Rev(a + n), Rev(a) ) - 1;

	while (min_pos < n-1)
	{
		swap(a[min_pos], a[min_pos + 1]);
		s++;
		min_pos++;
	}


	printf("%d", s);

}