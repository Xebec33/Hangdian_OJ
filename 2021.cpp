//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n, arr[99], sum = 0;
//	while (1)
//	{
//		cin >> n;
//		if (n != 0)
//		{
//			for (int i = 0; i < n; i++)
//			{
//				cin >> arr[i];
//			}
//			for (int i = 0; i < n; i++)
//			{
//				sum += arr[i] / 100;
//				sum += arr[i] % 100 / 50;
//				sum += arr[i] % 50 / 10;
//				sum += arr[i] % 10 / 5;
//				sum += arr[i] % 5 / 2;
//				sum += arr[i] % 2 / 1;
//			}
//			cout << sum << endl;
//			sum = 0;
//		}
//		else
//			break;
//	}
//	return 0;
//}

#include<iostream>
using namespace std;
#include<cmath>

int main()
{
	int n, i, sum = 0;
	while (cin >> n)
	{
		if (n == 0)
			break;
		int *a = new int[n];
		for (i = 0; i < n; i++)
			cin >> a[i];
		for (i = 0; i < n; i++)
		{
			sum += a[i] / 100;
			sum += a[i] % 100 / 50;
			sum += a[i] % 100 % 50 / 10;
			sum += a[i] % 100 % 50 % 10 / 5;
			sum += a[i] % 100 % 50 % 10 % 5 / 2;
			sum += a[i] % 100 % 50 % 10 % 5 % 2 / 1;
		}
		cout << sum << endl;
		sum = 0;
		delete[]a;
	}
	return 0;
}
