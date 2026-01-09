#include<iostream>
using namespace std;

int main()
{
	int C, n;
	cin >> C;
	for (int i = 0; i < C; i++)
	{
		cin >> n;
		cout << 2 * n*n - n + 1 << endl;
	}
	return 0;
}