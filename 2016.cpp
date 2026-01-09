#include<iostream>
using namespace std;

//void change()
//{
//	int sum;
//	cin >> sum;
//	double arr[100];
//	for (int i = 0; i < sum; i++)
//	{
//		cin >> arr[i];
//	}
//	int num=0;
//	for (int j = 1; j < sum; j++)
//	{
//		if (arr[j] < arr[j - 1])
//		{
//			num = j;
//		}
//	}
//	double temp = arr[num];
//	for (int m = 0; m < num; m++)
//	{
//		arr[m + 1] = arr[m];
//	}
//	arr[0] = temp;
//	for (int n = 0; n < sum; n++)
//	{
//		cout << arr[n] << " ";
//	}
//}
//
//int main()
//{
//	
//}

int main()
{
	int n, min, t;
	int num[100];
	while (cin >> n) 
	{
		for (int i = 0; i < n; i++) 
		{
			cin >> num[i];
			if (i == 0 || num[i] < min) 
			{
				min = num[i];
				t = i;
			}
		}
		num[t] = num[0];
		num[0] = min;
		for (int i = 0; i < n; i++) 
		{
			if (i == n - 1)
				cout << num[i] << endl;
			else
				cout << num[i] << " ";
		}
	}
	return 0;
}