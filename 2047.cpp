#include<iostream>
#include<cmath>
using namespace std;

//long C(int m, int n)
//{
//	if (n > m / 2)
//		n = m - n;
//	long result = 1;
//	for (int i = m; i > m - n; i--)
//		result *= i;
//	for (int i = 2; i <= n; i++)
//		result /= i;
//	return result;
//}
//
//int main()
//{
//	int n;
//	long long num;
//	long long all = 0;
//	while (cin >> n)
//	{
//		for (int i = n / 2; i <= n; i++)
//		{
//			num = pow(2, i);
//			num *= C(i + 1, n - i);
//			all += num;
//		}
//		cout << all << endl;
//		all = 0;
//	}
//	return 0;
//}

int main()
{
	long long a[40];
	a[1] = 3;
	a[2] = 8;
	for (int i = 3; i <= 40; i++)
	{
		a[i] = 2 * a[i - 2] + 2 * a[i - 1];
	}
	int n;
	while (cin >> n)
	{
		cout << a[n] << endl;
	}
	return 0;
}