#include<iostream>
using namespace std;

long long gcd(unsigned int a, unsigned int b)
{
	if (a%b == 0)
		return b;
	else
		return gcd(b, a%b);
}

int main()
{
	unsigned int n;
	while (cin >> n)
	{
		unsigned int a[100];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int b = 1;
		for (int i = 0; i < n; i++)
		{
			b = b * a[i] / gcd(b, a[i]);
		}
		cout << b << endl;
	}
	return 0;
}