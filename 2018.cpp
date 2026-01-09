#include<iostream>
using namespace std;

int main()
{
	int a = 1, b = 0, c = 0, d = 0, n, temp = 0;
	while (1)
	{
		cin >> n;
		if (n!=0)
		{
			for (int i = 0; i < n-1; i++)
			{
				a += b;
				temp = a;
				b = c;
				c = d;
				d = temp;
			}
			cout << a + b + c + d << endl;
			a = 1;
			b = 0;
			c = 0;
			d = 0;
		}
		else
			break;
	}
}