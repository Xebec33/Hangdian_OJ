#include<iostream>
using namespace std;

int main()
{
	int n;
	char x;
	int y, fx;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		if ('A' <= x&&x <= 'Z')
			fx = int(x) - 64;
		if ('a' <= x&&x <= 'z')
			fx = -int(x) + 96;
		cout << y + fx << endl;
	}
	return 0;
}