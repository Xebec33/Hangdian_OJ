#include<iostream>
using namespace std;
#include<cmath>

int main()
{
	int n;
	long a, b;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int counter = 0;
		long sum[100], all_1 = 1, all_2 = 1;
		cin >> a >> b;
		for (int i = 2; i < sqrt(a); i++)
		{
			if (a%i == 0)
			{
				sum[counter] = i;
				sum[counter + 1] = a / i;
				counter += 2;
			}
		}
		for (int i = 0; i < counter; i++)
			all_1 += sum[i];
		counter = 0;
		for (int i = 2; i < sqrt(b); i++)
		{
			if (b%i == 0)
			{
				sum[counter] = i;
				sum[counter + 1] = b / i;
				counter += 2;
			}
		}
		for (int i = 0; i < counter; i++)
			all_2 += sum[i];
		if (all_1 == b && all_2 == a)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}