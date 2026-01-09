#include<iostream>
using namespace std;
#include<cmath>

long factor(long n)
{
	long factornum = 0;
	for (int i = 1; i <= n; i++)
	{
		if (n%i == 0)
			factornum ++;
	}
	return factornum;
}

int main()
{
	long n;
	while (cin >> n)
	{
		if (factor(n) % 2 == 0)
			cout << 0 << endl;
		if (factor(n) % 2 == 1)
			cout << 1 << endl;
	}
	return 0;
}