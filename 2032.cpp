#include<iostream>
using namespace std;

long long zuheshu(int a, int b)
{
	long long C = 1;
	if (b <= a / 2)
	{
		for (int i = a; i > a - b; i--)
		{
			C *= i;
		}
		for (int i = 1; i <= b; i++)
		{
			C /= i;
		}
		return C;
	}
	else
	{
		b = a - b;
		return zuheshu(a, b);
	}
}

void triangle(int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << zuheshu(i, j) << " ";
		}
		cout << endl;
	}
	cout << endl;
}

int main()
{
	int n;
	while (1)
	{
		cin >> n;
		if (n < 1 || n>31)
			break;
		else
		{
			triangle(n);
		}
	}
	return 0;
}
