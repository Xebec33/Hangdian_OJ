#include<iostream>
using namespace std;

int main()
{
	int n, k, u;
	int ant[10];
	int c[44];
	int t[44];
	cin >> u;
	while (u--)
	{
		memset(ant, 0, sizeof(ant));
		memset(c, 0, sizeof(c));
		memset(t, 0, sizeof(t));
		cin >> n >> k;		//修n个学分，k门课
		for (int i = 1; i <= k; i++)
		{
			int t1, t2;
			cin >> t1 >> t2;
			ant[t1] = t2;
		}
		for (int i = 0; (i <= ant[1]) && (i <= 40); i++)
			c[i] = 1;
		for (int i = 2; i <= 8; i++)
		{
			for (int j = 0; j <= 40; j++)
				for (int k = 0; (k <= ant[i] * i) && (k + j <= 40); k += i)
					t[j + k] += c[j];
			for (int j = 0; j <= 40; j++)
			{
				c[j] = t[j];
				t[j] = 0;
			}
		}
		cout << c[n];
	}
	return 0;
}
