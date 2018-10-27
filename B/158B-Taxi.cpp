//#include <iostream>
//#include <math.h>
//using namespace std;
//
//int main()
//{
//
//	int n;
//	cin >> n;
//
//	int x[5] = {0, 0, 0, 0, 0};
//	
//	int s;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> s;
//		x[s]++;
//	}
//
//	int num = 0;
//	num += x[4];
//	num += x[3];
//
//	if(x[3] >= x[1])
//	{
//		num += (int)ceil(x[2] / 2.0);
//		x[1] = 0;
//	}
//	else
//	{
//		x[1] -= x[3];
//
//		int rem = x[2] % 2;
//		num += x[2] / 2;
//
//		if(x[1] >= 2 && rem)
//		{
//			x[1] -= 2;
//			num+= 1;
//		}
//	}
//	num += (int)ceil(x[1] / 4.0);
//
//	cout << num;
//	return 0;
//}