#include<iostream>
using namespace std;

int main()
{
	long long a[51];
	a[1] = 1;
	a[2] = 2;
	for (int i = 3; i <= 50; i++)
	{
		a[i] = a[i - 2] + a[i - 1];
	}
	int n;
	while (cin >> n)
	{
		cout << a[n] << endl;
	}
	return 0;
}